/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_12 = (min((((30 ? 225 : 30))), (min((arr_1 [i_0]), var_6))));
        var_13 += (arr_0 [i_0]);
        var_14 = (((arr_0 [i_0 - 4]) ? (!11) : ((-(arr_0 [i_0 + 4])))));
        var_15 = (((8671 == 10) ? var_10 : (((arr_0 [i_0]) ? ((var_8 ? (arr_0 [i_0]) : 27892)) : (arr_1 [i_0 + 2])))));
    }
    var_16 = (max(var_10, var_1));
    var_17 = ((~(((11 >= (33806 >> 0))))));
    var_18 = var_6;
    #pragma endscop
}
