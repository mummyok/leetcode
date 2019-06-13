typedef struct 
{
    char* data;
    int length;
    int top;
} stack_t;


stack_t* init_stack(void)
{
    stack_t* stack = malloc(sizeof(stack_t));
    stack->length = 10;
    stack->data = malloc(stack->length * sizeof(char));
    stack->top = 0;
    
    return stack;
}

void push(stack_t* obj, char ch)
{
    obj->data[obj->top++] = ch;
    if (obj->top >= obj->length)
    {
        obj->length *= 2;
        obj->data = realloc(obj->data, obj->length);
    }
}

int pop(stack_t* obj)
{
    if (obj->top > 0)
        return obj->data[--obj->top];
    else
        return 0;
}

bool is_empty(stack_t* obj)
{
    return obj->top == 0 ? true : false;
}

void free_stack(stack_t* obj)
{
    free(obj->data);
    free(obj);
}

char tokens[3][2] = {
    {'{', '}'},
    {'[', ']'},
    {'(', ')'}, 
};

bool is_open_term(char ch)
{
    for (int i = 0; i < 3; i++)
    {
        if (tokens[i][0] == ch)
            return true;
    }
    return false;
}

bool is_matched(char ch1, char ch2)
{
    for (int i = 0; i < 3; i++)
    {
        if (tokens[i][0] == ch1 && tokens[i][1] == ch2)
            return true;
    }
    return false;
}

bool isValid(char * s){
    stack_t* stack = init_stack();
    bool rc;
    
    while (*s)
    {
        if (is_open_term(*s))
            push(stack, *s);
        else if (is_empty(stack) || !is_matched(pop(stack), *s))
        {
            rc = false;
            break;
        }
        
        s++;
    }
    
    if (*s == '\0')
        rc = is_empty(stack);
    
    free_stack(stack);
    
    return rc;
}
