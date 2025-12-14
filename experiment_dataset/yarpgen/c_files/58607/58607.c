/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = 3480218632;
                var_19 = (((((arr_1 [i_0 - 3]) ? 28005 : (arr_1 [i_0 - 1]))) > (max(655515761, 1410895448))));
                var_20 = 21;
            }
        }
    }
    var_21 -= ((~((26 ^ (~-32763)))));
    var_22 = ((~((max(var_2, var_4)))));
    #pragma endscop
}
