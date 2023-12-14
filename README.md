# CPP_Module_08
 This module is designed to help you understand templated containers, iterators and algorithms in CPP. 


# Table of Content

- [What is STL](#stl)
- [What are STL containers](#containers)
- [Types of STL Container in C++](#types)
- [Sequential Containers](#sequential)
- [Associative Containers](#associative)
- [Unordered Associative Containers](#unordered)
- [Sequential Exampple](#sequential_example)
- [Associative Example](#associative_example)
- [Unordered Exampple](#unordered_example)

### Related links:
- https://www.scaler.com/topics/cpp/containers-in-cpp/

<a id="stl"></a>
# What is STL

STL (standard template library) is a software library for the C++ language that provides a collection of templates representing containers, iterators, algorithms, and function objects. In this tutorial, you will learn about C++ STL in detail.

STL has 4 major components:

- Algorithms
- Containers
- Functors
- Iterators

<a id="containers"></a>
# STL Containers

A Standard Template Library (STL) container in C++ is a template class or type that provides a way to store and organize elements of the same or different types. 

These containers implement various data structures and algorithms for common tasks, offering a high level of abstraction and providing a consistent interface. 

STL containers play a crucial role in C++ programming by offering efficient and reusable solutions for managing collections of data.

Containers abstract away the underlying data structure and implementation details, allowing programmers to focus on algorithms and logic without worrying about low-level details.

<a id="types"></a>
# Types of STL Container in C++

In C++, there are generally <ins>3 kinds of STL containers</ins>:

   - **Sequential Containers**
   - **Associative Containers**
   - **Unordered Associative Containers**

 ![image](https://github.com/izzypt/CPP_Module_08/assets/73948790/8869a758-5c09-4093-aaec-f0fe201b1778)


<a id="sequential"></a>
# Sequential Containers in C++

In C++, <ins>sequential containers allow us to store elements that can be accessed in sequential order</ins>.

Internally, sequential containers are implemented as arrays or linked lists data structures.

Types of Sequential Containers

   - **Array**
   - **Vector**
   - **Deque**
   - **List**
   - **Forward List**

![image](https://github.com/izzypt/CPP_Module_08/assets/73948790/6d8f1d41-c2c2-451e-a3b1-6459452de18b)


<a id="associative"></a>
# Associative Containers in C++

In C++, associative containers <ins>allow us to store elements in sorted order</ins>. The order doesn't depend upon when the element is inserted.

Internally, they are implemented as binary tree data structures.

Types of Associative Containers

   - **Set**
   - **Map**
   - **Multiset**
   - **Multimap**

![image](https://github.com/izzypt/CPP_Module_08/assets/73948790/07312051-ec3b-47df-897e-b5c3fc13d2e8)

<a id="unordered"></a>
# Unordered Associative Containers in C++

In C++, STL Unordered Associative Containers provide the unsorted versions of the associative container.

Internally, unordered associative containers are implemented as hash table data structures.

Types of Unordered Associative Containers

   - **Unordered Set**
   - **Unordered Map**
   - **Unordered Multiset**
   - **Unordered Multimap**

<a id="sequential_example"></a>
# Sequential Container Example

In this example, we will be using the vector class to demonstrate the working of a sequential container.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initialize a vector of int type
  vector<int> numbers = {1, 100, 10, 70, 100};

  // print the vector
  cout << "Numbers are: ";
  for(auto &num: numbers) {
    cout << num << ", ";
  }

  return 0;
}
```

Output:

```cpp
Numbers are: 1, 100, 10, 70, 100,
```
In the above example, we have created sequential container numbers using the vector class.

```cpp
vector<int> numbers = {1, 100, 10, 70, 100};
```
Here, we have used a ranged for loop to print each element of the container.

In the output, we can see the numbers are shown in sequential order as they were initialized.
```cpp
// output numbers
1, 100, 10, 70, 100,
```
<a id="associative_example"></a>
# Associative Container Example (set)
In this example, we will be using the set class to demonstrate the working of an associative container.

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {

  // initialize a set of int type
  set<int> numbers = {1, 100, 10, 70, 100};

  // print the set
  cout << "Numbers are: ";
    for(auto &num: numbers) {
      cout << num << ", ";
    }

  return 0;
}
```
Output:

```cpp
Numbers are: 1, 10, 70, 100,
```
In the above example, we have created an associative container using the set class.

We have initialized a set named numbers with unordered integers, along with a duplicate value 100:

```cpp
set<int> numbers = {1, 100, 10, 70, 100};
```
Then we print the content of the set using a ranged for loop.

In the output, we see that the numbers are sorted in ascending order with duplicate numbers removed. Initially, 100 was repeated twice but the set removes the duplicate number 100.

```cpp
// output numbers
1, 10, 70, 100
```
