#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    const char correctUsername[] = "jiraa"; // Username yang benar
    const char correctPassword[] = "1234"; // Password yang benar
    int percobaan = 0;

    while (1) { 
        printf("Masukkan username anda: ");
        scanf("%s", username);

        printf("Masukkan password anda: ");
        scanf("%s", password);

        if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
            printf("Berhasil login\n");
            break;
        } else {
            printf("Username atau password salah.\n");
            percobaan++;

            char choice;
            printf("Apakah Anda ingin mencoba lagi? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'n' || choice == 'N') {
                printf("Terimakasih!\n");
                break; 
            }
        }
    }

    return 0;
}