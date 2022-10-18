SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode *temp = llist, *next = temp->next;

    while (next) {

        if (temp->data != next->data) {

            temp->next = next;

            temp = next;

        }

        next = next->next;

    }

    temp->next = NULL;

    return llist;

}
