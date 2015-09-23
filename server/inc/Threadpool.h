#ifndef _THREADPOOL_H
#define _THREADPOOL_H
#include "Buffer.h"
#include <vector>
class Task;
class Thread;
class Threadpool
{
public:
	Threadpool(int bufsize,int threadNum);
	~Threadpool();
	void start();
	void stop();
	void addTask(Task* task);
	Task* getTask();
	void threadFunc();
private:
	int size_;
	Buffer buffer_;
	int threadNum_;
	std::vector<Thread *> vecThreads_;
	bool isExit_;
/*************************************/
};
#endif
