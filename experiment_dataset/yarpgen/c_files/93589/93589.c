/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min(var_12, var_9));
        var_13 = (min(var_13, -118));
        arr_3 [i_0] [i_0] = 51401;
        arr_4 [i_0] = (!1191617537035767143);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_1] [i_1] [i_3] = (~-1191617537035767154);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((!(!var_2))))));
                                var_15 ^= var_7;
                                arr_21 [i_3] [4] [i_3] [i_4] [1] [i_1] = -1191617537035767125;
                                arr_22 [i_1] [10] [i_3] = -9532;
                            }
                        }
                    }
                    var_16 = (((9519 | 15) & (-9532 || var_10)));
                }
            }
        }
        arr_23 [i_1] [i_1] = ((!(var_4 - 1191617537035767170)));
    }
    var_17 = 5430065264045825734;
    var_18 = 1;
    var_19 = 1;
    #pragma endscop
}
