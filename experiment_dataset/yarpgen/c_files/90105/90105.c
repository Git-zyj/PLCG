/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (min(var_20, (((var_16 & (~67))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = (((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : (max((arr_1 [8] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = 1;
        var_22 = (min((((max(var_9, var_3)) << (((((arr_0 [i_0]) ? -19118 : (arr_2 [i_0] [i_0]))) - 18446744073709532498)))), 14190));
        arr_4 [i_0] = (--var_8);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [3] [i_1] = var_4;
                        var_23 = (max(var_23, (arr_1 [i_1 - 1] [i_1 - 1])));
                        arr_14 [i_1] = -15706453244172165602;
                    }
                }
            }
        }
    }
    #pragma endscop
}
