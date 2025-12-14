/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((var_6 >> (var_2 - 205)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = var_6;
        arr_2 [i_0] = ((((((158827960136483006 ? var_3 : (arr_1 [i_0]))) / ((904941354 * (arr_1 [i_0])))))));
        arr_3 [i_0] = ((((min(var_8, 0))) ? ((min((arr_1 [i_0]), 0))) : (((arr_1 [i_0]) ? 14198 : (arr_1 [i_0])))));
        arr_4 [i_0] |= (((max((min(var_1, 5530890094359363084)), ((min(var_7, var_8))))) | (((var_0 ? 14198 : (arr_0 [i_0]))))));
    }
    var_16 ^= 1;
    #pragma endscop
}
