/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_10 += 120;
                                var_11 -= (min(var_8, ((7416710844669431084 ? 232 : (arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))));
                            }
                        }
                    }
                    var_12 = (max(((((((arr_4 [i_0 + 2] [i_0]) ? 8388544 : var_3))) ? ((var_5 ? 11030033229040120531 : 149)) : (arr_7 [i_0] [i_0]))), (((0 >> (121 - 110))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            {
                var_13 = (((arr_3 [i_5] [i_6]) >> ((((arr_6 [i_6 - 2] [i_5] [i_5] [i_5]) != var_7)))));
                var_14 = (arr_5 [i_5] [i_5] [i_5] [i_5]);
            }
        }
    }
    var_15 = (min(var_7, (((var_7 < ((7416710844669431084 ? 1780308244 : var_8)))))));
    var_16 = -1006632960;
    var_17 = var_1;
    #pragma endscop
}
