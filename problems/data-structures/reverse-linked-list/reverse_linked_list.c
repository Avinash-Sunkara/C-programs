#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *next;
};

int main(void)
{
    int count;
    struct Node *head = NULL;
    struct Node *tail = NULL;
    if (scanf("%d", &count) != 1 || count < 0 || count > 1000) return 1;

    for (int i = 0; i < count; i++) {
        struct Node *node = malloc(sizeof *node);
        if (node == NULL) {
            while (head != NULL) {
                struct Node *next = head->next;
                free(head);
                head = next;
            }
            return 1;
        }
        if (scanf("%d", &node->value) != 1) {
            free(node);
            while (head != NULL) {
                struct Node *next = head->next;
                free(head);
                head = next;
            }
            return 1;
        }
        node->next = NULL;
        if (tail == NULL) head = node;
        else tail->next = node;
        tail = node;
    }

    struct Node *previous = NULL;
    struct Node *current = head;
    while (current != NULL) {
        struct Node *next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    head = previous;

    for (struct Node *node = head; node != NULL; node = node->next)
        printf("%d%s", node->value, node->next == NULL ? "\n" : " ");
    if (head == NULL) putchar('\n');

    while (head != NULL) {
        struct Node *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}
