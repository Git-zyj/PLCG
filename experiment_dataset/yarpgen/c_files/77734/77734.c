/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_0]);
                var_21 |= ((var_6 || (((14991 >> (((arr_4 [9] [9]) + 263461112)))))));
                var_22 = (min((((~(arr_2 [i_0])))), (arr_1 [10])));
            }
        }
    }
    var_23 |= ((var_19 ? ((min(var_0, var_19))) : (~var_7)));
    var_24 = (max(var_24, (((-(max(var_0, ((var_4 ? var_17 : var_7)))))))));
    var_25 |= var_16;
    #pragma endscop
}
