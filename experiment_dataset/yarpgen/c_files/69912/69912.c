/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 -= 45;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 |= -27;
                    var_22 -= var_4;
                    var_23 = (min(var_23, ((((8129697752545448991 / 61) >= var_14)))));
                    var_24 = (min(var_24, 2075385373905606504));
                }
            }
        }
        var_25 = -45;
        var_26 = var_10;
    }
    #pragma endscop
}
