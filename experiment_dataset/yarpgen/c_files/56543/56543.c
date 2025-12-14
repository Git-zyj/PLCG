/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56543
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
                arr_6 [i_0] [i_0] = ((min((arr_5 [i_1] [i_1] [i_0]), (arr_2 [i_0] [i_0] [i_0]))));
                var_18 = (min((min((max(var_5, var_9)), (var_4 - var_13))), (arr_1 [21])));
                var_19 &= (var_2 ^ var_16);
            }
        }
    }
    var_20 = ((((((!1) ? ((max(-59, var_15))) : (!var_2)))) ? var_16 : var_9));
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
