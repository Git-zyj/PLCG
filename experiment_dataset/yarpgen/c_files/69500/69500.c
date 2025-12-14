/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 *= var_9;
                var_15 = var_5;
                arr_5 [i_1] [3] [i_0] = (((min((!var_11), 21001)) == var_2));
            }
        }
    }
    var_16 = ((-((18 ? (((!(-32767 - 1)))) : var_2))));
    var_17 = (!var_4);
    var_18 |= var_13;
    var_19 = (max(var_19, (((-((var_10 ? -var_0 : -735382691)))))));
    #pragma endscop
}
