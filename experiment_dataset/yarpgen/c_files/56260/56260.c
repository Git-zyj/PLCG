/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = 1590605886;
        var_15 = (max(var_15, ((((((arr_0 [i_0]) | var_5)) == (!var_9))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_6 [i_0] [9] [i_0] = 11317277617088807720;

                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    var_16 = (-1351955799 | (arr_1 [i_3 + 3]));
                    var_17 = ((!(arr_1 [i_3 + 2])));
                    var_18 = (((arr_5 [i_3 + 3] [i_2] [2]) == (arr_4 [i_0] [i_2] [i_3])));
                }
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_19 -= (((arr_8 [i_4 + 1]) != -2147483644));
                var_20 ^= (arr_8 [i_0]);
                arr_12 [0] [i_1] |= (-1351955821 ? 2009038365 : 2147483644);
                var_21 |= arr_11 [i_0] [i_0] [i_4];
            }
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_15 [i_5] [i_5] [i_1] [i_5] = ((!((((max(var_0, -1584567922)) | 703712200)))));
                arr_16 [i_5] [i_1] [i_5] = ((((max((((var_10 ? var_13 : -1))), (10518654348885862692 / var_7)))) ? (arr_10 [i_0] [i_1] [8] [i_1]) : var_10));
                arr_17 [i_0] [i_5] = (arr_3 [5] [i_1]);
            }
            arr_18 [i_0] [i_0] [i_0] = -1351955799;
        }
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_22 = (~var_2);
            var_23 = arr_19 [i_6 + 2] [i_6];
        }
        arr_23 [2] &= (((((-221320112 ? (arr_0 [i_6 + 1]) : 402337190))) ? ((max(var_7, -2074130099))) : (max(9721463867985106044, (arr_0 [i_6 + 1])))));
        arr_24 [i_6] = 811569723;
        var_24 = (~2147483643);
        arr_25 [i_6] [i_6] = (((((arr_22 [i_6 + 2] [i_6]) ? 7129466456620743895 : var_13)) <= 7082847758512607116));
    }
    var_25 = 0;
    var_26 = (min(var_26, var_13));
    #pragma endscop
}
