/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-6427589195649720286 == var_11) << (((max((min(-6427589195649720280, var_1)), var_0)) - 2119700175))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((var_9 * 1) ? (((arr_5 [i_1 - 2] [i_2 + 1] [i_1 + 1] [i_1 - 1]) ? (arr_1 [i_0] [i_2 + 1]) : (arr_5 [5] [i_2 + 1] [i_1 + 1] [i_1 + 1]))) : ((1419036584 | (arr_1 [i_0] [i_2 + 1])))));
                    var_14 &= ((((((((arr_3 [i_0] [i_2]) <= var_10)))) <= -6427589195649720286)));
                }
            }
        }
    }
    var_15 &= (((((var_1 ? var_4 : var_3))) ? ((((var_7 + var_5) ? var_4 : var_7))) : (((-226042386 ? 5768856861900559613 : var_4)))));
    #pragma endscop
}
