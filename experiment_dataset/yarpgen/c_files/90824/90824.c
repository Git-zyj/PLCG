/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= 11222;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_1 [i_0])));
        var_16 ^= ((((min(((9223372036854775807 ? (-9223372036854775807 - 1) : -9223372036854775807)), var_9))) ? (min((((arr_1 [i_0]) % (arr_0 [1]))), (max((arr_1 [i_0]), var_3)))) : (min((arr_0 [i_0]), (((arr_0 [i_0]) - (-9223372036854775807 - 1)))))));
    }
    var_17 = (((var_8 ? var_4 : var_7)));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_18 = (max(var_18, (arr_4 [i_1])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {

                            for (int i_5 = 2; i_5 < 18;i_5 += 1)
                            {
                                var_19 = arr_5 [i_1] [i_1];
                                var_20 = -35;
                                arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] [i_4] [i_5] = (max(0, (((((((arr_15 [i_2] [i_1] [i_3] [i_2] [i_1]) == 437587612))) > (arr_11 [i_1] [i_1] [i_4] [i_1]))))));
                                var_21 ^= var_7;
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_22 ^= ((!(var_1 * var_4)));
                                arr_22 [i_1] [i_2] [i_1] [i_4] [i_4] [i_6] = (((arr_19 [i_1 + 3] [i_1] [i_1 + 2]) ? (arr_17 [i_1] [i_1 - 2] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [i_1 - 1] [i_1 + 2] [15] [i_1])));
                                var_23 = (max((!-1570389122709362093), (max((min((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]), var_5)), (min((arr_15 [12] [i_6] [i_6] [i_4] [i_6]), 3184761246051066456))))));
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_24 = var_1;
                                var_25 -= -4982261212743207377;
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1)
                            {
                                arr_29 [i_1] [i_1] = var_9;
                                var_26 = (-9223372036854775807 - 1);
                                var_27 = ((((var_2 ? (arr_21 [i_1 + 1] [i_1] [i_1]) : ((3170810193921519099 ? var_2 : (arr_16 [i_1 - 2] [i_2] [i_3] [12]))))) & (arr_9 [i_1 + 2] [i_2] [i_3] [i_1])));
                                var_28 = (((min((min(6629324591489552831, (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))), ((((arr_24 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1] [14]) ? -1538965658 : (arr_7 [i_3] [i_4]))))))) ? (((((((arr_3 [i_1]) ? -9210250653478836731 : 4294967295)) + 9223372036854775807)) >> (((var_2 & 62216) - 16596)))) : (((max((arr_26 [i_1] [i_2] [i_3] [i_4] [i_3]), 255)))));
                                arr_30 [i_1] = var_14;
                            }
                            var_29 = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
