/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (max(2809807255186199492, 1));
                                arr_11 [i_3] [i_3] [i_0] [i_0] [i_3] = 2963;
                                var_16 = (((((var_13 ? var_3 : var_8))) ? -92 : ((-74 ? 92 : 68))));
                            }
                        }
                    }
                    var_17 = (max(var_17, (((-2 ? (min(var_11, var_2)) : var_8)))));
                    var_18 *= ((((min(var_1, var_9))) ? ((((var_9 + var_1) ? var_4 : ((max(var_5, var_6)))))) : ((-27 ? 8448049494813541728 : (((1052925050 ? -104 : 1)))))));
                }
            }
        }
    }
    var_19 = ((var_13 ? var_10 : var_11));

    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_20 += (((((8448049494813541724 ? -10972 : 3477))) ? (((var_12 ? var_13 : var_9))) : ((var_13 ? var_8 : var_0))));
        var_21 = (max((~var_11), var_8));
    }
    #pragma endscop
}
