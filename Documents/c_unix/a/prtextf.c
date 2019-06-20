#include  <stdio.h>

main(int args, char *argv[])
{
	FILE    *fpin; /*入力用ファイルポインタ*/
	char    in;    /*読み出しデータ*/
	if( (fpin = fopen(argv[1],"r")) == NULL ){
		fprintf(stderr, "*ERROR: Can't open input file %s.\n", argv[1]);
		exit(1);
	}

	while( (in = getc(fpin)) != EOF)
		putchar(in);

	fclose(fpin);

	exit(0);
}
