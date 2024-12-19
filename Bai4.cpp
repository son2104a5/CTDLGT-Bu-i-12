#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int score;
} Student;

void searchStudent(Student students[], int n, char target[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, target) == 0) {
            printf("Diem cua %s la: %d\n", target, students[i].score);
            return;
        }
    }
    printf("Khong tim thay sinh vien.\n");
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    Student *students = (Student *)malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien thu %d: ", i + 1);
        scanf(" %49[^\n]", students[i].name);
        printf("Nhap diem cua sinh vien thu %d: ", i + 1);
        scanf("%d", &students[i].score);
    }

    // Nh?p tên sinh viên c?n tìm
    char target[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf(" %49[^\n]", target);

    // Tìm ki?m và in k?t qu?
    searchStudent(students, n, target);

    // Gi?i phóng b? nh?
    free(students);

    return 0;
}

