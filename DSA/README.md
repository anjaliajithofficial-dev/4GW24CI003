# Lab Book Automation System 📚💻

An automated student lab entry and exit tracking system implemented in C using linked list data structures. This system replaces traditional manual lab books with a digital solution for efficient lab management.

## 👥 Team Members

- **Meghana M** 
- **Anjali Ajith**-4GW24CI003

## 📋 Table of Contents

- [About the Project](#about-the-project)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Installation](#installation)
- [Usage Guide](#usage-guide)
- [Technical Implementation](#technical-implementation)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)
- [Acknowledgments](#acknowledgments)

## 🎯 About the Project

The **Lab Book Automation System** is a command-line application designed to automate the process of tracking student attendance in computer labs. The system allows students to clock in and out by scanning their USN/ID, while providing administrators with real-time occupancy data and historical records.

### Problem Statement

Traditional paper-based lab books have several limitations:
- Time-consuming manual entry processes
- Difficulty in tracking real-time lab occupancy
- Prone to errors and missing entries
- Hard to generate reports and statistics
- No automated time duration calculations

### Our Solution

A digital system that:
- Automates entry/exit recording with timestamp capture
- Tracks active lab sessions in real-time
- Maintains complete historical records
- Calculates session durations automatically
- Provides admin dashboard for monitoring

## ✨ Features

### Student Features
- **Quick Scan Entry/Exit**: Single-scan system for both check-in and check-out
- **Automatic Time Tracking**: System captures timestamps automatically
- **System Number Assignment**: Track which computer system is being used
- **Returning Student Recognition**: Remembers student names for repeat entries

### Admin Features
- **Real-Time Occupancy View**: See all currently active students
- **Duration Monitoring**: Track how long each student has been in the lab
- **Complete History**: Access full lab book records with all entries
- **Session Analytics**: View session durations and patterns

### Technical Features
- Dynamic memory allocation using linked lists
- Efficient search algorithms for student records
- Robust error handling and input validation
- Active/inactive session management
- Time calculation utilities

## 🏗️ System Architecture

### Data Structure

```c
struct Student {
    char name[50];          // Student's full name
    char id[20];            // USN/Student ID
    int systemNo;           // Computer system number
    struct tm startTime;    // Entry timestamp
    struct tm endTime;      // Exit timestamp (0 if active)
    struct Student *next;   // Pointer to next node
};
```

### Core Components

1. **Entry Management Module**
   - `handleScan()`: Manages student entry/exit logic
   - `findActiveEntry()`: Locates active student sessions
   - `findAnyEntry()`: Searches all records

2. **Admin Dashboard Module**
   - `displayActiveEntries()`: Shows current lab occupancy
   - `displayAllEntries()`: Displays complete history

3. **Utility Functions**
   - `clear_buffer()`: Input sanitization
   - Time calculation functions
   - Memory management routines

## 💾 Installation

### Prerequisites

- **GCC Compiler** (MinGW for Windows, GCC for Linux/Mac)
- **Operating System**: Windows 7+, Linux, macOS
- **Terminal/Command Prompt** access

### Steps

1. **Clone or download the source code**
```bash
git clone https://github.com/anjaliajithofficial-dev/4GW24CI003.git
cd 4GW24CI003/LabBookSystem
```

2. **Compile the program**
```bash
gcc lab_book_system.c -o lab_book
```

3. **Run the executable**
```bash
lab_book.exe
```

## 📖 Usage Guide

### Main Menu

```
** Main Menu **
1. Student Scan (Entry/Exit)
2. Admin View
3. Exit Program
```

### Student Workflow

1. **First-Time Entry**
   - Select option 1 (Student Scan)
   - Enter your USN/ID (e.g., 4GW24CI025)
   - Enter your full name when prompted
   - Enter the system number you're using
   - ✅ Entry recorded with start time

2. **Returning Entry**
   - Select option 1
   - Enter your USN/ID
   - System recognizes you automatically
   - Enter system number
   - ✅ New session created

3. **Exit/Clock Out**
   - Select option 1
   - Enter your USN/ID
   - ✅ System automatically records exit time and calculates duration

### Admin Workflow

1. **View Active Students**
   - Select option 2 (Admin View)
   - Select option 1 (View Active Students)
   - See real-time occupancy with durations

2. **View Complete History**
   - Select option 2 (Admin View)
   - Select option 2 (View Full Lab Book History)
   - See all entries with start/end times and durations

## 🔧 Technical Implementation

### Key Algorithms

**1. Entry/Exit Detection Logic**
```
IF student has active session THEN
    Mark exit time
ELSE
    Create new entry
    Mark start time
END IF
```

**2. Active Session Detection**
- Searches linked list for matching USN
- Checks if `endTime.tm_year == 0` (active flag)
- Returns node pointer or NULL

**3. Duration Calculation**
```c
double duration = difftime(mktime(&endTime), mktime(&startTime));
// Converts to minutes for display
```

### Data Structures Concepts Used

- **Linked List**: Dynamic student record storage
- **Structures**: Complex data type organization
- **Pointers**: Memory management and traversal
- **Time Structures**: `struct tm` for timestamp handling

### Memory Management

- Dynamic allocation using `malloc()`
- Proper NULL checks for allocation failures
- Input buffer clearing to prevent overflow
- (TODO: Deallocation on program exit)

## 📊 Sample Output

### Student Entry
```
--- Student Scan Terminal ---
Please 'scan' your USN/ID: 4GW24CI025
New student detected. Enter your full name: Meghana M
Enter the system number you are using: 15

✅ Entry added successfully!
Start Time: Tue Jan  7 10:30:45 2026
```

### Active Students View
```
--- Currently Active Students (System Occupancy) ---
Name            ID              System No   Start Time      Duration
--------------------------------------------------------------------------------
Meghana M       4GW24CI025      15          10:30:45        45 min (2700 sec)
Anjali Ajith    4GW24CI026      12          11:00:22        15 min (900 sec)
--------------------------------------------------------------------------------
Total Active Systems Occupied: 2
```


*Made with ❤️ for automating lab management*
