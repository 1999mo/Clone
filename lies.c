/*
Integer ��������� �հ� �� ���ϱ�
3x3 �����࿭(Mat)�� �Է� �޾�(9���� ����)
�Է� ������ ������·� ���
����� ���� ���Ͽ� ������·� �߷�
����� ���� ���Ͽ� ������·� ���

��� ������� main function���� �ϰ�
����� ���(��, ��)�� �Ʒ��� ���� function����Ͽ� ���Ѵ�

function indexAddMat(...)�� �̿��Ͽ� ���� ����
Array indexing ������� ó��

Funciton ptrProdMat(...)�� �̿��Ͽ� ���� ����
Point�� ����Ͽ� indexing 
*/
#define _CRT_SECURE_NO_WARGNINGS

#include <stdio.h>

void indexAddMat(int arr[][3], int arr1[][3], int array[][3]);
void ptrProdMat(int arr[][3], int arr1[][3], int array[][3]);

int main(void)
{
	int mat[3][3], mat1[3][3], mat2[3][3], mat3[3][3];
	
	scanf("%d %d %d", &mat[0][0], &mat[0][1], &mat[0][2]);
	scanf("%d %d %d", &mat[1][0], &mat[1][1], &mat[1][2]);
	scanf("%d %d %d", &mat[2][0], &mat[2][1], &mat[2][2]);
	scanf("%d %d %d", &mat1[0][0], &mat1[0][1], &mat1[0][2]);
	scanf("%d %d %d", &mat1[1][0], &mat1[1][1], &mat1[1][2]);
	scanf("%d %d %d", &mat1[2][0], &mat1[2][1], &mat1[2][2]);
	
	printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
	printf("%d %d %d\n", mat[1][0], mat[1][1], mat[1][2]);
	printf("%d %d %d\n\n", mat[2][0], mat[2][1], mat[2][2]);
	printf("%d %d %d\n", mat1[0][0], mat1[0][1], mat1[0][2]);
	printf("%d %d %d\n", mat1[1][0], mat1[1][1], mat1[1][2]);
	printf("%d %d %d\n\n", mat1[2][0], mat1[2][1], mat1[2][2]);
	
	indexAddMat(mat, mat1, mat2);
	
	printf("%d %d %d\n", mat2[0][0], mat2[0][1], mat2[0][2]);
	printf("%d %d %d\n", mat2[1][0], mat2[1][1], mat2[1][2]);
	printf("%d %d %d\n\n", mat2[2][0], mat2[2][1], mat2[2][2]);
	

	ptrProdMat(mat, mat1, mat3);
	
	printf("%d %d %d\n", mat3[0][0], mat3[0][1], mat3[0][2]);
	printf("%d %d %d\n", mat3[1][0], mat3[1][1], mat3[1][2]);
	printf("%d %d %d\n", mat3[2][0], mat3[2][1], mat3[2][2]);
	
	//printf("test address 0 0, 0 1, 1 0 : %p %p %p", &mat2[0][0], &mat2[0][1], &mat2[1][0]);
	//printf("test 2, %p", mat2);
	system("pause");
	
	return 0;
	
}

void indexAddMat(int arr[][3], int arr1[][3], int array[][3])
{
	int i = 0, j = 0;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			//*((*array+j) + i) = arr[i][j] + arr1[i][j];
			array[i][j] = arr[i][j] + arr1[i][j];
			//printf("i j �� : %d %d %d\n", i, j, arr[i][j] + arr1[i][j]);
		}
	}
}

void ptrProdMat(int arr[][3], int arr1[][3], int array[][3])
{
	int i = 0, j = 0, k = 0;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			*(*(array+i)+j) = 0;
			for(k = 0; k < 3; k ++)
			{
				//*((*array+j) + i) = arr[i][j] + arr1[i][j];
				//printf("%d\n", *(*(array+i)+j));
				*(*(array+i)+j) += *(*(arr+i)+k) * *(*(arr1+k)+j);
				//printf("i , j , array : %d %d %d\n", i, j, *(*(array+i)+j));
			}
		}
	}
}
