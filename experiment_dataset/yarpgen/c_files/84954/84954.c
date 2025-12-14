/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 *= 7;
        arr_3 [i_0] = ((!(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [2] [i_2] [2] [2] &= ((((((arr_13 [i_1]) ? (arr_12 [i_1]) : (arr_12 [i_1])))) ? 1300454075350129126 : var_9));
                        var_16 *= arr_14 [i_1] [i_3] [i_1] [i_1];
                        arr_16 [i_1] = (arr_7 [i_1] [i_1]);
                        arr_17 [i_4 - 1] [i_1] [i_1] [i_2 + 2] [i_1] [i_1] = var_14;
                        arr_18 [i_3] [i_2 + 1] [i_1] [i_3] [i_3] [i_1] = ((((var_7 != (-2147483647 - 1))) ? (((11077 ? 2147483647 : -2147483628))) : var_0));
                    }
                }
            }
        }
        arr_19 [i_1] = ((((var_10 != (arr_13 [i_1 + 3]))) ? 115 : ((var_5 ? (arr_11 [i_1 - 1] [i_1] [i_1] [i_1]) : -5640215454033492477))));
    }
    var_17 = 7864;
    #pragma endscop
}
