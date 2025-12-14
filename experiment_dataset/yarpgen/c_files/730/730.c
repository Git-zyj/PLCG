/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 30;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (max(100, 1));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_20 -= -1;
                        var_21 = (min(var_21, (~-8832401498039573587)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_22 ^= (~var_2);
                            var_23 = (min(var_23, (var_2 / var_14)));
                            arr_13 [i_0] [i_0] [i_2] [i_4] = var_16;
                        }
                        var_24 = (min(var_24, var_0));
                    }
                    for (int i_6 = 2; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [1] [i_2] [i_6 - 1] |= ((((((var_2 < var_14) & (min(var_0, 9689))))) ? var_7 : ((max(-9671, 1)))));
                        var_25 = (-3457091805532250875 | -3457091805532250882);
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_17));
    var_27 = (min(var_27, ((min(var_16, var_13)))));
    var_28 = (((var_0 / (~var_15))));
    #pragma endscop
}
