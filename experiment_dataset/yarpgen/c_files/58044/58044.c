/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_0;
    var_17 = var_10;
    var_18 = ((var_1 ? (((var_12 >= ((max(7340032, -7340032)))))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (((((var_8 ? 1 : 1))) | ((var_8 ? (((min(0, 48900)))) : (max(-7340033, var_15))))));
                    var_20 = 3174589485638413236;
                }
            }
        }
    }
    #pragma endscop
}
