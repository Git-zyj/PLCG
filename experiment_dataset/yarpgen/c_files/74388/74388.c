/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = -576460752303423487;
        var_20 = (max(var_16, (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = 0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (var_0 - 1086997665);
        var_21 = (((arr_5 [i_1]) >= (arr_1 [i_1])));
        var_22 = (arr_0 [4] [i_1]);

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_23 *= ((var_5 & ((var_12 << (((arr_9 [1]) + 53))))));
            var_24 *= ((var_4 && (arr_7 [6] [6])));
            var_25 = (arr_0 [i_2] [i_1]);

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_2] [i_2] [i_3] [2] = ((((arr_10 [i_1] [i_1] [i_1]) + 2147483647)) >> (((var_14 - var_12) - 3274035883837673503)));
                var_26 = arr_6 [i_1];

                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    arr_18 [i_3] [i_3] [i_3] [9] [i_2] [i_3] = (arr_17 [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_4 - 1]);
                    var_27 = ((arr_17 [i_4 + 3] [i_2] [i_3] [i_2]) <= (arr_2 [i_1]));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_28 = (-5 <= var_18);
                    var_29 = (min(var_29, ((((arr_1 [i_2]) || (arr_1 [i_1]))))));
                }
                arr_21 [i_1] [i_2] = (arr_6 [i_1]);
                arr_22 [i_2] [i_2] [4] &= (((arr_0 [6] [i_2]) - var_7));
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_30 = (arr_10 [i_1] [4] [i_6]);

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_31 = (arr_0 [i_7] [i_7]);
                arr_29 [i_7] [i_6] [i_7] [i_7] = (arr_10 [i_1] [i_6] [i_7]);
            }
        }
    }
    var_32 = var_3;
    #pragma endscop
}
