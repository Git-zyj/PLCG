/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = ((var_7 ? ((((max(var_3, 2147483647))) ? (((arr_0 [i_0]) - (arr_1 [i_0]))) : 21)) : (arr_0 [2])));
        var_17 = (min(var_17, (max((arr_0 [i_0]), ((~(((arr_0 [i_0]) * var_12))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((!((max((max((arr_3 [i_1]), 247)), (arr_3 [i_1]))))));
        arr_5 [i_1] = (max((min(((max(768055887, var_0))), 15845203216683454785)), var_2));
        var_18 = max((min((arr_2 [i_1]), (((29 ? 0 : var_3))))), var_7);
    }
    var_19 = (max(var_12, var_15));
    var_20 = var_10;
    var_21 = (!var_9);
    #pragma endscop
}
