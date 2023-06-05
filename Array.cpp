//Demo array
#include <stdio.h>

int main()
{
	//1. Array 1 bien
	//2. Cac pt mang lien tiep nhau trong o nho
	//3. Dung mang "Lean code"
	//4. Loop la thanh phan ca + nuoc voi mang
	//Giai thuat: Algorithm
	/*
	B1->Dn 1 mang A va gan gia tri
	B2->Lap trong moi pt cua mang A de lay gia tri
	B3->Khai bao bien "sum" de luu ket qua
	B4->Hien thi ket qua sau khi vong lap ket thuc
	*/
	int array[5]={4,3,1,0,9};
	int loop;
	int sum=0;
	int max=0;
	int max1,max2=0;
	int min=0;
	float tb=0;
	/*
	for (loop=0;loop<5;loop++){
		printf("%d ",array[loop]);
	}
	*/
	
	/*
	for (loop=0;loop<5;loop++){
		sum+=array[loop];
	}
	printf("\nTong cac phan tu la %d",sum);
	*/
	
	/*
	array[0]=4;
	  array[1]=3;
	  array[2]=1
	  array[3]=0
	  array[4]=9
	*/
	
	//Giai thuat: Tim phan tu lon nhat trong mang
	/*
	B1.Khai bao 1 gia tri max=0
	B2.Chay vong lap so sanh gia tri max voi tung phan tu, neu max<gtri -> max=gia tri
	B3.In ra gia tri max
	*/
	
	for(loop=0;loop<5;loop++){
		if(max<array[loop]){	
		max=array[loop];
	}
	}
	printf("\Gia tri lon nhat la %d",max);
	
	for(loop=0;loop<5;loop++){
		if(min>array[loop]){
			min=array[loop];
		}
	}
	printf("\nGia tri nho nhat la %d",min);
	
	/*
	for(int i=0;i<5;i++){	
	printf("\nDC cua pt dau tien la %p",&array[i]);
	}
	*/
	
	//Giai thuat:Tim ra phan tu lon thu 2 trong mang
	/*
	B1.Khai bao va gan gia tri cho mang A
	B2.Khai bao bien max1,max2
	B3.So sanh max1 va cac phan tu->max1 la gtri lon nhat
	B4.Dat truong hop neu max1>array[loop] thi gan max2 vao array[loop] 
	*/
	for(loop=0;loop<5;loop++){
		if(max1<array[loop]){
		max2=max1;
		max1=array[loop];
	}else if(max2<array[loop]){
		max2=array[loop];
	}
		
	}
	printf("\nGia tri lon thu 2 trong mang la %d",max2);
	
	//Giai thuat:Tim gia tri trung binh
	/*
	B1.Khai bao va gan gia tri cho mang A
	B2.Khai bao bien tb(float)
	B3.Su dung vong lap de tinh tong cac pt trong mang
	B4.chia tong voi so phan tu trong mang de tim ra trung binh
	*/
	for(loop=0;loop<5;loop++){
		tb+=array[loop];
	}
	printf("\nGia tri trung binh cua mang la %f",tb/5);
	
	return 0;
}
