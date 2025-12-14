/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (arr_2 [i_0]);
                    var_16 -= 0;
                }
            }
        }
    }
    var_17 -= ((((((var_10 && 3848) ? ((var_1 ? var_9 : 15466525320428091459)) : 18446744073709551608))) ? var_8 : ((~((3841 ? var_8 : var_0))))));
    #pragma endscop
}
