/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (1047017306 % -1047017307);
                                var_17 = (min(var_17, (((var_7 & (~0))))));
                                var_18 = (min(var_18, 1047017306));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min((arr_19 [i_0] [i_1] [i_2] [i_6 - 3]), (max((min(var_6, (arr_19 [i_0] [i_1] [i_0] [i_6 + 2]))), ((max(var_12, -674452602)))))));
                                var_20 = ((arr_16 [i_0] [i_1] [i_2] [i_5] [i_6]) | (max(4724070274973914476, (((var_4 > (arr_12 [i_0] [i_0])))))));
                                arr_23 [i_6 - 3] [i_5] [i_2] [i_1] [i_0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_31 [i_7] [i_8] [i_7] = ((-(((((arr_12 [i_8] [i_8]) == var_9)) ? ((21835 ? (arr_2 [i_8] [i_7]) : (arr_25 [i_7]))) : var_10))));
                var_21 = var_5;
                var_22 = (arr_21 [i_7] [i_8]);
                var_23 = (max((-13780 == -1047017306), -4724070274973914459));
            }
        }
    }
    var_24 -= var_7;
    #pragma endscop
}
