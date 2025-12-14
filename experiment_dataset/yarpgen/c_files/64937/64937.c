/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((~(((arr_2 [i_0 + 1]) ? 150 : 150)))))));
        var_18 = ((-((((arr_1 [i_0 + 1]) >= 1706646722)))));
        arr_4 [i_0] = (((((max(1636, 1422885398)) / 1))) && (((201326592 ? -1 : (arr_1 [i_0 + 1])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = (min((arr_6 [i_1]), 61087));
        var_20 = (min((min((arr_0 [i_1]), (arr_5 [i_1]))), ((-((max(var_16, (arr_2 [i_1]))))))));
    }
    var_21 = (((((((min(var_17, var_6))) & (var_9 <= 0)))) ? var_14 : (-20242 == var_1)));
    #pragma endscop
}
