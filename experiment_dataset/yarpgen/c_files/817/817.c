/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_19;
    var_21 -= var_9;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_22 ^= (max((((arr_0 [i_0 - 2]) <= ((max(var_6, (arr_1 [i_0] [i_0])))))), (((arr_1 [i_0] [i_0]) != ((~(arr_1 [i_0] [14])))))));
        var_23 = (min((max(2704022555, 64749)), 537271448));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = var_4;
        var_24 = ((((-28102 != ((1590944740 ? (arr_2 [i_1]) : var_11)))) ? (max((arr_0 [14]), var_6)) : ((((((min(380056145, (arr_2 [i_1])))) || ((max(2704022555, -32192)))))))));
        var_25 = (max(((((((arr_5 [i_1] [i_1]) ? var_12 : 8758242676636707134))) ? -var_15 : 0)), (arr_2 [i_1])));
    }
    var_26 = var_7;
    #pragma endscop
}
