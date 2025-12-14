/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = var_14;
                var_20 = (((((var_5 ? var_4 : 4150887737))) ? var_18 : (var_8 <= var_0)));
            }
        }
    }
    var_21 = 7045350774298615776;
    var_22 = ((-33 ? ((var_8 / (14149970432499054001 / 2750424173973877127))) : (var_11 * var_5)));
    var_23 = (max((((14149970432499054001 >> 11) ? var_6 : var_3)), ((var_10 ? 3720864485 : 13))));
    #pragma endscop
}
