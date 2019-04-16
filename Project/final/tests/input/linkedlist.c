struct Node
{
    int key;
    struct Node *next;
}

void
push(struct Node **head_ref, int new_key)
{
    struct Node *new_node;
    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->key = new_key;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

bool search(struct Node *head, int x)
{
    if (head == NULL) return false;
    if (head->key == x) return true;
    return search(head->next, x);
}

int main()
{
    struct Node *head = NULL;
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 5); 
    push(&head, 2); 
    push(&head, 7);
    
    if(search(head, 5))
    {
        _printints(1);
    }
    else _printints(0);

    return 0;
}