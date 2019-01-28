/**
 * Queue data structure
 *
 * Similar to STL queue
 * push - add item
 * front - get item at the front of queue
 * pop - remove item
 **/

#ifndef QUEUE_H
#define QUEUE_H

class Queue {
 private:

  static const int MAX = 10;
  int myArray[MAX];
  int frontIndex;
  int backIndex;

 public:
  // default constructor
  Queue();

  // destructor
  ~Queue();

  // is queue empty?
  bool empty() const;

  // is queue full?
  bool full() const;

  // insert item
  void push(const int &value);

  // remove front item
  void pop();

  // retrieve the front item
  const int& front() const;
};


#endif  // QUEUE_H
