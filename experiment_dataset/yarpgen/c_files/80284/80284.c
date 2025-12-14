/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = max((max((max(var_1, 3677253454993010403)), (~3677253454993010403))), ((((32767 | 26029) | var_12))));
                var_14 = (((((((min(0, 3))) ? (var_8 % var_10) : (((min(77, var_7))))))) ? (max((arr_5 [i_0 + 2]), (arr_5 [i_0 - 1]))) : ((max((arr_1 [i_1]), ((max(var_6, (arr_2 [i_0])))))))));
                var_15 = -442464624;
            }
        }
    }
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                var_17 = ((!(((((max(var_12, 18446744073709551615))) ? var_8 : (min((arr_9 [9]), var_4)))))));
                arr_13 [1] [i_3] [i_3] = 43;
                var_18 *= (((((32744 ? 123 : -52))) || var_13));
            }
        }
    }
    #pragma endscop
}
