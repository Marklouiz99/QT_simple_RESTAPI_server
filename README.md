# RESTAPI Server

## Table of Contents
- [Project Description](#project-description)
- [Features](#features)
- [Running](#running)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

  ---

  ## Project Description
  **SimpleRESTAPIServer** A simple REST API server built with C++ and Qt. This project demonstrates how to create an asynchronous, event-driven server using QTcpServer and QTcpSocket for I/O,
  a custom HTTP parser, a Router for dispatching requests to various handlers, and offloading CPU-intensive tasks via a thread pool (using QtConcurrent/QThreadPool).

  ---

  ---

  ## Features
1.**Asynchronous I/O**:
Utilizes Qt's event loop with non-blocking sockets for efficient connection management.

2.**Custom HTTP Parsing:**
A simple parser extracts the HTTP method and URL from raw request data. (Note: Full header and body parsing is left for future improvements.)

3.**Routing and Dispatch**:
A Router class maps static URL paths to CRUDHandler objects to process incoming HTTP requests and generate appropriate responses.

4.**Thread Pool Offloading**:
Heavy request processing is offloaded to a thread pool using QtConcurrent to maintain responsiveness.

5.**Memory Management**:
The project uses Qt's parent–child mechanism and QSharedPointer for managing dynamically allocated objects, ensuring there are no memory leaks.

---

---

## Running the Server
After building, run the server executable. By default, the server listens on port 8080:
You should see a log message similar to:
```csharp
[HttpServer] Listening on 0.0.0.0 port 8080
```

---

---

## Testing

You can test the server using tools such as:

1.**Postman:**
Send HTTP GET, POST, PUT, or DELETE requests to http://<server_ip>:8080/crud.
2.**cURL:** For example:
```bash
curl http://localhost:8080/crud
```
3.**Telnet:** Manually send HTTP requests:
```bash
telnet localhost 8080
```
Then type:
```vbnet
GET /crud HTTP/1.1
Host: localhost
```

---

---
## Contributing:

```
Contributions are welcome! Please fork the repository, make improvements, and open a pull request. For suggestions or bug reports, feel free to open an issue on GitHub.
```
---

---
## License

```
This project is licensed under the MIT License. See the LICENSE file for details.
```
---

---
