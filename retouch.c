#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main ( int argc, char * argv[] ){
FILE *fp;
char *auxstr = (char *) malloc(20*sizeof(char));
char *auxentrada[3];

	//SI NO HAY ARGUMENTOS, DEVOLVER ERROR
	if (argc==1){
		printf("Introduzca argumentos \n");
	}
	//SI SI LOS HAY CREAR ESE ARCHIVO
	else{
		if(argc==2){
			//CON AYUDA DE OMAR
			strcpy(auxstr,argv[1]);
			auxentrada[0]=strtok(argv[1],".");
			auxentrada[1]=strtok(NULL,".");
		/*	strcpy(auxstr,auxentrada[0]);
			strcpy(auxstr,".");
			strcpy(auxstr,auxentrada[1]);
			*/
			fp=fopen(auxstr,"w");
		}
	//LENGUAJES
		printf("Creado un archivo %s\n",auxentrada[1]);
		if(!strcmp(auxentrada[1],"c")){
			fprintf(fp,"#include <stdio.h>\nint main(int argc, char * argv[]){\n");
			//fprintf();
			fprintf(fp,"return 0;}\n");
		}
		if(!strcmp(auxentrada[1],"pas")){
			fprintf(fp,"Program Inicio (input,output);\n");
			fprintf(fp,"(*USES libreria*)\nCONST\nTYPE\nVAR\n");
			fprintf(fp,"procedure p1(var i: integer);\n VAR \n Begin\n end;\n");
			fprintf(fp,"function f1(var i:integer):integer;\n");
			fprintf(fp,"Begin\n");
			fprintf(fp,"  fi:=i;\n");
			fprintf(fp,"end;\n");
			fprintf(fp,"Begin\nEnd. ");
		}
		if(!strcmp(auxentrada[1],"cpp")){
			fprintf(fp,"#include <iostream>\nusing namespace std\n int main(){\nreturn 0;\n}");
		}
		if(!strcmp(auxentrada[1],"cs")){
			fprintf(fp,"using System;\nnamespace helloworld\n");
			fprintf(fp," {\n class helloworld\n  {\nstatic void Main(string[] args)\n");
			fprintf(fp,"   {\n   }\n  }\n }\n");
		}
		if(!strcmp(auxentrada[1],"html")){
			fprintf(fp,"<html>\n<body>\n<script language=\"javascript\" type=\"text/javascript\">");
			fprintf(fp,"<!--\ndocument.write('helloworld')\n /");
			fprintf(fp,"/-->\n</script>\n</body>\n</html> ");
		}
		if(!strcmp(auxentrada[1],"py")){
			fprintf(fp,"import gi\ngi.require_version('Gtk', '3.0')\nfrom gi.repository import Gtk\n");
			fprintf(fp, "win = Gtk.Window()\n");
			fprintf(fp, "win.connect(\"delete-event\", Gtk.main_quit)\n");
			fprintf(fp, "win.show_all()\n");
			fprintf(fp, "Gtk.main()");
		}






fclose(fp);
free(auxstr);
	}
	return 0;
}
