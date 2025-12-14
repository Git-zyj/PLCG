/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(var_2, var_10);
    var_12 = (((639833501 > -639833502) | var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (31 < 4592);
        var_13 = (min(var_13, (8579832942045579201 ^ 3039227646896036759)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_14 *= ((((((4095 < 0) ? 65515 : 17))) || ((max(3039227646896036753, 133)))));
                    var_15 = 54186;
                    var_16 = (3039227646896036759 | 8894790528012017962);
                }
            }
        }
        var_17 &= (274877906942 + 14039079301870714299);
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                {
                    var_18 = (min(var_18, var_0));
                    arr_17 [i_1] [i_1] [i_5 + 1] [i_4] = ((!(arr_10 [i_4 - 1] [i_4 + 1] [i_5 + 1])));
                    var_19 -= (((arr_10 [i_4 + 2] [i_4 + 2] [i_4]) == 4011505076582196253));
                }
            }
        }
    }
    #pragma endscop
}
