/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] [i_3] = (83792672 - 0);
                    arr_11 [i_0] [16] [14] [i_2] [i_0] [i_3] = (((var_4 != var_3) || var_2));
                }
                for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [14] [16] [i_0] [i_0] = (~var_3);
                    arr_15 [i_0] [i_2] [i_2] [0] [i_1] [i_0] = var_3;
                    arr_16 [i_0] [i_0] [i_2] [i_0] = (var_10 / var_4);
                }
                arr_17 [i_0] [i_0] [i_0] [i_0] = var_8;
                arr_18 [i_0] [i_0] [7] [i_2] = var_6;
                arr_19 [i_0] [i_0] = var_11;
                arr_20 [i_1] [i_1] [i_0] [i_2] = (-((var_5 >> (var_8 - 13782909920256133646))));
            }
            arr_21 [i_0] [i_1] [15] = (var_3 != 0);
        }
        arr_22 [i_0] [7] = var_1;
    }
    var_15 = var_3;
    #pragma endscop
}
