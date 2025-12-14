/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((7050 < (((arr_4 [i_0] [i_1]) - (arr_0 [i_0] [i_1])))));
                var_20 = (max((((((arr_3 [3]) | var_4)))), (((arr_1 [14]) / (var_9 * 7064)))));
            }
        }
    }
    var_21 &= 58478;
    var_22 = var_2;
    var_23 = var_1;
    #pragma endscop
}
