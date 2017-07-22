    #include <stdio.h>

    void main()

    {

        int i, fact = 1, n;
        printf("Enter the number \n");
        scanf("%d", &n);

        if (num <= 0)

            fact = 1;

        else

        {

            for (i = 1; i <= n; i++)

            {

                fact = fact * i;

            }

        }

        printf("Factorial of %d = %5d\n", n, fact);

    }


