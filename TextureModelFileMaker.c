#include <stdio.h>
#include <string.h>

int main(void){
	int i, start, end;
	char filename[10], itemname[30], parent[15], extension[] = ".json";
	FILE *fp;

	printf("最初のModel番号：");
	scanf( "%d", &start);
	printf("最後のModel番号：");
	scanf( "%d", &end);
	printf("元アイテムのID：");
	scanf( "%s", itemname);
	printf("parent名：");
	scanf( "%s", parent);

	for (i = start; i <= end; i++){
		snprintf(filename, 10, "%d", i);
		strcat(filename, extension);
		printf("%s\n", filename);

		fp = fopen(filename, "w");
		fprintf(fp, "{\n");
		fprintf(fp, "	\"parent\": \"item/%s\",\n", parent);
		fprintf(fp, "	\"textures\": {\n");
		fprintf(fp, "		\"layer0\": \"item/%s/%d\"\n", itemname, i);
		fprintf(fp, "	}\n");
		fprintf(fp, "}\n");
		fclose(fp);
	}
}