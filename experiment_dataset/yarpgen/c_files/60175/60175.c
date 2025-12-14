/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = var_8;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_21 = ((~((~(min((arr_1 [i_0]), (arr_1 [i_0])))))));
        var_22 = 1;
        var_23 &= -var_3;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_6 [0] &= (min(var_17, 7));
        arr_7 [1] [i_1] = 24;
        var_24 = (min(var_14, (min(var_7, (!var_17)))));
        var_25 |= ((!(((-(arr_2 [i_1]))))));
        var_26 = (arr_2 [i_1]);
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = var_14;
        var_27 ^= ((~(arr_1 [i_2 + 2])));
    }
    #pragma endscop
}
