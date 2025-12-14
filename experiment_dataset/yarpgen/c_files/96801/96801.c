/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(63, var_14));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(((!var_13) >> ((((40197 ? var_12 : (arr_1 [i_0]))) - 13942407278717457462))))));
        var_21 = (min((((-(arr_2 [i_0])))), (((32759 ^ var_3) ? (arr_1 [i_0]) : ((65528 ? 8559252670987645791 : var_8))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_22 = ((var_13 / (((arr_0 [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1 - 2]) : -32759))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = (min(59, var_9));
                        var_23 = (max(var_23, 168));
                        var_24 = 15552092408886437519;
                    }
                }
            }
        }
    }
    var_25 &= var_4;
    #pragma endscop
}
