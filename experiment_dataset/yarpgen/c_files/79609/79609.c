/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((-(-127 - 1))));
                    var_20 = var_7;
                    var_21 = (min((min((((var_2 && (-127 - 1)))), var_17)), ((((((arr_0 [i_0] [i_0]) | var_11)) ^ (((1203473797 ? (-127 - 1) : var_11))))))));
                }
            }
        }
    }
    var_22 |= var_0;
    #pragma endscop
}
