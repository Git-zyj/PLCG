/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = var_1;
        arr_2 [15] = ((((((var_7 >= var_12) % ((var_1 ? var_9 : var_7))))) > (((var_3 >= var_1) ? (var_12 % var_9) : ((var_5 ? var_4 : var_12))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((0 + 1152921504606846976) - var_3));
        arr_6 [i_1] = var_1;
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = var_0;
        arr_11 [11] [i_2] = ((((((var_0 / var_6) ? var_3 : var_0))) ? ((((var_3 ? var_5 : var_9)) + var_5)) : (var_3 % var_1)));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_15 = (((var_12 <= -1617142614778755291) & (var_2 * var_6)));
        arr_14 [i_3] = var_6;
        arr_15 [i_3] [8] = var_12;
        var_16 = var_7;

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            arr_19 [i_3] [i_3] = var_8;
            arr_20 [i_3 + 1] [i_4] = (1152921504606846976 * 17293822569102704640);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {

                /* vectorizable */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    arr_28 [i_7] [i_6] = var_3;
                    arr_29 [13] = var_3;
                    arr_30 [i_3] [i_5] [i_5] [i_6] [5] [i_7 - 1] = var_12;
                    var_17 -= (((var_5 > var_5) == var_13));
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_18 |= var_2;
                    arr_34 [i_3 + 1] [7] [i_3] [i_3 + 1] = var_8;
                }
                var_19 = (((((var_4 > var_10) / (var_4 >= var_4))) >> (((((var_5 + var_2) - var_13)) - 10264045086407083170))));
                var_20 = var_11;
                var_21 = ((1152921504606846961 || -1475017355) ? (((var_1 || (var_13 && var_10)))) : var_1);
            }
            var_22 *= (1152921504606846976 || 14);
            arr_35 [1] [1] = (((var_11 % var_3) <= var_0));
            var_23 -= (((((var_9 > (var_1 * var_0)))) >> (var_1 - 27176)));
        }
    }
    #pragma endscop
}
