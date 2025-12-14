/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_21 &= (((~var_9) ? ((var_19 ? (max(-4673435604106771266, 31330)) : (((max((arr_2 [13]), var_10)))))) : (((((4673435604106771270 ? var_18 : var_6))) ? (((~(arr_2 [i_0 + 1])))) : (-6583316671908413626 | var_16)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] = (max((!var_19), var_7));
                                var_22 = ((var_17 ? ((((((arr_14 [i_0] [i_1] [21] [i_3] [1] [i_0]) / var_1))) ? (((((arr_1 [24] [i_0]) < var_13)))) : var_2)) : (arr_4 [i_4])));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_0] = var_15;
                                var_23 = ((max(var_17, 17102811012447125927)));
                                var_24 = ((var_9 ? (arr_5 [i_0 + 1] [i_0 + 1]) : ((var_13 ? (((max((arr_1 [i_1] [i_0]), 244)))) : 3597674913))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, ((min((((-3972499476990661022 ? -8369141657272244310 : var_1))), -4673435604106771285)))));
            }
        }
    }
    #pragma endscop
}
