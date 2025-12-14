/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(var_2, (7798377909249687375 & var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 65532;
        var_18 = (max(var_18, (((((((arr_1 [i_0]) - (arr_0 [i_0])))) && var_1)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_19 = (arr_3 [i_1 - 1]);
        var_20 = var_14;
        var_21 = var_1;
        var_22 = (max(var_22, (1 && 309292524238526043)));
    }
    var_23 = 17367898058552765282;
    var_24 = (max(var_24, (var_14 && var_8)));
    #pragma endscop
}
