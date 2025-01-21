## A Totally Irrelevent Kernal Module

#### How to Use
1. create and start a virtualenv using multipass or something else *(Or dont, though I wont be resposible if you somehow managed to destroy your system with this)*
2. install the revelent package 
    ```bash
    ### for debian users
    sudo apt install -y build-essential linux-headers-$(uname -r) kmod
    ```
3. Copy or better yet type the code down on another file to the virtualenv or anywhere you like
4. Now use the following commands on the same directory as the code:
     ```bash   
    ### To build the kernal module
    make                        

    ### To install the kernal module
    sudo insmod main.ko         

    ### To remove the kernal module
    sudo remmod main             

    ### to view the printed log
    sudo dmesg                  
    ```
<div style="text-align: center;">
!<img src="./image.png" height=400px align=center><img>
</div>


