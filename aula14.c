void bsort (int v[ ],int qtd){

     int i, j;

     int aux;

     for (i=1;i<qtd;i++){

          for (j=0;j<qtd-i;j++){

               if (v[j]>v[j+1]){

                     aux=v[j];

                     v[j]=v[j+1];

                     v[j+1]=aux;

               }

          }

     }

}
/*

void bsort (int v[ ],int qtd){

     int i, j;

     int aux;

     for (i=1;i<qtd;i++){

//p/ i=1 => 1<5 => V  

//p/ i=2 => 2<5 => V  

//p/ i=3 => 3<5 => V

//p/ i=4 => 4<5 => V

//p/ i=5 => 5<5 => F        

          for (j=0;j<qtd-i;j++){

    //p/i=1 => j=0;0<5-1 => V

                    // j=1;1<5-1 => V

                    // j=2;2<5-1 => V

                    // j=3;3<5-1 => V

                    // j=4;4<5-1 => F

    //p/i=2 => j=0;0<5-2 => V

                    // j=1;1<5-2 => V

                    // j=2;2<5-2 => V

                    // j=3;2<5-2 => F

    //p/i=3 => j=0;0<5-3 => V

                    // j=1;1<5-3 => V

                    // j=2;2<5-3 => F

    //p/i=4 => j=0;0<5-4 => V

                    // j=1;1<5-4 => F

               if (v[j]>v[j+1]){

        //p/i=1 => v[0]>v[0+1]=46>39 => V

                        // v[1]>v[1+1]=46>55 => F

                        // v[2]>v[2+1]=55>14 => V

                        // v[3]>v[3+1]=55>27 => V

        //p/i=2 => v[0]>v[0+1]=39>46 => F

                        // v[1]>v[1+1]=46>14 => V

                        // v[2]>v[2+1]=46>27 => V

        //p/i=3 => v[0]>v[0+1]=39>14 => V

                                // v[1]>v[1+1]=39>27 => V

                //p/i=4 => v[0]>v[0+1]=14>27 => F

                     aux=v[j];

        //p/i=1 => aux=v[0]=46

                        // aux=v[2]=55

                        // aux=v[3]=55

        //p/i=2 => aux=v[1]=46

                    // aux=v[2]=46

        //p/i=3 => aux=v[0]=39

                        // aux=v[1]=39

                     v[j]=v[j+1];

        //p/i=1 => v[0]=v[0+1]=39

                // v[2]=v[2+1]=14

                // v[3]=v[3+1]=27

        //p/i=2 => v[1]=v[1+1]=14

                // v[2]=v[2+1]=27

        //p/i=3 => v[0]=v[0+1]=14

                        // v[1]=v[1+1]=27

                     v[j+1]=aux;

        //p/i=1 => v[0+1]=46

                // v[2+1]=55

                // v[3+1]=55

        //p/i=2 => v[1+1]=46

                        // v[2+1]=46

        //p/i=3 => v[0+1]=39

                                // v[1+1]=39                

               }

        //p/i=1       //j++=> j=0+1=1

                                 //j++=> j=1+1=2

                                 //j++=> j=2+1=3

                                  //j++=> j=3+1=4

        //p/i=2       //j++=> j=0+1=1

                                  //j++=> j=1+1=2

                                          //j++=> j=2+1=3

                //p/i=3       //j++=> j=0+1=1

                                          //j++=> j=1+1=2        

                //p/i=4       //j++=> j=0+1=1                                  

          }

        //i++ => i=1+1=2

        //i++ => i=2+1=3

        //i++ => i=3+1=4

        //i++ => i=4+1=5

     }

}
