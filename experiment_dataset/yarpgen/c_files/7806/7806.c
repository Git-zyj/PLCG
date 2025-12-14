/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = (var_10 % -2097152);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 = 6237727797454894674;
                var_23 = (max((max((arr_4 [i_0 - 2] [i_0 - 1]), (arr_2 [i_0 + 1] [i_0]))), (((~((min(95, var_0))))))));
            }
        }
    }
    var_24 = ((5234 ? var_13 : ((min((min(5234, var_2)), 123)))));
    var_25 = (min(var_25, (((((177 ? 7929984275570315981 : 58862))) ? var_15 : var_4))));
    #pragma endscop
}
