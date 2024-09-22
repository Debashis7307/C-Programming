#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// A structure to represent a job
typedef struct JobBlock {
    char id;
    int deadline;
    int profit;
} Job;

// Comparison function to sort jobs by decreasing order of profit
int compare(const void* a, const void* b) {
    Job* temp1 = (Job*)a;
    Job* temp2 = (Job*)b;
    return (temp2->profit - temp1->profit); // Sort by profit (descending)
}

// Function to schedule jobs and calculate the maximum profit
void printJobScheduling(Job arr[], int n) {
    // Sort all jobs according to decreasing order of profit
    qsort(arr, n, sizeof(Job), compare);

    int result[n];  // Stores the result of scheduled jobs (job index)
    bool slot[n];   // Keeps track of free time slots
    int maxProfit = 0; // Variable to store maximum profit

    // Initialize all slots to be free
    for (int i = 0; i < n; i++)
        slot[i] = false;

    // Iterate through all given jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (starting from its deadline and going backwards)
        for (int j = (arr[i].deadline - 1); j >= 0; j--) {
            // Free slot found
            if (slot[j] == false) {
                result[j] = i;        // Add this job to result
                slot[j] = true;       // Mark this slot as occupied
                maxProfit += arr[i].profit; // Add job's profit to maxProfit
                break;
            }
        }
    }

    // Print the job sequence
    printf("Scheduled jobs: ");
    for (int i = 0; i < n; i++) {
        if (slot[i])
            printf("%c ", arr[result[i]].id);
    }
    
    // Print the maximum profit
    printf("\nMaximum Profit: %d\n", maxProfit);
}

int main() {
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);

    Job* arr = (Job*)malloc(n * sizeof(Job));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter job ID, deadline, and profit for job %d: ", i + 1);
        scanf(" %c %d %d", &arr[i].id, &arr[i].deadline, &arr[i].profit);
    }

    printJobScheduling(arr, n);

    free(arr);
    return 0;
}
