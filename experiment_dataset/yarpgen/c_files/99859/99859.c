/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 1878288061314798972;
        var_17 = ((12947677118545283256 && (~1878288061314798972)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = ((!((max((var_16 > var_4), (arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (((~(!1))))));
                    var_19 ^= ((!(((+((-1878288061314798972 ? (arr_10 [i_1] [i_2] [i_2] [i_3]) : 61)))))));
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = ((var_8 / (min(((max(var_11, var_5))), (var_7 * var_11)))));
    var_22 = (max(var_12, (max((var_8 <= var_1), ((var_3 ? var_0 : var_15))))));
    #pragma endscop
}
