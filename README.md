🐾 VetClinicPro - A Comprehensive Veterinary Appointment System
Welcome to VetClinicPro, a streamlined system designed to manage patient information and appointments for veterinary clinics. Developed as part of my coursework at the School of Software Design and Data Science, this project showcases my journey in modular programming, data structures, and file handling in C.

📚 Table of Contents
About the Project
Features
Technologies Used
Getting Started
Sample Outputs
Reflection

📖 About the Project
This project was developed over three milestones:

Milestone 1: Creation of core helper functions to simplify data input and validation.
Milestone 2: Introduction of patient management using structured data types.
Milestone 3: Full integration of appointment scheduling with data persistence.
By the end, the project evolved into a robust, modular C application capable of handling complex operations seamlessly.

✨ Features
Robust Input Validation: Ensures reliable user inputs with custom error handling.
Patient Data Management: Add, edit, search, and remove patient records effortlessly.
Appointment Scheduling: Schedule and manage appointments with conflict detection.
Formatted Output Display: Consistent and clear presentation of patient data and appointment schedules.
🔧 Technologies Used
Language: C (C99 Standard)
IDE: Visual Studio
Version Control: Git & GitHub
Libraries: Standard C Libraries (stdio.h, string.h)
🚀 Getting Started
Prerequisites:
A C compiler like GCC.
Visual Studio (if following the assignment's IDE preference).
Installation:
Clone the repository:
bash
Copy
Edit
git clone https://github.com/YourUsername/VetClinicPro.git
cd VetClinicPro
Compile the project:
bash
Copy
Edit
gcc -Wall src/*.c -o vetclinic
Run the application:
bash
Copy
Edit
./vetclinic

📋 Sample Outputs
Here are some sample outputs from the application:

Adding a New Patient:
mathematica
Copy
Edit
Enter patient number: 101
Enter patient name: Buddy
Enter phone description [CELL, HOME, WORK, TBD]: CELL
Enter phone number (10 digits): 4161234567
*** New patient record added ***
Displaying All Patients:
markdown
Copy
Edit
Patient #  Name     Phone
-----------------------------------
101        Buddy    (416)123-4567
💡 Reflection
This project allowed me to dive deep into modular programming, emphasizing the importance of reusable code through helper functions. One of the most rewarding challenges was handling string validation without relying on standard library functions, which taught me to think critically about memory management and data integrity.

Throughout the milestones, I learned to balance functionality with user experience, ensuring that the application is both robust and user-friendly. This project solidified my understanding of struct-based data handling and provided hands-on experience in building scalable systems.
