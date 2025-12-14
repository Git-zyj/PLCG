/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((((var_11 ? 31536 : (arr_1 [i_0] [i_0])))) ? var_6 : (arr_1 [1] [i_0]))) < ((((((var_0 > (arr_2 [i_0])))) - (((arr_0 [i_0] [17]) ? 1 : var_14))))))))));
        arr_3 [i_0] = (((((((max((arr_0 [i_0] [1]), -3001870435069985265))) && (((-3001870435069985274 ^ (arr_0 [16] [i_0]))))))) + (arr_2 [i_0])));
        arr_4 [19] = ((~(arr_0 [i_0] [i_0])));
        arr_5 [i_0] = ((((7168 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))) * (((((var_6 && (arr_2 [i_0])))) / (2147467264 || 3001870435069985278)))));
    }
    var_17 = var_2;
    var_18 = (((min(var_7, (var_0 * var_10))) < 1));
    #pragma endscop
}
