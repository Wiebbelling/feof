# feof
Problema com a função feof()

// função 1

void le_arquivo_data(char* arquivo)     //ENTRA UMA VEZ A MAIS NO WHILE
{
    FILE* arquivo_data;
    DATA buffer;
    int cont=0;

    arquivo_data = fopen(arquivo,"rb");

    while(!feof(arquivo_data)
    {
        fread(&buffer,sizeof(DATA),1,arquivo_data);
        printf("\n%d | %d\n",buffer.ano,buffer.posicao);
    }
    fclose(arquivo_data);
}

// Função 2 - somente a parte do laço

        while(!feof(arquivo_original))
        {


            printf("Artigo: %d\n\n", count+1);

            printf("\nCHAMOU FUNCAO PROCURA_DATA");

            artigo_atual.ano = atoi(le_campo(arquivo_original));
            printf("\n%d", artigo_atual.ano);

                procura_data(artigo_atual.ano, count);

            strcpy(artigo_atual.tipo_artigo, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo_artigo);

            strcpy(artigo_atual.natureza, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.natureza);

            strcpy(artigo_atual.titulo, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.titulo);

            strcpy(artigo_atual.evento, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.evento);

            strcpy(artigo_atual.anais, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.anais);

            artigo_atual.edicao = atoi(le_campo(arquivo_original));     //NULL
            printf("\n%d", artigo_atual.edicao);

            strcpy(artigo_atual.isbn, le_campo(arquivo_original));      //NULL
            printf("\n%s", artigo_atual.isbn);

            strcpy(artigo_atual.pais, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.pais);

            strcpy(artigo_atual.cidade, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.cidade);

            artigo_atual.volume = atoi(le_campo(arquivo_original));
            printf("\n%d", artigo_atual.volume);

            strcpy(artigo_atual.fasciculo, le_campo(arquivo_original));     //NULL
            printf("\n%s", artigo_atual.fasciculo);

            strcpy(artigo_atual.serie, le_campo(arquivo_original));         //NULL
            printf("\n%s", artigo_atual.serie);

            artigo_atual.p_inicial = atoi(le_campo(arquivo_original));
            printf("\n%d", artigo_atual.p_inicial);

            artigo_atual.p_final = atoi(le_campo(arquivo_original));
            printf("\n%d", artigo_atual.p_final);

            strcpy(artigo_atual.idioma, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.idioma);

            strcpy(artigo_atual.url, le_campo(arquivo_original));           //NULL
            printf("\n%s", artigo_atual.url);

            strcpy(artigo_atual.obs, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.obs);

            strcpy(artigo_atual.area, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.area);

            strcpy(artigo_atual.linha, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.linha);

            strcpy(artigo_atual.projeto, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.projeto);

            strcpy(artigo_atual.autor1, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor1);

                procura_autor(artigo_atual.autor1,count);
                 procura_area(artigo_atual.area, artigo_atual.autor1);

            strcpy(artigo_atual.tipo1, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo1);

            strcpy(artigo_atual.autor2, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor2);

                procura_autor(artigo_atual.autor2,count);
                 procura_area(artigo_atual.area, artigo_atual.autor2);

            strcpy(artigo_atual.tipo2, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo2);

            strcpy(artigo_atual.autor3, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor3);

                procura_autor(artigo_atual.autor3,count);
                 procura_area(artigo_atual.area, artigo_atual.autor3);

            strcpy(artigo_atual.tipo3, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo3);

            strcpy(artigo_atual.autor4, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor4);

                procura_autor(artigo_atual.autor4,count);
                 procura_area(artigo_atual.area, artigo_atual.autor4);

            strcpy(artigo_atual.tipo4, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo4);

            strcpy(artigo_atual.autor5, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor5);

                procura_autor(artigo_atual.autor5,count);
                 procura_area(artigo_atual.area, artigo_atual.autor5);

            strcpy(artigo_atual.tipo5, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo5);

            strcpy(artigo_atual.autor6, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.autor6);

                procura_autor(artigo_atual.autor6,count);
                 procura_area(artigo_atual.area, artigo_atual.autor6);

            strcpy(artigo_atual.tipo6, le_campo(arquivo_original));
            printf("\n%s", artigo_atual.tipo6);


            fwrite(&artigo_atual, sizeof(ARTIGO), 1, arquivo_artigos);        //ecreve uma estutura no arquivo binário

            

            count++;
            
        }
