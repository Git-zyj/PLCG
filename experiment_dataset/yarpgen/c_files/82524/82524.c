/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_0, (max(((var_3 ? var_2 : var_4)), ((max(var_3, var_3))))));
    var_12 = (min((!var_3), (max(var_3, ((min(var_9, var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((!((max(var_2, var_1)))));
                    var_14 &= (max((((!(var_0 ^ var_0)))), ((((min(var_1, var_7))) ? var_10 : ((max(var_6, var_2)))))));
                }
            }
        }
    }
    #pragma endscop
}
