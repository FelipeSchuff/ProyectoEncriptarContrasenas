📄 README.md //english
🔐 Password Encryptor - C Program

This is a simple C program designed for educational purposes in a Programming Workshop. It allows the registration of a user by saving their username, email, encrypted password, a selected security question, and its corresponding answer.
🧠 Features

    User registration (username, email, password)

    Password encryption using a simple Caesar cipher (+5 ASCII shift)

    Security question selection from a fixed set

    Stores secret question and user response

    Displays stored user data (including encrypted password)

⚙️ How It Works

    The user enters a username, email, and password.

    The password is encrypted by shifting each character +5 positions in the ASCII table.

    The user selects a security question from a list of 4 options.

    The user enters the answer to the selected question.

    All data is printed at the end for verification purposes.

🧪 Example Questions

    Name of your first pet

    Name of your best friend

    Mother's name

    Favorite food

📌 Limitations

    Currently supports only 1 user (#define usuarios 1)

    Password length limited to 12 characters

    No input validation for email format or password strength

    Encryption is not secure — intended for learning only

📁 Compilation

To compile the program:

gcc main.c -o encryptor

Then run:

./encryptor

📄 README.md // español

🔐 Encriptador de Contraseñas - Programa en C

Este es un programa en C diseñado para fines educativos en un Taller de Programación. Permite registrar a un usuario guardando su nombre de usuario, correo, contraseña cifrada, una pregunta secreta seleccionada y su respectiva respuesta.
🧠 Características

    Registro de usuario (nombre, correo, contraseña)

    Cifrado de contraseña usando un cifrado César simple (+5 en ASCII)

    Selección de pregunta secreta de una lista fija

    Almacena la pregunta secreta y su respuesta

    Muestra los datos registrados (incluyendo la contraseña cifrada)

⚙️ ¿Cómo funciona?

    El usuario ingresa un nombre de usuario, correo y contraseña.

    La contraseña se cifra desplazando cada carácter +5 posiciones en la tabla ASCII.

    El usuario elige una pregunta secreta entre 4 opciones.

    Luego, ingresa la respuesta a esa pregunta.

    Al final se muestran todos los datos ingresados.

🧪 Preguntas de seguridad disponibles

    Nombre de su primera mascota

    Nombre de su mejor amigo(a)

    Nombre de su mamá

    Comida favorita

📌 Limitaciones

    Solo admite 1 usuario (#define usuarios 1)

    La contraseña está limitada a 12 caracteres

    No valida formato del correo ni fuerza de la contraseña

    El cifrado no es seguro, es solo con fines de aprendizaje

📁 Compilación

Para compilar el programa:

gcc main.c -o encriptador

Luego ejecuta:

./encriptador