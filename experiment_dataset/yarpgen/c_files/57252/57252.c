/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_10 - 0) + (((((128 ? 2825381515 : var_17))) ? 7 : var_12))));
    var_19 = -23266;
    var_20 = ((var_12 ? ((30 ? var_16 : 1)) : (var_16 >= 22079)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_21 = (max((((arr_2 [i_0]) ? 1 : (arr_2 [i_0]))), var_3));
        arr_3 [i_0] = ((max(0, ((max(var_13, var_8))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (arr_4 [i_1]);
        var_22 = (~1);
        arr_9 [i_1] |= (max((min(var_15, (arr_5 [i_1]))), ((min((min(89, (arr_1 [i_1] [i_1]))), ((min((arr_0 [i_1]), 1))))))));
    }
    #pragma endscop
}
