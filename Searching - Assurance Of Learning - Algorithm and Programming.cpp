#include <stdio.h>
#include <string.h>

struct housing{
	char loc1[111];
	char loc2[111];
	char price[111];
	char room[111];
	char bathroom[111];
	char carpark[111];
	char type[111];
	char area[111];
	char furnish[111];
}data[4111];

int main() {
	
	FILE *f = fopen("file.csv", "r");
	
	char trash[255];
	
	
	fscanf(f, "%[^\n]\n", trash);
	
	int i = 0;
	
	while(feof(f) == 0){
		fscanf(f,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s\n", data[i].loc1, data[i].loc2, &data[i].price, &data[i].room, &data[i].bathroom, &data[i].carpark, data[i].type, &data[i].area, data[i].furnish);
		i++;
	}	
	
	for(int k = 0; k < i; k++){
		for(int l = k + 1; l < i; l++){
			if(strcmp(data[k].loc1, data[l].loc1) > 0){
				char temp[255];
				strcpy(temp, data[k].loc1);
				strcpy(data[k].loc1, data[l].loc1);
				strcpy(data[l].loc1, temp);
			}
		}
	}
	
	char string[111];
	printf("Input [DataX in ColumnName]: ");
	scanf("%[^\n]", &string);
	getchar();
	
	char *token;
	char *sc;
	
	token = strtok(string, " ");
	
	char searchh[5][55];
	int p = 0;
	while(token != NULL){
		strcpy(searchh[p], token);
		p++;
		token = strtok(NULL, " ");
	}
	
	char search[55];
	char column[55];
	strcpy(search, searchh[0]);
	strcpy(column, searchh[2]);
	
	if(strcmpi(column, "loc1") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].loc1, search) != NULL){
				printf(" %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "loc2") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].loc2, search) != NULL){
				printf(" %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "price") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].price, search) != NULL){
				printf("  %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "room") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].room, search) != NULL){
				printf("  %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "bathroom") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].bathroom, search) != NULL){
				printf("   %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "carpark") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].carpark, search) != NULL){
				printf("   %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "type") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].type, search) != NULL){
				printf("   %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "area") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].area, search) != NULL){
				printf("  %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}
	else if(strcmpi(column, "furnish") == 0){
		for(int j = 0; j < i; j++){		
			if(strstr(data[j].furnish, search) != NULL){
				printf("  %-25s | %-8s | %-8s | %-1s | %-1s | %-1s | %-9s | %-5s | %s\n", data[j].loc1, data[j].loc2, data[j].price, data[j].room, data[j].bathroom, data[j].carpark, data[j].type, data[j].area, data[j].furnish);
			}
		}
	}


	return 0;
}

