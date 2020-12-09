linux多路io

# Select
Select command allows to monitor multiple file descriptors,
waiting until one of the file descriptors become active.
Select命令允许我们监听多个文件描述符。一直阻塞直到有一个文件描述符被激活。

- **Select** works like an interrupt handler, 
which gets activated as soon as any file descriptor sends any data.

Select的工作方式类似于中断处理程序，该中断处理程序会在任何文件描述符发送任何数据后立即激活

# Data structure used for select: fd_set
It contains the list of file descriptors to monitor for some activity.
There are four functions associated with fd_set:

```
fd_set readfds;

// Clear an fd_set
FD_ZERO(&readfds);  

// Add a descriptor to an fd_set
FD_SET(master_sock, &readfds);   

// Remove a descriptor from an fd_set
FD_CLR(master_sock, &readfds); 

//If something happened on the master socket , then its an incoming connection  
FD_ISSET(master_sock, &readfds); 
```

select函数
```
activity = select( max_fd + 1 , &readfds , NULL , NULL , NULL);
int select(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, struct timeval *timeout);
```
