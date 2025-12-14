/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((18900 ? 2668399165 : 2668399148));
        var_17 = (max(var_17, var_6));
        var_18 = (min(var_18, (((((((!(arr_0 [i_0]))) || (arr_2 [i_0]))) ? ((((5148043235707491505 >= var_13) < (((arr_1 [i_0] [i_0]) << (var_15 - 18390318039532693852)))))) : (((!((min((arr_2 [i_0]), 127)))))))))));
    }
    var_19 = (max(var_19, ((max(1786382623, var_14)))));
    var_20 |= ((~(var_4 / -var_13)));
    var_21 = 1481785498453933137;
    var_22 = ((-(30660 - -1442287340286194172)));
    #pragma endscop
}
