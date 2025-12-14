/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_1, var_8))) ^ ((var_10 ? var_6 : 9230288697189411267)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                    var_19 = 182;
                    var_20 += ((max(1, (min(74, var_5)))));
                    var_21 = (1992028509241421230 % (~var_10));
                }
            }
        }
    }
    #pragma endscop
}
