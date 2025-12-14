/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = ((((max(var_10, 1128178960))) ? var_9 : -var_10));
    var_13 = (min(var_13, ((min((min(1128178960, (max(74, -1128178961)))), var_10)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 ^= ((251 / ((229 ? (max(42721291, 255)) : -1128178973))));
        arr_3 [8] &= (arr_0 [i_0]);
        var_15 = (max(var_15, 1064352647));
        arr_4 [i_0] = (~1128178960);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 = ((-((0 ? -42 : 3))));
        var_17 = ((113 ? (arr_1 [i_1]) : (var_6 & var_3)));
    }
    #pragma endscop
}
