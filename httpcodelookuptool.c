#include <stdio.h>
#include <stdlib.h>

// Structure to store HTTP status code information
struct StatusCode {
    int code;
    const char *description;
    const char *explanation;
};

// Function to display HTTP status code information
void displayStatusCodeInfo(const struct StatusCode *statusCodes, int numCodes, int code) {
    for (int i = 0; i < numCodes; ++i) {
        if (statusCodes[i].code == code) {
            printf("HTTP Status Code: %d %s\n", statusCodes[i].code, statusCodes[i].description);
            printf("Explanation: %s\n", statusCodes[i].explanation);
            return;
        }
    }
    printf("HTTP status code not found.\n");
}

int main() {
    // Array of HTTP status code structures with common web-related status codes
    struct StatusCode statusCodes[] = {
        {100, "Continue", "The server will proceed with the request after receiving the headers."},
        {200, "OK", "The request was successful and the server returned the requested data."},
        {201, "Created", "A new resource was successfully created as a result of the request."},
        {204, "No Content", "The server fulfilled the request, but there is no additional content."},
        {400, "Bad Request", "The server cannot understand the request due to a client error."},
        {401, "Unauthorized", "Authentication is required or provided credentials are invalid."},
        {403, "Forbidden", "The client does not have permission to access the resource."},
        {404, "Not Found", "The requested resource could not be found on the server."},
        {500, "Internal Server Error", "An unexpected error occurred on the server."},
        {503, "Service Unavailable", "The server cannot handle the request temporarily due to maintenance or load."},
        // Add more HTTP status codes and explanations here
    };

    int numCodes = sizeof(statusCodes) / sizeof(statusCodes[0]); //Calculate Number of Status Codes

    printf("HTTP Status Code Lookup Tool\n"); //Print Program Header

    //User Interaction Loop
    while (1) { 
        int userInput; //Input Handling:
        printf("Enter an HTTP status code (or enter -1 to exit): ");
        scanf("%d", &userInput);
    
        //Exit Condition Check
        if (userInput == -1) {
            printf("Exiting the tool.\n");
            break;
        }

        //Validation Check
        if (userInput < 100 || userInput > 599) {
            printf("Invalid HTTP status code. Please enter a value between 100 and 599.\n");
            continue;
        }
        //Display Status Code Information
        displayStatusCodeInfo(statusCodes, numCodes, userInput);
    }

    return 0;
}

