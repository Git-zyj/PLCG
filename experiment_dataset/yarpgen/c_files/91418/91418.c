/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (8 % var_4);

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, (9569292767312747182 >= var_3)));
        arr_3 [i_0] [i_0] = ((~((((arr_0 [i_0 - 2]) < var_11)))));
        var_19 ^= ((((min(var_10, (((~(arr_1 [i_0 - 4]))))))) ? (min(var_11, ((var_3 ^ (arr_0 [9]))))) : (max((!var_7), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    #pragma endscop
}
