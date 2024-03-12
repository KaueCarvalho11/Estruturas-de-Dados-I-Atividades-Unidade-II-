void bubblesort(int arr[], int n)
{
    int i, j; //c1, 1 vez
    for (i = 0; i < n - 1; i++)//c2, 1 vez
    {
        for (j = 0; j < n - i - 1; j++) //c3, n-1 vezes
        {
            if (arr[j] > arr[j + 1]) //c4, n²
            {
                swap(&arr[j], &arr[j + 1]); //c5, n²
            }
        }
    }
}

/* c1 + c2 + c3(n-1) + c4(n²) + c5(n²)

a = c1 + c2
b = c3(n-1)
c = c4 + c5(n²)

a + b(n-1) + c(n²)

Retira-se a constante

= b(n-1) + c(n²)

Retira-se termos multiplicativos

= (n-1) + (n²)

Retira-se termo e menor grau

= n²

Ou seja, algoritmo tem complexidade quadrática, na qual, de acordo com o
tamanho dos dados de entrada, o tempo de execução cresce de forma quadrática
*/