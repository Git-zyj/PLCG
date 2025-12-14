/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_2, var_9)) != (((17 ? var_4 : var_8)))));
    var_16 = ((4294967286 ? ((var_9 ? -var_6 : (max(0, var_10)))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 ^= var_7;
                    var_18 = ((-1400719399 <= (((var_12 || var_6) ? var_2 : (arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_0])))));
                    var_19 = max(var_11, (min(1227576608, (max((arr_4 [4] [12]), (arr_3 [i_1] [i_0]))))));
                    var_20 = arr_0 [i_0] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
