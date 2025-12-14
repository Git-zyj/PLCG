/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 *= var_8;
    var_13 = (((~((-59 ? 52 : var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 *= arr_3 [i_0] [i_1] [i_1];
                var_15 = -115;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((!(((0 ? 114 : -32)))));

                            for (int i_4 = 1; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [i_3] [4] [i_2] [i_3] [i_4 + 1] = -18;
                                var_16 = (min(var_16, ((((((arr_1 [i_0] [i_0 - 1]) - 20)) % 68)))));
                                var_17 = (6 / 30);
                            }
                            for (int i_5 = 1; i_5 < 12;i_5 += 1)
                            {
                                var_18 = ((((min((min(-95, var_6)), 121))) != 30));
                                arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0] = ((-90 ? ((~((max(68, (arr_8 [i_0] [i_3] [i_2] [i_0] [i_0 - 2] [i_0])))))) : (((-1 && ((min(89, 127))))))));
                            }

                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                arr_23 [i_0 - 1] [i_1] [i_2] [i_3] [i_6] = var_10;
                                arr_24 [i_0] [i_1] [i_0] [i_3 - 2] [i_6] = (((((18 ? ((min(var_3, 68))) : ((64 ? 31 : -117))))) && ((min((~var_9), ((-38 ? 66 : (arr_20 [i_0] [i_1] [i_2] [i_3] [9]))))))));
                                var_19 = (!0);
                                var_20 = (min(((((max((arr_1 [i_1] [i_3 + 1]), 91))) >> ((((min(-25, 56))) + 34)))), (24 ^ -6)));
                            }
                            arr_25 [i_3 - 1] [i_2] [i_1] [i_0] = ((!(((-(39 < 85))))));
                        }
                    }
                }
                arr_26 [i_1] [i_0] = ((~(-11 > -57)));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_36 [i_9] [7] [i_8] [i_7] [i_1] [9] [i_0] = ((-var_9 / (arr_14 [5] [i_1] [i_7] [1] [i_9])));
                                var_21 = (((59 | 85) <= (84 / 90)));
                                var_22 = (max(var_22, ((min(((-1 ? (-1 & -4) : var_1)), (max(-9, 73)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
