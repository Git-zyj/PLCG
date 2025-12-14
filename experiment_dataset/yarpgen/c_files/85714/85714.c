/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 += ((+(((arr_4 [i_0] [2] [i_0]) | (arr_5 [i_1] [2] [2])))));
                arr_6 [i_0] [i_1] [i_0] = (arr_1 [3]);
            }
        }
    }
    var_14 = (((((-42078 ? (135 && var_4) : ((max(135, var_11)))))) ? var_12 : ((((104 != 145) <= ((var_7 ? var_12 : var_6)))))));
    var_15 = ((1 & ((var_7 ? var_3 : (255 - var_8)))));
    var_16 = ((129 ? (((~var_5) % var_3)) : var_4));
    #pragma endscop
}
