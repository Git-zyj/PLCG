/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = (arr_9 [i_0] [i_0] [3] [i_3] [i_3]);
                            var_14 = ((((max((arr_1 [i_2]), ((127 ? 82 : (arr_3 [i_0] [i_0])))))) ? ((min((!1), (arr_8 [i_0] [i_2] [i_2])))) : ((1 ? 4294967295 : 1114322217103874332))));
                        }
                    }
                }
                arr_12 [13] [13] = 18446744073709551615;
                var_15 = (max(var_15, (((((1 ? -2048787529 : 1114322217103874308)))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_16 = (max(var_16, (arr_0 [i_1] [i_4])));
                    var_17 = (((((1 ? 54 : -6372239609811568912))) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_6 [i_0])));
                    arr_15 [i_0] = var_0;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_18 = (!var_1);
                            var_19 ^= (!-2147483621);
                        }
                        var_20 = (max(var_20, 2488803539703651450));
                    }
                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_27 [i_8] [i_0] [i_7] [i_4] [i_4] [i_1] [i_0] &= 1;
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((arr_4 [i_4] [4] [i_4]) ? (arr_24 [i_0] [i_0] [i_0] [7] [i_7] [4]) : var_12)) / ((10874 ? (arr_26 [i_0] [i_1] [i_0] [i_7] [i_8]) : 1))));
                        }
                        var_21 = ((82 ? ((0 & (arr_17 [i_1] [i_1] [i_1] [i_1]))) : (-6372239609811568912 >= 1114322217103874312)));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_37 [i_10] [i_1] [i_9] [i_9] [i_11] [i_10] [8] = -var_12;
                                var_22 = (((((arr_31 [i_9] [i_9] [i_9] [i_9] [i_0] [i_9]) ? 1258063023 : (arr_31 [i_0] [i_1] [i_9] [i_9] [i_1] [i_9])))) <= 17332421856605677304);
                            }
                        }
                    }
                    var_23 = (max(var_23, 1114322217103874332));
                    var_24 |= (((17332421856605677304 & 4306) ? var_11 : ((var_7 ? (arr_36 [i_9] [i_0] [i_0]) : (((var_2 & (arr_10 [i_1] [i_1] [i_9] [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
