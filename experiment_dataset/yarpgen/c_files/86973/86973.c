/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_1 [i_0])));
        var_12 = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((var_8 ? (((arr_2 [i_0] [i_0]) * (arr_1 [i_0]))) : ((31 ? 65531 : (arr_2 [i_0] [i_0])))));
    }
    var_13 = ((((((84873189 > var_1) ? var_8 : (~0)))) ? var_6 : var_5));
    var_14 |= var_5;
    #pragma endscop
}
