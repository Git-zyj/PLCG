/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(((var_1 ? var_9 : var_12)), (((var_7 ? var_8 : var_14)))))));
    var_16 = ((min((!var_8), (var_10 * var_10))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = var_3;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 ^= (((arr_5 [i_0] [i_1] [i_1]) == (arr_2 [i_0])));
            var_19 = ((!(arr_1 [i_0] [i_0])));
            var_20 += (((37711 ? var_13 : var_8)));
            var_21 &= ((~(arr_4 [i_1] [i_1] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_2] = (((arr_6 [i_2] [i_2]) % ((var_8 ? var_7 : (arr_7 [i_4])))));
                        var_22 += (((((arr_10 [i_2 + 4]) + 2147483647)) >> (var_10 - 11763)));
                        var_23 = (((((27825 ? var_7 : var_1))) ? -var_12 : (var_14 + 37714)));
                        var_24 = ((-(arr_16 [i_2 + 4] [i_3] [i_2] [i_2 + 4] [i_2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_25 &= (arr_6 [i_2 - 2] [i_8]);
                            var_26 = (((((var_11 ? var_1 : var_7))) ? ((0 ? -9175936841594812583 : 1)) : (arr_11 [i_2 - 1] [i_2 - 2])));
                            var_27 = var_5;
                            var_28 = ((!(arr_12 [i_2 - 2])));
                        }
                        arr_29 [i_2] [i_6] [i_7] [6] [i_2] = (arr_8 [i_2 - 1]);
                    }
                }
            }
        }
        var_29 = var_6;
    }
    var_30 *= (max((min(var_11, (max(var_9, var_1)))), ((((!var_11) ? var_6 : ((var_7 ? var_7 : 2582952103)))))));
    #pragma endscop
}
