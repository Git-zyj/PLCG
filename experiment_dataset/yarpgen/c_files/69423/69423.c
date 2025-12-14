/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~((((max(var_6, var_4))) - ((775573674 ? var_8 : var_18)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (0 - 130691396)));
                    var_22 ^= -2648450331042157198;
                }
            }
        }
    }
    var_23 = var_10;
    var_24 = ((var_19 ? (255 && 160) : ((var_13 ? -var_3 : -var_18))));
    #pragma endscop
}
