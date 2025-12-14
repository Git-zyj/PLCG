/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_14 ? ((0 ? (((arr_3 [i_0] [i_1] [i_1]) ? 1467603368375983637 : var_13)) : (arr_2 [i_0] [i_0]))) : ((((((var_3 ? var_17 : 255))) ? (min((arr_1 [i_0]), var_4)) : (var_18 != 3312073226))))));
                arr_6 [i_0] = (((~var_11) ? (-26215 || -1497270153) : (((((var_18 ? (arr_3 [16] [16] [i_1]) : 0))) ? (min(1, (arr_0 [i_1]))) : var_12))));
                arr_7 [i_0] [i_0] [i_0] = (max(((~(arr_3 [2] [i_1] [i_1]))), ((((max(var_6, var_6))) ? ((0 ? (arr_2 [i_0] [i_1]) : var_13)) : (~var_11)))));
            }
        }
    }
    var_19 = ((((((var_6 || var_17) ? -9018 : var_4))) ? var_17 : (((((var_10 - var_4) > var_13))))));

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_20 &= (arr_0 [15]);
        var_21 = (min((arr_9 [i_2]), ((-(arr_9 [0])))));
        var_22 = (max(var_22, 3791946648));
    }
    #pragma endscop
}
