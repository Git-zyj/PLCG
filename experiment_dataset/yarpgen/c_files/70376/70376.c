/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((var_1 < ((-487723533 ? -487723509 : var_3)))) ? var_0 : (((max(var_13, var_1)))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [21] [i_0] = var_7;
            arr_5 [i_0] = (arr_2 [i_0] [i_1]);
            var_16 = (max(var_16, (((max((arr_3 [i_0] [i_1]), (arr_0 [i_0] [i_1])))))));
            var_17 *= var_14;
            arr_6 [i_0] [i_0] [i_1] = (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] = (min((((min(var_1, var_10)))), -var_9));
            arr_10 [i_0] [i_2] = ((((min((~var_3), (((arr_7 [i_2]) ? var_11 : var_4))))) && ((!(var_9 < var_5)))));
        }
        arr_11 [i_0] = 35320;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (max((((arr_2 [i_3] [i_3]) - (arr_1 [i_3] [i_3]))), (arr_2 [i_3] [i_3])));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_19 [i_5] [i_4] [i_4] [i_3] = ((var_4 ? (arr_3 [i_3] [i_4]) : (arr_3 [i_4] [i_5])));
                arr_20 [i_3] [i_4] [i_5] [i_3] &= arr_0 [i_5] [i_5];
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_4] = (((arr_15 [8] [i_3] [i_3]) ? (((arr_22 [i_4] [i_4] [i_4]) ? 2047 : var_13)) : (arr_17 [i_3] [i_4] [i_6])));
                var_18 = var_6;
                arr_24 [2] [i_3] [i_4] [i_6] = ((~(arr_18 [i_4] [i_4] [i_4] [i_4])));
                arr_25 [i_4] = var_1;
            }

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                arr_28 [i_4] [i_7] = (((-127 - 1) ? (((arr_0 [i_7] [i_4]) ? -87 : var_4)) : var_12));
                arr_29 [i_3] [i_3] [i_4] = var_8;
                var_19 &= ((255 && (arr_21 [i_7 + 1] [i_3] [i_7 + 1])));
                arr_30 [i_4] = var_12;
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_20 = (max(var_20, (((var_3 + (arr_17 [i_3] [i_4] [i_8]))))));
                var_21 ^= (arr_31 [i_3] [i_4] [i_8] [i_4]);
                var_22 = (arr_2 [i_3] [i_8]);
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_35 [i_3] [i_3] [i_9] |= (arr_22 [i_3] [i_4] [i_9]);
                var_23 -= (((var_3 * var_5) ? var_2 : (arr_8 [i_3])));

                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    arr_38 [i_3] [i_4] [i_4] [i_10] [i_9] = ((var_12 && ((((arr_27 [i_10] [i_4] [i_3]) ? 1 : 196)))));
                    var_24 = (max(var_24, var_4));
                }
            }
        }
    }
    var_25 = var_6;
    var_26 += var_8;
    #pragma endscop
}
