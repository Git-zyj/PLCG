/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, ((max(((-2182260516671327160 ? var_1 : (arr_0 [i_0]))), (arr_1 [i_0] [i_0]))))));
        var_17 = (min(var_17, ((min(((((max((-2147483647 - 1), var_10))) | (arr_2 [i_0] [1]))), -24577)))));
        arr_3 [i_0] = ((((-(50062 - 31744)))) ? var_4 : 15501);
        var_18 = var_14;
        var_19 = (min(var_19, (((~(arr_0 [i_0]))))));
    }
    var_20 = ((max(var_12, var_10)));
    var_21 = (min(var_21, ((max((max(var_9, (50048 * var_9))), (-1 % 15473))))));
    var_22 = -2182260516671327181;
    #pragma endscop
}
