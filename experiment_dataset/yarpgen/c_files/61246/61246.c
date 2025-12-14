/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((~((var_1 ? var_13 : (min(var_7, 1))))));
    var_16 = (!-1697628350);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((arr_4 [i_0] [i_0]), 0)))));
                    arr_8 [i_0] [24] [i_0] |= var_0;
                    var_18 *= (~var_11);
                    var_19 = 11162;
                    var_20 = (((!(169 > var_11))));
                }
            }
        }
    }
    #pragma endscop
}
