/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_0] = ((var_15 ? (885381216 != -1104117867) : (((arr_2 [i_0]) | (~var_4)))));
                    var_18 = ((!(((((arr_2 [i_1 + 1]) ? var_3 : var_7)) < (((var_9 ? var_16 : -885381206)))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (max((max(-626477151248464950, var_4)), ((-var_11 ? ((var_0 ? var_7 : var_14)) : var_1))))));
    var_20 = ((~((var_2 ? (min(var_8, var_2)) : (var_7 <= var_8)))));
    var_21 = ((var_17 ? var_12 : 1567081371));
    #pragma endscop
}
