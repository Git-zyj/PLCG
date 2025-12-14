/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((var_6 ? var_2 : -var_9)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(arr_1 [i_0] [i_0])));
        arr_5 [i_0] [3] = ((-(arr_0 [i_0])));
        var_12 = (arr_1 [i_0] [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 -= -2147483647;
            var_14 &= (((((arr_7 [i_0] [i_1]) ? var_7 : (arr_2 [i_0] [i_1]))) > 2147483647));
            arr_8 [2] [1] [8] |= (((arr_7 [i_0] [i_1]) >= (arr_7 [3] [i_0])));
            var_15 = ((-(((arr_2 [i_0] [i_1]) ? (arr_7 [i_0] [i_0]) : var_5))));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_16 -= var_3;
                arr_13 [i_2] [i_1] [i_2] = (-(arr_11 [i_2 - 1] [i_1] [i_0]));
            }
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_17 |= ((var_3 ? (((-(max(var_7, -1445289177))))) : (((arr_0 [i_0]) ? (max(1, (arr_6 [i_0] [i_0]))) : (((((arr_12 [i_3] [i_3] [i_0]) >= var_6))))))));
            var_18 = (arr_9 [10] [i_3] [i_3]);
            var_19 = (((min(1, 3609320758531972649)) | 1));
            var_20 = ((-(min((arr_12 [i_0] [i_3] [i_3]), (arr_7 [i_3] [i_3])))));
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_19 [i_4] = (-(arr_17 [19] [20]));
        var_21 = (((-2147483647 - 1) ? ((1 ? ((124 ? 3609320758531972654 : (arr_17 [i_4] [6]))) : 2147483647)) : 9535));
    }
    var_22 &= (((-2147483647 - 1) ? ((var_7 ? -1458091395 : var_3)) : ((var_8 ? var_3 : var_3))));
    var_23 ^= (((max(-var_8, -var_4)) == -32056));
    #pragma endscop
}
