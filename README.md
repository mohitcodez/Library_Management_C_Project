# 📚 Library Management System (C)

A simple command-line **Library Management System** written in C using file handling.  
It allows you to manage books, search, issue, and delete records — all stored locally in text files.

---

## 🧩 Features
- Add new books  
- Search books by name, author, or code  
- Modify or delete existing books  
- Issue and return books  
- User login and authentication  
- Stores data in text files (no database)

---

## ⚙️ How to Run

### Compile:
```bash
gcc main.c authentication.c book.c search.c uniquecodegen.c -o library
