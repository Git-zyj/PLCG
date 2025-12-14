/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 = (((arr_0 [i_0] [i_0]) / (((var_0 < (arr_1 [i_0] [i_0]))))));
        var_21 |= ((~(~var_11)));
        var_22 = (((arr_0 [i_0] [i_0]) <= 57346));
        arr_2 [i_0] [i_0] = (arr_1 [17] [4]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_23 = (min(var_15, (((!(arr_4 [i_1]))))));
        arr_5 [i_1] = (((((~((-(arr_1 [i_1] [i_1])))))) ? (var_12 != var_7) : ((min(var_5, (!var_1))))));
        arr_6 [4] = var_13;
        var_24 = (max((max((arr_4 [i_1]), var_16)), var_9));
    }
    var_25 = var_14;
    var_26 = (max(var_14, (~var_0)));
    #pragma endscop
}
