/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_3;
    var_13 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (121 ^ var_7);
        var_15 = (min(var_15, (~125)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 += (~var_10);
                                var_17 = var_3;
                                var_18 = var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_0] = (-var_10 - var_2);
                                var_19 += (((var_9 == var_6) ^ (!var_6)));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1 + 1] [i_0] = -var_1;
                    arr_20 [i_0] [i_0] [i_0] [i_2] = (((!var_6) || (!var_1)));
                }
            }
        }
        arr_21 [i_0] = var_8;
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_20 = var_8;
        arr_26 [6] [6] &= max(((min(var_4, var_9))), ((((max(var_5, var_0)) > var_6))));
        arr_27 [i_7] [i_7] = (var_6 >> -0);
        var_21 = var_0;
        var_22 = (((var_2 * var_9) & 1644517345));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_40 [i_8] [5] = (min((min((min(152, var_4)), var_3)), ((max(-152, 152)))));
                        arr_41 [i_8] = (min((-5189427314175577431 + var_5), 0));
                    }
                }
            }
        }
        var_23 -= (((min(var_6, var_3)) / (((max(var_2, 5189427314175577431))))));
        var_24 -= (var_8 | var_0);
    }
    #pragma endscop
}
