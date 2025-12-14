/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 % -var_5);
    var_11 = (((((61115 >> (4420 - 4398)))) ? (((((var_8 ? var_8 : var_8))) ? 61115 : (min(var_2, 4450)))) : ((((var_1 & 4420) ? 4415 : (~var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [2] = (((((61122 << (4413 - 4399)))) / (min((min((arr_1 [i_0 - 1]), (arr_4 [i_0]))), (min(var_5, (arr_4 [i_0])))))));
                var_12 *= ((((4414 ? ((61103 ? 4420 : 4414)) : ((var_1 ? 61121 : 61119))))) ? ((~(61121 ^ var_9))) : (((~((4413 ^ (arr_4 [i_0])))))));
                var_13 ^= ((((((min(4414, var_4))))) < (min((arr_3 [i_0 - 1]), (~var_9)))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 4397;
                                var_15 = (min(var_15, (((((min(4421, var_1))) ? (arr_12 [i_2 - 1] [i_3] [i_4 - 1]) : var_0)))));
                                var_16 = ((((min(var_9, 61114))) ? (((min(61121, var_0)))) : (arr_4 [i_0])));
                                arr_15 [i_4] [i_2] [i_4] = (((~-var_0) < -4421));
                                arr_16 [0] [0] [i_2] [0] [i_4] = var_6;
                            }
                        }
                    }
                    arr_17 [i_0 - 1] [i_0 - 1] [i_2] = (61115 ? 4414 : 4421);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_17 |= ((~(((4432 | var_2) << ((((min(var_6, 61121))) - 62))))));
                                arr_23 [1] [1] [i_2 + 1] [8] [1] = (((((~61093) + 2147483647)) << (((((~4421) + 4424)) - 2))));
                                arr_24 [i_0] [i_1] [3] = (min(((-(((arr_19 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_1 [6]) : var_9)))), (((-var_3 ? ((61130 ? var_6 : var_3)) : (61114 | 61105))))));
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_2] = var_2;
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0 - 1] [i_7] = ((-((4443 ? 61118 : 4432))));
                    var_18 = (~var_8);
                    arr_29 [i_7] [i_1] [i_1] [i_1] = (arr_0 [i_7]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_34 [i_9 - 1] [i_7] [i_7 - 1] = ((min((arr_26 [i_0 - 1] [i_7]), var_0)));
                                var_19 = (!61122);
                                arr_35 [i_0] [i_7] [4] [i_8] [13] [4] = (arr_30 [i_0] [11] [i_8] [i_9]);
                                var_20 |= (min(((var_9 ? (arr_8 [1]) : 61115)), (~4432)));
                                var_21 = ((4432 | (min((arr_1 [1]), ((var_8 ? (arr_7 [i_8]) : 61115))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min((min((((var_4 ? 4432 : 61115))), var_9)), ((min(((var_6 ? var_5 : 4421)), ((min(61093, var_5))))))));
    var_23 = ((61115 ? 4421 : 61123));
    #pragma endscop
}
