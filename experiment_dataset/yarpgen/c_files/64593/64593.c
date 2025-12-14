/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? (((((max(var_17, var_0)) <= var_7)))) : ((-var_4 ? var_4 : var_17))));
    var_20 &= (min(var_3, ((-var_18 ? (((var_10 ? var_7 : var_12))) : (min(var_2, var_13))))));
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (min(var_22, var_14));
                var_23 = (arr_4 [i_0]);
                var_24 = (min(var_24, ((((-7801 + (arr_4 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
