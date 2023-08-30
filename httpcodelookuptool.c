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
        {100, "Continue", "The server has received the request headers and will proceed with the request."},
        {200, "OK", "The request was successful and the server has returned the requested data."},
        {201, "Created", "The request was successful, and a new resource was created as a result."},
        {204, "No Content", "The server has successfully fulfilled the request, but there is no additional content to send."},
        {400, "Bad Request", "The server cannot understand the request due to a client error."},
        {401, "Unauthorized", "The request requires user authentication or the provided credentials are invalid."},
        {403, "Forbidden", "The server understood the request, but the client does not have permission to access the resource."},
        {404, "Not Found", "The requested resource could not be found on the server."},
        {500, "Internal Server Error", "There was an unexpected error on the server."},
        {503, "Service Unavailable", "The server is temporarily unable to handle the request due to maintenance or high load."},
    };

    int numCodes = sizeof(statusCodes) / sizeof(statusCodes[0]);

    int userInput;
    printf("HTTP Status Code Lookup Tool\n");

    while (1) {
        printf("Enter an HTTP status code (or enter -1 to exit): ");
        scanf("%d", &userInput);

        if (userInput == -1) {
            printf("Exiting the tool.\n");
            break;
        }

        if (userInput < 100 || userInput > 599) {
            printf("Invalid HTTP status code. Please enter a value between 100 and 599.\n");
            continue;
        }

        displayStatusCodeInfo(statusCodes, numCodes, userInput);
    }

    return 0;
}
