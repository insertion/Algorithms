#define RED 1
#define BLACK 0
typedef struct 
{
    rb_tree * right;
    rb_tree * left;
    rb_tree * parent;
    bool color;
    int value;
} rb_tree;

rb_tree* insert_node(rb_tree * root ,rb_tree* current);
void insert_fix(rb_tree * root,rb_tree * current);