#include <stdio.h>
#include <string.h>

struct housing{
	char loc1[111];
	char loc2[111];
	long long int price;
	char room[111];
	char bathroom[111];
	char carpark[111];
	char type[111];
	long long int area;
	char furnish[111];
}data[4111];

int main() {	
	FILE *f = fopen("file.csv", "r");
	
	char trash[255];
	char locmax[255];
	char locmin[255];
	int flag[4111] = {};
	
	
	fscanf(f, "%[^\n]\n", trash);
	
	int i = 0;
	
	while(feof(f) == 0){
		fscanf(f,"%[^,],%[^,],%lld,%[^,],%[^,],%[^,],%[^,],%lld,%s\n", data[i].loc1, data[i].loc2, &data[i].price, data[i].room, data[i].bathroom, data[i].carpark, data[i].type, &data[i].area, data[i].furnish);
		i++;
	}	

	int counter = 1;
	long long int max = 0;
	long long int min = 999999;
	long long total = 0;
	
	char search[111];
	printf("Input column name [ loc1 | loc2 | price | room | bathroom | carpark | type | area | furnish ]: ");
	scanf("%s", &search);
	getchar();
	
	if(strcmpi("loc1", search) == 0){
	for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].loc1, data[l].loc1) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s: %d\n", data[k].loc1, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].loc1);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].loc1);
			}
		}
	}
		printf("Maximum Value %s with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("loc2", search) == 0){
	for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].loc2, data[l].loc2) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s: %d\n", data[k].loc2, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].loc2);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].loc2);
			}
		}
	}
		printf("Maximum Value %s with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("price", search) == 0){
		total = 0;
		for(int n = 0; n < i; n++){
			if(data[n].price >= max){
				max = data[n].price;
			}
			if(data[n].price <= min){
				min = data[n].price;
			}
			total += data[n].price;
		}
		printf("Maximum Price Value: %lld\n", max);
		printf("Minimum Price Value: %lld\n", min);
		printf("Average Price Value: %lld\n", total/i);
	}
	else if(strcmpi("room", search) == 0){
		for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].room, data[l].room) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s Room: %d\n", data[k].room, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].room);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].room);
			}
		}
	}
		printf("Maximum Value %s Room with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s Room with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("bathroom", search) == 0){
		for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].bathroom, data[l].bathroom) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s Bathroom: %d\n", data[k].bathroom, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].bathroom);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].bathroom);
			}
		}
	}
		printf("Maximum Value %s Bathroom with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s Bathroom with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("carpark", search) == 0){
		for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].carpark, data[l].carpark) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s: %d\n", data[k].carpark, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].carpark);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].carpark);
			}
		}
	}
		printf("Maximum Value %s Carpark with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s Carpark with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("type", search) == 0){
	for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].type, data[l].type) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s: %d\n", data[k].type, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].type);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].type);
			}
		}
	}
		printf("Maximum Value %s with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s with frequency: %lld\n", locmin, min);
	}
	else if(strcmpi("area", search) == 0){
		total = 0;
		for(int n = 0; n < i; n++){
			if(data[n].area >= max){
				max = data[n].area;
			}
			if(data[n].area <= min){
				min = data[n].area;
			}
			total += data[n].area;
		}
		printf("Maximum Area Value: %lld\n", max);
		printf("Minimum Area Value: %lld\n", min);
		printf("Average Area Value: %lld\n", total/i);
	}
	else if(strcmpi("furnish", search) == 0){
	for(int k = 0; k < i; k++){
		if(flag[k] == 0){
			int counter = 0;
			for(int l = k; l < i; l++){
				if(strcmp(data[k].furnish, data[l].furnish) == 0){
					counter++;
					flag[l] = 1;
				}
			}
			printf("%s: %d\n", data[k].furnish, counter);
			if(counter > max){
				max = counter;
				strcpy(locmax, data[k].furnish);
			}
			if(counter < min){
				min = counter;
				strcpy(locmin, data[k].furnish);
			}
		}
	}
		printf("Maximum Value %s with frequency: %lld\n", locmax, max);
		printf("Minimum Value %s with frequency: %lld\n", locmin, min);
	}

	return 0;
}
