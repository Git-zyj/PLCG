/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((65535 > var_9) < 2726458200099991265)) ? (((7502957545083966738 ? 9 : var_12))) : (((max(var_4, var_0)) << (((~var_4) - 18055319623956212272))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_15 = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (max((arr_6 [i_0] [i_2] [i_3] [i_4]), (1 && 14176649654612058650)));
                                arr_12 [i_0] [i_1] [1] [i_3] [20] = (max(1, (arr_1 [i_3] [5])));
                                var_17 = ((var_12 << (var_12 % var_7)));
                            }
                        }
                    }
                }
                var_18 |= ((40733 ? (arr_5 [15]) : var_6));
                var_19 = (max(var_19, 1));
                var_20 &= var_0;
            }
        }
    }
    var_21 = ((((((1 & 6887980493504416884) ? ((min(1, var_8))) : 70))) == (!var_11)));
    var_22 = var_10;
    #pragma endscop
}
