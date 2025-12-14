/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!27689);
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((min(((-6474192593850551132 - (arr_2 [i_0]))), (max(0, (arr_2 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] = ((((((1 ? var_6 : (arr_3 [i_0] [i_0] [i_0 - 1]))) ? (!0) : ((min(0, var_5)))))));
                                var_15 = (arr_2 [i_2]);
                                var_16 *= ((-(((var_2 >= var_10) ? var_6 : var_6))));
                                arr_13 [i_4] [i_4] [i_2] [i_3] = ((var_9 >= ((max((~var_10), var_4)))));
                                var_17 = 13044;
                            }
                        }
                    }
                }
                arr_14 [i_1] = var_3;
            }
        }
    }
    var_18 = (((((var_10 && var_7) + (var_9 | var_3))) - var_11));
    var_19 = (min(var_0, var_10));
    #pragma endscop
}
