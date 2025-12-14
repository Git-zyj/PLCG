/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((12201671817965519514 & var_3) == (2068067925 & 15414)))) & ((((max(12201671817965519514, var_9))) ? var_6 : var_7)));
    var_14 = ((((var_0 ? (!18446744073709551603) : 28374))) ? ((var_0 | ((var_8 ? var_5 : var_12)))) : ((min(var_2, var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [0] = ((28 == (arr_0 [i_0] [i_0])));
                arr_6 [i_0] = (arr_0 [i_1] [i_0]);
                var_15 = arr_4 [i_0] [i_0];
            }
        }
    }
    var_16 *= var_3;
    var_17 *= ((((max((1 && var_11), 0))) && var_1));
    #pragma endscop
}
