#include <iostream>
using namespace std;

// Linked List Node
struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

// Add Node
void add(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

// Display Linked List
void display()
{
    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Linked List to Array
int makeArray(int arr[])
{
    Node* temp = head;
    int i = 0;

    while (temp != NULL)
    {
        arr[i] = temp->data;
        i++;

        temp = temp->next;
    }

    return i;
}

// Merge Sort
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
}

// Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

// Binary Search
int binarySearch(int arr[], int n, int value)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

// Display Array
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Main
int main()
{
    int choice;
    int value;

    do
    {
        cout << "\n========== CATEGORIZING ==========\n";
        cout << "1. Add Value\n";
        cout << "2. Display Linked List\n";
        cout << "3. Merge Sort\n";
        cout << "4. Quick Sort\n";
        cout << "5. Binary Search\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Value: ";
            cin >> value;

            add(value);

            cout << "Value Added Successfully!\n";
        }

        else if (choice == 2)
        {
            display();
        }

        else if (choice == 3)
        {
            int arr[100];

            int n = makeArray(arr);

            mergeSort(arr, 0, n - 1);

            cout << "Merge Sort: ";
            displayArray(arr, n);
        }

        else if (choice == 4)
        {
            int arr[100];

            int n = makeArray(arr);

            quickSort(arr, 0, n - 1);

            cout << "Quick Sort: ";
            displayArray(arr, n);
        }

        else if (choice == 5)
        {
            int arr[100];

            int n = makeArray(arr);

            // Binary Search માટે પહેલા sort કરવું જરૂરી છે
            quickSort(arr, 0, n - 1);

            cout << "Sorted Array: ";
            displayArray(arr, n);

            cout << "Enter Value to Search: ";
            cin >> value;

            int result = binarySearch(arr, n, value);

            if (result != -1)
            {
                cout << "Value Found!\n";
            }
            else
            {
                cout << "Value Not Found!\n";
            }
        }

        else if (choice == 0)
        {
            cout << "Program Ended.\n";
        }

        else
        {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}