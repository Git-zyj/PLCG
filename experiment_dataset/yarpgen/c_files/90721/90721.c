/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_10;
    var_19 = (min(var_19, (((~((var_15 << ((((var_12 >> (var_2 - 162))) - 16031470566466982)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (max((((((((arr_6 [i_0]) ? var_1 : var_12))) ? (!var_3) : (arr_3 [i_1])))), (((arr_5 [i_0] [i_1] [i_0]) ? (((var_10 ? (arr_6 [i_0]) : var_9))) : ((var_12 ? (arr_1 [i_1]) : var_14))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_0] [15] [i_1] = var_7;
                                var_21 -= (~var_2);
                                arr_17 [3] [i_1] [i_1] [i_1] [i_1] [i_0] = (max((max(((9 ? var_0 : (arr_1 [i_0]))), (var_8 & var_7))), (arr_1 [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_22 = (3505391510 - 1331006243224079464);
                                var_23 -= 232;
                                var_24 = ((((arr_19 [i_0] [i_3 + 3] [i_3] [i_3] [i_3] [i_3 + 2]) > var_15)));
                                var_25 = (max(var_25, (((var_6 / (((arr_11 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) ? (arr_11 [i_2 + 3] [i_3 + 2] [i_3 + 1] [i_3 - 2]) : var_9)))))));
                                var_26 += (max(((((min(1378881952, var_14))) ? (max(var_5, 27)) : -16618)), (arr_15 [i_0] [i_0] [i_2])));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_25 [i_0] [i_1] [i_0] [i_3 - 1] [15] = (i_0 % 2 == 0) ? (((((((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_6]) + 9223372036854775807)) >> (-1158246546 + 1158246577)))) ? ((((var_4 ? var_4 : var_8)) & ((((var_9 + 2147483647) << (((arr_4 [i_1] [i_2] [i_3 - 2]) - 3503097142271939302))))))) : (min((var_10 > var_11), ((var_3 ? (arr_13 [i_3] [i_3] [i_0] [i_0] [i_0]) : var_4))))))) : (((((((((((arr_13 [i_0] [i_1] [i_0] [i_3] [i_6]) - 9223372036854775807)) + 9223372036854775807)) >> (-1158246546 + 1158246577)))) ? ((((var_4 ? var_4 : var_8)) & ((((var_9 + 2147483647) << (((arr_4 [i_1] [i_2] [i_3 - 2]) - 3503097142271939302))))))) : (min((var_10 > var_11), ((var_3 ? (arr_13 [i_3] [i_3] [i_0] [i_0] [i_0]) : var_4)))))));
                                arr_26 [i_0] [i_1] [i_1] [i_3 - 1] [i_0] = (!var_6);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_27 = ((~(arr_2 [i_2 + 3])));
                                arr_30 [i_0] = (var_13 - var_8);
                                arr_31 [i_0] [i_0] [i_2] [i_2] [i_3 + 2] [16] [i_7] = (((var_8 + 2147483647) >> (32 - 16)));
                                arr_32 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_7] = ((+(((arr_27 [i_0] [i_0] [i_2] [i_3] [i_7]) / var_6))));
                                var_28 = ((var_2 ? var_14 : (arr_21 [i_2 + 2] [9] [i_3 - 1] [i_3])));
                            }
                            arr_33 [i_1] |= ((((((arr_9 [i_1] [i_1] [i_2 + 1]) ? (arr_9 [i_1] [i_1] [i_2 - 1]) : (arr_9 [i_1] [i_1] [i_2 - 1])))) - (var_10 - var_5)));
                        }
                    }
                }
                var_29 = var_15;
                var_30 = (min(var_30, (((54396 ^ (((!(arr_12 [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
            }
        }
    }
    var_31 = ((((~(max(2644888197488721770, 1)))) | (((((max(var_0, -14130))) & -32)))));
    #pragma endscop
}
