/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (!var_10);
    var_18 = ((~((1 ? 0 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                var_19 = 4;
                                var_20 -= ((min(var_15, 1)));
                                arr_12 [i_0] [i_2] [i_2] [i_2] = ((9 ? 1 : 0));
                                var_21 = (max(var_21, (((((max(((5362 ? 1 : var_10)), var_11))) ? -127 : ((max(var_7, var_1))))))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_22 += (((1 - var_9) ? ((1 ? 3 : (((18446744073709551615 ? 19132 : 44))))) : (((((var_3 ? var_7 : 9)) * var_8)))));
                                var_23 *= var_11;
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                var_24 *= ((~(~-19149)));
                                var_25 = min(((1 ? 13580700463923209998 : 1)), (max(var_15, 4866043609786341642)));
                            }
                            var_26 *= (-1 + var_10);
                            var_27 = (max(var_15, var_7));
                            arr_19 [i_0] [i_1] [i_2] [i_0] = 1;
                        }
                    }
                }
                var_28 = ((~(var_10 | var_14)));

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_22 [i_0] = (min(44, -13));
                    var_29 = (((((var_4 ? 11180563414875492768 : var_3))) ? ((min(0, 162))) : 1098334770339261434));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_30 += (((var_2 - 4866043609786341646) ? (max((((var_11 ? var_7 : var_6))), 11)) : (!var_9)));
                                arr_29 [i_0] = 11303;
                                var_31 = ((((var_13 ? 215 : 118)) / ((min(-11303, 0)))));
                            }
                        }
                    }
                    var_32 ^= (((var_6 ? (826392855 && 229) : var_11)));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_33 = 1989379723;
                    var_34 = (((max(0, var_11))));
                }
            }
        }
    }
    var_35 = var_3;
    var_36 = ((max(var_0, var_10)));
    #pragma endscop
}
