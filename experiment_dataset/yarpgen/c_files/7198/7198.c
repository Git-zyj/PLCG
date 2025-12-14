/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-(((arr_4 [i_0] [i_0]) ? ((0 ? -58 : 58)) : (max((arr_2 [1]), var_4))))));
                var_15 *= (arr_2 [2]);
            }
        }
    }
    var_16 ^= ((18446744073709551615 ? ((var_1 ? (((var_12 ? 965137241 : var_10))) : (~var_3))) : var_7));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_17 = (max(var_17, (((~(arr_6 [i_2] [i_2]))))));
        var_18 = (arr_6 [i_2] [i_2]);
        var_19 = (((arr_7 [14]) ? (arr_7 [i_2]) : (arr_7 [i_2])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_20 += (arr_8 [i_3]);
        var_21 |= (arr_9 [i_3]);
        arr_10 [1] [i_3] |= (arr_6 [i_3] [i_3]);
        var_22 = (min(var_22, var_4));
    }
    #pragma endscop
}
