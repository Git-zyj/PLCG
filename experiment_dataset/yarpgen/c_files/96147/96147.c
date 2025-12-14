/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((21 ? 767053949251863678 : (-5 & var_6)));
                    var_16 = (min(var_16, (((16787 ? (((-((-(arr_1 [i_0] [i_0])))))) : (6261574401502809120 ^ 249))))));
                    var_17 = ((((((min(23, (arr_1 [13] [13])))) - ((6 ? var_8 : 1))))));
                    var_18 ^= ((~(~var_9)));
                }
            }
        }
    }
    var_19 = (min(var_19, var_6));
    #pragma endscop
}
