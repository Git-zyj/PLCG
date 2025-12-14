/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(!var_7)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (~(arr_2 [i_0]));
        var_14 ^= (62499 > 16923);
        var_15 = 48613;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = ((-(max(var_12, (((!(arr_0 [i_1] [i_1]))))))));
        arr_8 [2] [i_1] = ((min((arr_6 [i_1] [i_1]), (max(16922, 1)))));
        arr_9 [i_1] [i_1] = (((max((arr_6 [i_1] [i_1]), 1639181181)) / -948132255));
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        arr_14 [i_2] &= ((var_5 ? 3037 : ((-(arr_12 [i_2])))));
        var_16 = (arr_12 [i_2 - 1]);
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_17 [i_3] = ((((min(var_5, (!48619)))) ? (arr_16 [i_3 - 1]) : var_9));
        arr_18 [i_3] = var_6;
    }
    #pragma endscop
}
