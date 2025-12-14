/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 128;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_4 [16]);
                var_15 = (min(var_15, (arr_2 [3] [3])));
            }
        }
    }
    var_16 = ((var_11 ? var_12 : (((var_1 != var_13) ? var_12 : 1))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_17 &= 1;
                    var_18 = (((var_0 ? ((-18998 - (arr_10 [i_2] [i_2]))) : ((var_3 ? -126 : -127)))));
                }
            }
        }
    }
    #pragma endscop
}
