# HTTP Status Code Lookup Tool Documentation

**Introduction**  

The HTTP Status Code Lookup Tool is a command-line utility written in C that allows you to quickly look up and understand the meanings of HTTP status codes commonly encountered when interacting with web applications. This tool provides explanations for different status codes to help you understand their context and possible solutions.

**Usage**

**Compile the Tool:** 
Before using the tool, you need to compile the C source code into an executable program. Open your terminal and navigate to the directory containing the source code file. Then, compile the code using a C compiler (e.g., GCC).

**Run the Tool:** 
Once the tool is compiled, you can run it from the terminal by entering the following command:
**./httpcodelookuptool**

**Using the Tool:**
Upon running the tool, you'll see a prompt asking you to enter an HTTP status code. You can enter any HTTP status code between 100 and 599.
If you want to exit the tool, enter -1.

**Viewing Results:**
The tool will display information about the entered HTTP status code, including its description and an explanation.
If the entered code is not within the valid range (100 to 599), you'll receive an error message.
If the entered code is not found in the list of known status codes, you'll be informed that the code was not found.

**Looping and Exiting:**
After viewing the results for an entered code, the tool will return to the initial prompt, allowing you to enter another code or exit.
To exit the tool, simply enter -1.

**Example:**

Let's say you want to understand the meaning of the HTTP status code 404. You would follow these steps:
1. Compile the tool if you haven't already:
2. Run the tool: ./httpcodelookuptool
3. Enter the HTTP status code you want to look up:
       Enter an HTTP status code (or enter -1 to exit): 404
4. View the result:
       HTTP Status Code: 404 Not Found
       Explanation: The requested resource could not be found on the server.
5. The tool returns to the prompt. If you're done using the tool, you can exit by entering -1:
       Enter an HTTP status code (or enter -1 to exit): -1
       Exiting the tool.


**Conclusion**

The HTTP Status Code Lookup Tool is a handy utility for understanding the meanings of HTTP status codes and their context. By following the steps outlined in this documentation, you can quickly access explanations for various status codes encountered in web applications.


