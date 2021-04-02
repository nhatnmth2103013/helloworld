#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	float diemToan;
	float diemLy; 
	float diemHoa; 
	float tong3Mon; 
	float diemTrungBinh;
	
	printf("Diem Toan\n");
	scanf("%f", &diemToan ); 
	
	printf("Diem Ly\n"); 
	scanf("%f", &diemLy); 
	
	printf("Diem Hoa\n");
	scanf("%f", &diemHoa ); 
	
	tong3Mon = diemToan + diemLy + diemHoa; 
	diemTrungBinh = tong3Mon/3;
	
	printf( "Diem Trung Binh %.1f\n", diemTrungBinh); 
	
	return 0; 
}
