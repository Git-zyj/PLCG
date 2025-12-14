/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 = (min(var_15, ((max(255, 2147483647)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((max(((((arr_1 [i_0]) == 1248524298))), (arr_0 [i_0])))) ? (var_11 || 12) : (max((arr_1 [i_0 - 1]), ((var_6 ? (arr_1 [i_0]) : var_12))))));
        var_17 = (max(var_17, (((255 >= (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_18 = (((arr_3 [i_1] [i_1 + 2]) % var_4));
        var_19 = (arr_2 [19] [i_1 + 2]);
        var_20 = 1;
        var_21 = (arr_4 [i_1 + 1] [1]);
        var_22 = (arr_4 [i_1] [i_1 + 2]);
    }
    #pragma endscop
}
