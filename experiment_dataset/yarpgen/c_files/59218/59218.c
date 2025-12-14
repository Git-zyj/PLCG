/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? (min((((var_9 ? var_10 : var_17))), var_6)) : ((min((~var_4), ((min(var_12, var_4))))))));
    var_20 |= (max(var_10, (min(var_7, -103))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1 + 1] = 730416869;
                            arr_14 [i_0] [i_1] [i_1 - 2] [i_2] [i_3] = ((-((~(min(-107688053024907567, 0))))));
                        }
                    }
                }
                var_21 -= (!1217);
                var_22 = (max(var_22, (17321 * 28)));
                var_23 |= (max((max((max(1232, 64319)), var_13)), (-var_13 != -179106122)));
            }
        }
    }
    var_24 = (min(var_24, (((var_11 ? (max(154, var_11)) : (13 % var_3))))));
    #pragma endscop
}
