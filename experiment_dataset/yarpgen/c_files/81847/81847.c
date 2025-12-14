/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_4 < ((((min(268435455, 13623104764266413092))) ? var_7 : (var_8 && var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 4823639309443138525;
        var_15 = 6074469322965881447;
        var_16 = (var_11 || 4823639309443138511);

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_17 = 4823639309443138523;
            var_18 = ((!((min(var_8, var_6)))));
            var_19 = ((~(((4823639309443138523 >= (arr_6 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((-13623104764266413127 ? (((arr_3 [i_0] [i_2]) ? -32762 : (arr_3 [i_0] [i_2]))) : ((((arr_0 [i_0] [i_0]) < 13623104764266413104)))));
            arr_10 [i_0] [i_2] = (min(((~((var_8 << (13623104764266413092 - 13623104764266413055))))), ((((arr_6 [i_0] [i_2]) ? (arr_6 [i_0] [i_2]) : (arr_7 [i_0]))))));
            var_20 = (arr_7 [i_0]);
            arr_11 [i_0] [i_0] = ((arr_4 [i_2]) * (((((max(4823639309443138523, var_6))) ? ((max(var_6, -29899))) : var_10))));
        }
    }
    var_21 = 4823639309443138493;
    var_22 = var_9;
    #pragma endscop
}
