/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = ((((-123 / ((var_5 ? -1563106855 : (-32767 - 1))))) % ((((min(var_5, var_0))) ? var_8 : var_3))));
                    var_12 = (!var_4);
                }
            }
        }
    }
    var_13 = var_4;
    var_14 = ((min(6725, (min(1511301493, 6945018775324636624)))));
    var_15 = (min(((1 ? (max(var_8, 274877906943)) : -20)), ((((((var_4 ? var_4 : var_8))) > 18446743798831644672)))));
    #pragma endscop
}
