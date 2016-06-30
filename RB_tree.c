#include<stdio.h>
#include<stdlib.h>
#include"RB_tree.h"

rb_tree guard = {.color=BlACK};
//gcc扩展的初始化方式
//创建一个哨兵并初始化
rb_tree* insert_node(rb_tree * root ,rb_tree* current)
{
    //@返回root指针
    rb_tree *p,*nil=&guard,*temp=root;
    p=nil;
    while(root!=nil)
    {
        p=root;
        if(current->value > root->value)
            root=root->right;
        else
            root=root->left;
    }
    current->parent=p;
    if(p==nil)
        return current;
    else if(p->value >current->value)
        p->left=current;
    else
        p->right=current;
    current->left=nil;
    current->right=nil;
    current->color=RED;
    //对插入节点后的红黑树调整
    insert_fix(temp，current);
   return temp; 
}
void insert_fix(rb_tree * root,rb_tree * current)
{
    return;
}
int delete_node()
{
    return 0;
}
int main()
{
    return 0;
}