#include <iostream>
using namespace std;

int main() {
    int ans1, ans2, ans3;

    cout << "==============================\n";
    cout << "      SURVIVE: DAY ONE\n";
    cout << "==============================\n\n";
    cout << "You wake up in a dark room.\n";
    cout << "Emergency Alert: A deadly virus has spread across the city.\n";
    cout << "BANG! The door bursts open as infected rush toward you.\n\n";

    cout << "What do you do?\n";
    cout << "1. Fight back\n";
    cout << "2. Escape through the window\n";
    cout << "3. Hide under the bed\n";
    cout << "Choice: ";
    cin >> ans1;

    if (ans1 == 1) {
        cout << "\nYou block the doorway with a chair and escape into the hallway.\n";
        cout << "1. Search rooms\n2. Take the stairs\n3. Security room\nChoice: ";
        cin >> ans2;

        if (ans2 == 1) {
            cout << "\nYou find food, water and a first aid kit.\n";
            cout << "1. Stay and wait\n2. Leave the building\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nThe infected eventually find you.\n";
                cout << "===== GAME OVER =====\n";
            } else if (ans3 == 2) {
                cout << "\nYou escape through a fire exit and reach a military checkpoint.\n";
                cout << "===== SURVIVOR ENDING =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else if (ans2 == 2) {
            cout << "\nYou fight your way to the rooftop.\n";
            cout << "1. Signal a helicopter\n2. Jump to a nearby building\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nA rescue helicopter spots your signal.\n";
                cout << "===== HERO ENDING =====\n";
            } else if (ans3 == 2) {
                cout << "\nYou miss the jump.\n";
                cout << "===== GAME OVER =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else if (ans2 == 3) {
            cout << "\nYou find a pistol in the security room.\n";
            cout << "1. Escape\n2. Explore deeper\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nThe pistol helps you survive until sunrise.\n";
                cout << "===== TRUE ENDING =====\n";
                cout << "Military forces evacuate you from the city.\n";
            } else if (ans3 == 2) {
                cout << "\nToo many infected surround you.\n";
                cout << "===== GAME OVER =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else {
            cout << "Invalid choice.\n";
        }

    } else if (ans1 == 2) {
        cout << "\nYou jump out the window into an alley.\n";
        cout << "1. Run down the alley\n2. Climb rooftops\n3. Go to the supermarket\nChoice: ";
        cin >> ans2;

        if (ans2 == 1) {
            cout << "\n1. Wait for rescue\n2. Leave the city\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nRescue eventually arrives.\n";
                cout << "===== SURVIVOR ENDING =====\n";
            } else if (ans3 == 2) {
                cout << "\nYou escape the quarantine zone.\n";
                cout << "===== ESCAPE ENDING =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else if (ans2 == 2) {
            cout << "\n1. Stay hidden\n2. Keep moving\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nThe infected never find you.\n";
                cout << "===== LONE SURVIVOR ENDING =====\n";
            } else if (ans3 == 2) {
                cout << "\nYou slip and fall from a rooftop.\n";
                cout << "===== GAME OVER =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else if (ans2 == 3) {
            cout << "\n1. Search for supplies\n2. Run away\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nThe supermarket is packed with infected.\n";
                cout << "===== GAME OVER =====\n";
            } else if (ans3 == 2) {
                cout << "\nYou escape with your life.\n";
                cout << "===== SURVIVOR ENDING =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else {
            cout << "Invalid choice.\n";
        }

    } else if (ans1 == 3) {
        cout << "\nYou hide until the infected leave.\n";
        cout << "1. Search the room\n2. Stay hidden\n3. Sneak out\nChoice: ";
        cin >> ans2;

        if (ans2 == 1) {
            cout << "\nYou find a hidden stash of supplies.\n";
            cout << "You can survive for a while.\n";
            cout << "\n1. Leave the room.\n2. Wait longer\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nYou quietly escape.\n";
                cout << "===== SURVIVOR ENDING =====\n";
            } else if (ans3 == 2) {
                cout << "\nThe infected return.\n";
                cout << "===== GAME OVER =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else if (ans2 == 2) {
            cout << "\nYou run out of food and water.\n";
            cout << "===== GAME OVER =====\n";

        } else if (ans2 == 3) {
            cout << "\n1. Go downstairs\n2. Climb to the roof\nChoice: ";
            cin >> ans3;

            if (ans3 == 1) {
                cout << "\nYou are surrounded.\n";
                cout << "===== GAME OVER =====\n";
            } else if (ans3 == 2) {
                cout << "\nA helicopter rescues you.\n";
                cout << "===== SECRET ENDING =====\n";
            } else {
                cout << "Invalid choice.\n";
            }

        } else {
            cout << "Invalid choice.\n";
        }

    } else {
        cout << "Invalid starting choice.\n";
    }

    cout << "\n==============================\n";
    cout << "Thanks for playing!\n";
    cout << "Created by Khushjeet Singh Bhati\n";
    cout << "==============================\n";

    return 0;
}
