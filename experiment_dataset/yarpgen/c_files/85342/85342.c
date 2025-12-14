/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 142;
    var_18 = min(var_8, (max(var_14, var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 -= (min((arr_4 [i_2] [i_1]), ((((~var_8) ? ((((arr_5 [i_2] [i_2] [i_2]) <= (arr_6 [i_0] [i_0] [i_0])))) : -106)))));
                    var_20 ^= var_3;
                }
            }
        }
    }
    var_21 = ((var_2 & (((var_3 & var_9) - (192 <= var_1)))));
    #pragma endscop
}
