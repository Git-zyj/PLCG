/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((var_1 ? (((((79 ? 1792 : 7798644955422899383))) ? -7798644955422899384 : -1)) : ((((!var_12) ? var_3 : (((91 ? var_12 : -1))))))));
                arr_6 [i_0] [i_1] = ((0 ? 0 : 0));
            }
        }
    }
    var_15 = ((((!var_5) ? var_1 : var_13)));
    var_16 ^= var_13;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] [i_3] = -1;
                arr_12 [i_2] [i_2] [i_2] = 118;
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_3] [i_2] [i_5] [i_6] = ((((min(-3607693900172072030, -122))) ? -8590 : (arr_20 [i_3])));
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3] [i_3] = ((((((var_12 ? (arr_14 [i_2] [i_3] [i_2] [i_5]) : (arr_13 [i_3] [i_3] [i_5] [i_6])))) ? (arr_16 [i_4 + 1] [i_6 + 1] [i_6 + 1] [i_6]) : (((arr_9 [i_2] [i_2]) ? 0 : (arr_20 [i_2]))))));
                            }
                        }
                    }
                }
                arr_24 [i_2] [i_3] = 0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_17 = ((-(~var_13)));
                            var_18 = (~-1607871409942910496);
                            var_19 = (((arr_10 [i_2] [i_2]) ? (((((var_13 ? (arr_28 [i_8] [i_2] [i_2] [i_7] [i_2] [i_2]) : -9))) ? (~-8069154285945067349) : var_3)) : (((((15002893075005898297 ? -1 : 1660483172))) ? 793563069920027558 : (((arr_19 [i_2] [i_3] [i_7] [i_7] [i_7]) ? 2879216144252797414 : 8713315559166838211))))));
                            arr_29 [i_7] [i_7] [i_7] = ((((((((-(arr_26 [i_2] [i_2] [i_7] [i_8])))) ? (~var_6) : (114 ^ -7798644955422899389)))) ? (+-7798644955422899364) : (((var_13 ? (arr_16 [i_8] [i_8] [i_8 - 2] [i_8]) : (!140600049401856))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
