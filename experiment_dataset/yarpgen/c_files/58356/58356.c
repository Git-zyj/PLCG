/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (5425394807771133719 ? 231 : -26769);
    var_21 = ((var_14 ? (min(((26769 ? 1 : 26779)), -1737508500)) : 26767));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((((-(arr_0 [i_0] [i_0])))) ? ((((((arr_2 [i_0]) ? var_15 : 127))) ? (arr_2 [i_1]) : -32767)) : (2965530893 || 1)));
                arr_9 [16] [i_1 - 1] [i_0] = (((arr_4 [20]) / 9223372036854775807));
                var_22 = ((+(max(1, (((arr_6 [i_1] [i_0] [1]) * 0))))));
                var_23 = (max(var_23, 815872603));
            }
        }
    }
    #pragma endscop
}
