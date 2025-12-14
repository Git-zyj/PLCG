/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min(-4965, ((max(var_11, var_3))))));
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 &= -253952;
                    var_16 = (max(var_12, ((var_10 ? (min(-117, (arr_5 [i_0] [i_0]))) : 54693))));
                }
            }
        }
    }
    #pragma endscop
}
