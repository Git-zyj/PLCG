/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_4 <= var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!var_2);
                arr_7 [i_0 + 2] [10] = (min(((min((max(var_0, var_7)), ((var_9 ? var_5 : var_7))))), (min(((min(var_2, var_8))), (min(var_6, var_3))))));
            }
        }
    }
    #pragma endscop
}
