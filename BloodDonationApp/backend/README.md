# Blood Donation App Backend

A robust Spring Boot backend application for managing blood donation services, connecting donors with recipients, and managing blood bank operations.

## Technologies Used

- Java 11
- Spring Boot 2.7.0
- Spring Security
- Spring Data JPA
- MySQL Database
- JWT Authentication
- Swagger UI for API Documentation
- Maven for dependency management
- Lombok for reducing boilerplate code

## Prerequisites

- JDK 11 or higher
- Maven 3.6.x or higher
- MySQL Server
- IDE (IntelliJ IDEA recommended)

## Project Structure

```
backend/
├── src/
│   ├── main/
│   │   ├── java/
│   │   │   └── com.bloodbank/
│   │   │       ├── controllers/
│   │   │       ├── models/
│   │   │       ├── repositories/
│   │   │       ├── services/
│   │   │       └── security/
│   │   └── resources/
│   │       └── application.properties
│   └── test/
└── pom.xml
```

## Getting Started

1. Clone the repository
2. Configure MySQL database settings in `application.properties`
3. Run the following Maven commands:

```bash
# Clean and install dependencies
mvn clean install

# Run the application
mvn spring-boot:run
```

The application will start on `http://localhost:8080`

## API Documentation

Once the application is running, you can access the Swagger UI documentation at:
`http://localhost:8080/swagger-ui/`

## Features

- User Authentication and Authorization
- Blood Donor Management
- Blood Recipient Management
- Blood Inventory Management
- Blood Group Compatibility Checking
- Location-based Donor Search
- Emergency Blood Request System

## Security

The application uses JWT (JSON Web Token) for authentication and implements Spring Security for authorization. All sensitive endpoints are protected and require valid authentication.

## Database

The application uses MySQL as its primary database. Make sure to:
1. Create a database named `bloodbank`
2. Update the database credentials in `application.properties`
3. The application will automatically create the required tables on startup

## Contributing

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Create a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details. 