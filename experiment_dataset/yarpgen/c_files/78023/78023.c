/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = var_16;
                    var_19 *= (arr_5 [10] [10]);
                }
            }
        }
    }
    var_20 = (max(var_20, ((min(var_16, var_12)))));
    #pragma endscop
}
