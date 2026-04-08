# مشروع ترتيب المصفوفة - Bubble Sort Project 🔄

## 💻 عن المشروع | About the Project

العربي:  
هذا المشروع برنامج بسيط بلغة C++ يقوم بترتيب مصفوفة من الأرقام التي يدخلها المستخدم باستخدام خوارزمية Bubble Sort.  
يوضح استخدام التوابع (functions) و المصفوفات الديناميكية (vectors).

English:  
This is a simple C++ program that sorts an array of numbers entered by the user using the Bubble Sort algorithm.  
It demonstrates the use of functions and vectors in C++.

## 🛠️ الميزات | Features

- يأخذ إدخال المستخدم لحجم المصفوفة والأرقام  
- يستخدم تابع منفصل bubbleSort() لترتيب المصفوفة  
- يعرض المصفوفة بعد الترتيب  
- كود مرتب ومُعلّق جيدًا

English:  
- Takes user input for array size and elements  
- Uses a separate function bubbleSort() to sort the array  
- Displays the array after sorting  
- Clean and well-commented code

## ⚡ طريقة الاستخدام | How to Use

1. انسخ المستودع:
  
   git clone https://github.com/momagd07-coder/BubbleSort_Project.git
   cd BubbleSort_Project
ترجمة الكود:
g++ -o bubble_sort main.cpp
تشغيل البرنامج:
./bubble_sort          # على Linux أو Mac
bubble_sort.exe        # على Windows
📊 مثال على الإخراج | Example Output
How many numbers in the array: 5
Enter the numbers to sort: 4 1 5 2 3

Sorted array: {1} {2} {3} {4} {5}
📝 ملاحظات | Notes
البرنامج يستخدم vector<int> للمصفوفات الديناميكية
الترتيب يتم باستخدام خوارزمية Bubble Sort الكلاسيكية
مناسب جداً لتعلم أساسيات C++ (مصفوفات، توابع، حلقات)
English:
Uses vector<int> for dynamic arrays
Implements the classic Bubble Sort algorithm
Ideal for learning C++ basics: arrays, functions, and loops
