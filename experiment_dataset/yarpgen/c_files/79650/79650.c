/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_5 ? -13731 : var_10))) ? (~-27413) : var_9))) % (min((var_5 / 115), ((min(-18488, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = var_9;
                    var_13 |= (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
