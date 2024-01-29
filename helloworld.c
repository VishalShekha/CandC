#include <stdio.h>

int main() {
    int r,c;
    printf("Enter the rows and columns : ");
    scanf("%d %d",&r,&c);
    
    int a[r+2][c+2];
    printf("Enter the cell grid : ");
    for (int i = 0;i<r+2;i++) {
        for (int j = 0;j<c+2;j++) {
            if (r+1==i||i==0||c+1==j||j==0){
                a[i][j] = 0;
            }else{
                scanf(" %d",&a[i][j]);
            }
        }
    }
    int b[r][c];
    for (int i = 1;i<r+1;i++) {
        for (int j = 1;j<c+1;j++) {   
            int sum = a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            if (sum<2 && a[i][j]==1) {
                b[i][j] = 0;
            }else if(sum>=2 && sum<=3 && a[i][j]==1) {
                b[i][j] = 1;
            }else if (sum>3 && a[i][j]==1) {
                b[i][j] = 0;
            }else if (sum==3 && a[i][j]==0) {
                b[i][j] = 1;
            }
            else {
                b[i][j] = 0;
            }
        }
    }

    for (int i = 1;i<r+1;i++) {
        for (int j = 1;j<c+1;j++) {
            printf("%d ",b[i][j]);
        }
        printf("|");
    }
    return 0;
}
