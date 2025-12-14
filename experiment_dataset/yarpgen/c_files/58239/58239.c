/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_9;

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_15 |= arr_3 [i_2 + 1] [i_2] [i_2 - 2];
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = (!49925);
                                var_16 &= ((((min((arr_10 [i_0] [i_0] [i_2] [i_3]), (arr_11 [i_0])))) ? (((~171) ? (((25399 ? (arr_3 [i_2] [i_1] [i_2]) : var_3))) : ((~(arr_9 [8] [i_1] [i_2] [17] [17]))))) : (((min(((((arr_11 [i_0]) <= (arr_4 [i_0] [9])))), var_2))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_17 = ((((((arr_10 [i_0] [i_1] [i_2] [i_6]) & (arr_10 [i_0] [i_1 + 1] [i_5 - 3] [i_6])))) ? ((~(arr_10 [i_0] [i_1] [i_5 - 1] [i_1]))) : 84));
                                var_18 = var_11;
                                var_19 = var_8;
                                var_20 = (((min(189, (arr_9 [i_6] [i_6] [i_6] [12] [i_6])))) << (((((arr_5 [i_5 - 3] [i_2 + 3] [15]) ? -1 : (arr_3 [i_5 + 1] [i_2 + 1] [12]))) + 48)));
                                var_21 = ((((!(arr_4 [i_1 + 2] [i_1 + 2]))) ? ((((arr_4 [i_1 + 2] [i_1 + 2]) || (arr_4 [i_1 + 2] [i_1 + 2])))) : var_6));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] [i_0] = (~-10);
                }
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_7] [i_8] [i_9] = (max(((((((154 ? 688514245932726895 : 47))) ? var_0 : 1))), (((arr_19 [i_9] [i_1 - 1] [i_1]) + 0))));
                                var_22 -= ((((max(var_13, -6489))) ? -46 : ((min(-10, (var_8 && var_12))))));
                            }
                        }
                    }
                }
                var_23 = (max(((((var_11 ? var_3 : -11)) >> ((((var_6 ? -12100 : var_12)) + 12126)))), ((min(var_0, 66)))));
            }
        }
    }
    var_24 = ((-((var_6 ? 59 : 14576365913540799627))));
    #pragma endscop
}
