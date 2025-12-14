/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = var_15;
                var_21 += ((!(arr_0 [6] [6])));
                var_22 = ((((((arr_2 [i_1]) / (arr_0 [i_0] [i_0])))) && -4242434784));
            }
        }
    }
    var_23 = (((((((var_7 * var_15) && var_9)))) & ((-(min(26491, var_7))))));
    #pragma endscop
}
