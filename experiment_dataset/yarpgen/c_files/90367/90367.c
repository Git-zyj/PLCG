/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((127 / (9223372036854775803 ^ 6738062190845969679)));
                var_12 = (-(min((arr_3 [8]), (arr_3 [3]))));
                var_13 = ((((((!(arr_2 [i_0 + 1] [i_0]))))) > (min(((1023 ? (arr_2 [i_0] [i_0]) : 1324946355549770352)), 2022082934))));
            }
        }
    }
    var_14 = ((54 ? (~56420) : var_1));
    var_15 = (max(var_15, ((max(var_0, var_8)))));
    #pragma endscop
}
