/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((1 ? var_11 : ((((min(var_0, var_9))) ? ((var_3 ? 0 : var_0)) : var_0))));
    var_14 = 9223372036854775808;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min((((min(65532, (arr_0 [i_0]))) >> ((((~(arr_0 [i_0]))) - 4206600483652335063)))), ((~(min((arr_2 [i_0]), var_8))))));
                arr_6 [i_0] [i_0] = max(((min((arr_2 [i_1]), (min(44603, var_5))))), (max((min(14393177904484544814, -16447)), (((var_0 ? 16433 : var_1))))));
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
