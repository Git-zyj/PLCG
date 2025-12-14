/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_12;
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_18 = (((arr_1 [i_0]) != ((-1258147520 ? 0 : (arr_2 [0])))));
            var_19 = ((-(arr_4 [i_0])));
        }
        var_20 *= var_4;
        var_21 ^= var_1;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((((arr_3 [i_2]) / (min((arr_2 [i_2]), (arr_7 [i_2]))))));

        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            arr_11 [i_2] [i_3] [i_3] = max(((((min((arr_10 [i_2] [i_2]), (arr_4 [i_2])))) ? (((arr_0 [i_3]) % (arr_1 [i_2]))) : (min((arr_5 [1]), var_0)))), (arr_10 [i_2] [i_2]));
            var_22 *= var_10;

            /* vectorizable */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_23 = (max(var_23, (((var_15 ? (arr_9 [i_2] [i_4 + 3]) : (arr_9 [i_4 - 1] [i_4 + 3]))))));
                var_24 = (max(var_24, (-2147483647 - 1)));
                var_25 = (min(var_25, (arr_2 [i_3 + 2])));
                arr_14 [i_3] [i_3 - 1] = ((arr_13 [i_3 + 3] [i_3 + 2] [i_4 + 1] [i_4 + 2]) ? var_14 : (arr_13 [i_3 - 1] [i_3 + 1] [i_4 + 2] [i_4 + 3]));
            }
        }
        arr_15 [i_2] [i_2] = var_1;
        var_26 = (max(var_26, ((min((arr_1 [i_2]), ((((max((arr_2 [i_2]), (arr_4 [i_2]))) <= (~var_3)))))))));
    }
    var_27 = (max((((var_4 & ((-8150333611683894212 ? 5114 : 71))))), var_1));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_28 ^= 1048575;
                    var_29 = (min(var_29, (((((((((var_7 ? (arr_20 [i_5] [i_6] [i_7]) : 9223372036854775807))) ? (arr_19 [4] [i_6] [i_6]) : (arr_22 [i_5] [i_6] [i_6] [i_7])))) ? (((max((arr_19 [i_5 - 1] [13] [i_5]), (arr_19 [i_5 - 1] [i_5 - 1] [i_5 + 1]))))) : var_13)))));
                }
            }
        }
    }
    #pragma endscop
}
