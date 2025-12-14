/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = var_0;
    var_19 |= (min(var_2, (!var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((!(arr_0 [i_0])));
                arr_6 [i_0] = (max((((arr_4 [i_0]) ? (arr_1 [i_0]) : var_10)), ((var_15 ? var_14 : (min((arr_3 [i_0 + 1] [i_1] [i_0 - 1]), -986262148))))));
                var_20 ^= (arr_1 [12]);
                arr_7 [i_0] [i_1] [i_1] = ((var_6 ? ((~((max(var_10, (arr_1 [i_0])))))) : (!-986262149)));
            }
        }
    }
    var_21 = (min(var_4, ((((var_16 != var_2) != (~var_14))))));
    #pragma endscop
}
