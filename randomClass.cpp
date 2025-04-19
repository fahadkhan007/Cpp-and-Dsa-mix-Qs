#include<iostream>
using namespace std;

int main() {
    cout << "Enter number of elements: ";
    int x;
    cin >> x;
    int arr[100];
    cout << "Enter the elements: ";
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    int n;
    cout << "Enter 1 for insertion" << endl;
    cout << "Enter 2 for deletion" << endl;
    cout << "Enter 0 for exit" << endl;
    cin >> n;

    while (n != 0) {
        int e, pos;
        switch (n) {
        case 1: // Insertion
            cout << "Enter the element: ";
            cin >> e;
            cout << "Enter the position: ";
            cin >> pos;
            pos--; // Convert to 0-based index

            if (pos < 0 || pos > x) {
                cout << "Invalid position" << endl;
                break;
            }

            // Shift elements to the right
            for (int i = x; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = e;
            x++; // Increase the size of the array

            cout << "Array after insertion: ";
            for (int i = 0; i < x; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2: // Deletion
            cout << "Enter the position: ";
            cin >> pos;
            pos--; // Convert to 0-based index

            if (pos < 0 || pos >= x) {
                cout << "Invalid position" << endl;
                break;
            }

            // Shift elements to the left
            for (int i = pos; i < x - 1; i++) {
                arr[i] = arr[i + 1];
            }
            x--; // Decrease the size of the array

            cout << "Array after deletion: ";
            for (int i = 0; i < x; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        default:
            cout << "Invalid option" << endl;
            break;
        }

        cout << "Enter 1 for insertion" << endl;
        cout << "Enter 2 for deletion" << endl;
        cout << "Enter 0 for exit" << endl;
        cin >> n;
    }

    cout << "PROGRAM EXIT" << endl;

    return 0;
}
