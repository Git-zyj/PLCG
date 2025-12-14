/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((4095 ? (var_9 * var_4) : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (max(((-(~var_8))), (max(var_6, var_2))));
                    var_14 = (min(var_14, ((max((((1 | (18446744073709551610 == 1)))), ((((max(-1854819644, var_5))) - (max(-1054511394, 2959960486168652581)))))))));
                }
            }
        }
    }
    #pragma endscop
}
