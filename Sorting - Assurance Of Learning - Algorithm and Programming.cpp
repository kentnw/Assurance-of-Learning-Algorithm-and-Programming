#include <stdio.h>
#include <string.h>

struct housing{
	char loc1[111];
	char loc2[111];
	long long int price;
	int room;
	int bathroom;
	int carpark;
	char type[111];
	long long int area;
	char furnish[111];
}data[4111];

int main() {
	
	FILE *f = fopen("file.csv", "r");
	
	char trash[255];
	
	fscanf(f, "%[^\n]\n", trash);
	
	int i = 0;
	
	while(feof(f) == 0){
		fscanf(f,"%[^,],%[^,],%lld,%d,%d,%d,%[^,],%lld,%s\n", data[i].loc1, data[i].loc2, &data[i].price, &data[i].room, &data[i].bathroom, &data[i].carpark, data[i].type, &data[i].area, data[i].furnish);
		i++;
	}	
		
	for(int j = 0; j < i; j++){
		for(int k = j + 1; k < i; k++){
			if(strcmp(data[j].loc1, data[k].loc1) > 0){
				char temp[255];
				long long int tempp;
				strcpy(temp, data[j].loc1);
				strcpy(data[j].loc1, data[k].loc1);
				strcpy(data[k].loc1, temp);
				
				strcpy(temp, data[j].loc2);
				strcpy(data[j].loc2, data[k].loc2);
				strcpy(data[k].loc2, temp);
				
				tempp = data[j].price;
				data[j].price = data[k].price;
				data[k].price = tempp;
				
				tempp = data[j].room;
				data[j].room = data[k].room;
				data[k].room = tempp;
				
				tempp = data[j]. bathroom;
				data[j].bathroom = data[k].bathroom;
				data[k].bathroom = tempp;
				
				tempp = data[j].carpark;
				data[j].carpark = data[k].carpark;
				data[k].carpark = tempp;
				
				strcpy(temp, data[j].type);
				strcpy(data[j].type, data[k].type);
				strcpy(data[k].type, temp);
				
				tempp = data[j].area;
				data[j].area = data[k].area;
				data[k].area = tempp;
				
				strcpy(temp, data[j].furnish);
				strcpy(data[j].furnish, data[k].furnish);
				strcpy(data[k].furnish, temp);
			}	
		}
	}
	
	for(int j = 0; j < i; j++){
		printf(" %-25s | %-8s | %-8ld | %-1d | %-1d | %-1d | %-9s | %-5ld | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
	}

	return 0;
}
