/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 ^= ((((((((44720 ? 2633866117848515137 : 15812877955861036479))) ? ((var_4 ? var_2 : -2147483634)) : (!2633866117848515150)))) ? var_4 : (min(((-2075718809 ? var_8 : var_5)), (var_10 && var_7)))));
                arr_5 [i_1] [i_0] |= var_3;
            }
        }
    }
    var_13 = ((((min(var_5, (-8576786318143715655 + var_0)))) ? ((((min(-8622752295682798320, var_1))) ? ((15812877955861036468 ? 3554501702364027522 : (-9223372036854775807 - 1))) : (var_8 + var_7))) : var_9));
    var_14 = (((((max(var_1, var_6)) * 65532)) <= (!var_11)));
    var_15 = min(((min(((max(var_10, var_3))), var_9))), ((var_0 ? 15812877955861036489 : 2297875633735975536)));
    #pragma endscop
}
