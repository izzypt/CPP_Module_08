# CPP_Module_08
 This module is designed to help you understand templated containers, iterators and algorithms in CPP. 


# Table of Content

- [What are containers](#containers)
- [Types of STL Container in C++](#types)
- [Sequential Containers](#sequential)
- [Associative Containers](#sequential)
- [Unordered Associative Containers](#sequential)

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

# Associative Containers in C++

In C++, associative containers <ins>allow us to store elements in sorted order</ins>. The order doesn't depend upon when the element is inserted.

Internally, they are implemented as binary tree data structures.

Types of Associative Containers

   - **Set**
   - **Map**
   - **Multiset**
   - **Multimap**

# Unordered Associative Containers in C++

In C++, STL Unordered Associative Containers provide the unsorted versions of the associative container.

Internally, unordered associative containers are implemented as hash table data structures.

Types of Unordered Associative Containers

   - **Unordered Set**
   - **Unordered Map**
   - **Unordered Multiset**
   - **Unordered Multimap**
