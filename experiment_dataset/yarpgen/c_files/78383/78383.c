/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_11 = (max(var_11, (((var_3 < (((!var_4) ? ((-109 ? 6487773772678729733 : 23)) : 26698)))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0 - 2] [i_0] [i_0] = ((var_8 ? var_10 : -26698));
            var_12 = (min(var_12, ((((530251129100319053 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 2])))))));
            var_13 = (arr_3 [i_0]);
            var_14 = (var_0 ? -29 : (min(var_1, (arr_0 [i_0] [i_0 + 3]))));
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_15 = (max(var_15, ((min(-25498, (max((arr_6 [i_2] [i_2]), 26698)))))));
            arr_9 [i_0] [i_0] [i_0] = ((min(897839556, (min(var_8, 32640)))));
        }
        var_16 *= (((min((!26695), (26718 >= 2097148))) ? (~31) : 38));
        var_17 = ((max((arr_4 [i_0] [i_0 + 4] [i_0]), (arr_0 [i_0 + 3] [i_0]))));
        var_18 = (arr_6 [i_0 + 3] [i_0 + 1]);
    }
    var_19 = (((min(var_4, 8510546869861635595)) % 1));
    var_20 = (min(var_1, ((4349 << (var_10 + 350335613)))));
    var_21 ^= ((((((-26682 ? var_7 : var_1)) ? (12958273375623983714 / 25) : var_2))));
    var_22 = (max(var_22, (((((61187 ? 1 : 61197)))))));
    #pragma endscop
}
