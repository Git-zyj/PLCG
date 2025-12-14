/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_7;
    var_15 -= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0] = (((1 ? (-2143408047177261872 <= var_13) : (arr_2 [i_0] [i_0 - 1]))) != (((min(1, 0)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [i_3] [i_3] [i_2] [i_0] = var_10;

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_14 [i_4] [i_3] [i_4] [i_1] [i_0 - 1] |= ((!((((max(var_12, (arr_7 [i_3] [i_3] [i_3] [i_3]))) ? (!-7525662302610748576) : (arr_4 [i_4] [i_0 - 1]))))));
                                var_16 = (min(var_16, (((var_13 ? var_6 : var_5)))));
                                arr_15 [i_4] &= (max(1, 5263797680349755986));
                                var_17 = (1 >= (max((arr_2 [i_0] [i_0]), 0)));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_19 [i_0] [i_2] [i_3] [i_5] = ((((~(arr_0 [i_0 - 1]))) % ((-5263797680349756004 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                                arr_20 [i_0] [i_3] = (max((var_12 < -5263797680349755981), ((((var_11 >= (arr_2 [i_0] [i_5]))) ? (min(6697412457539863215, 3227158022213694839)) : (((var_5 ? (arr_7 [i_0] [i_2 - 2] [i_3] [i_5]) : var_5)))))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_18 = (max(var_18, (((((var_7 ? (arr_10 [i_3] [i_0 - 1] [i_1] [i_2 + 1]) : (arr_21 [i_0 - 1] [i_1] [i_2 - 2] [i_3] [i_6]))) < var_4)))));
                                arr_23 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0 - 1] = (1 ? 0 : -5115929571979076057);
                                arr_24 [i_0 - 1] [i_1] [i_0] [i_3] [i_6] = ((var_3 ? 1 : (max((arr_3 [i_0] [i_0]), var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
