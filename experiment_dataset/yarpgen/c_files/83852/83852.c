/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 += (((((((arr_2 [i_0]) ? (arr_0 [0]) : var_2)) + 9223372036854775807)) << ((((var_6 ? 1 : var_2)) - 1))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 = ((((arr_0 [i_0]) ^ var_9)));
            var_17 = (((!1) && (((var_13 ? var_14 : var_9)))));
            var_18 = (arr_6 [i_0] [i_0] [i_0]);
        }
        var_19 = (((arr_4 [i_0]) ? 1 : (arr_5 [i_0] [i_0])));
        var_20 = (max(var_20, (((((((arr_1 [16]) ? var_2 : var_5))) ? (arr_4 [i_0]) : 1)))));
    }
    var_21 = -26620;
    var_22 = 1;
    #pragma endscop
}
