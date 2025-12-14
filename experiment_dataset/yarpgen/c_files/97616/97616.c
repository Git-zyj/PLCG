/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_6 ? ((((var_18 < var_3) - (var_5 < var_10)))) : -13845021665379256891));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        arr_3 [10] |= ((((4290919344 - (arr_2 [14]))) - 1));
        arr_4 [i_0 + 2] [i_0] = var_4;
        arr_5 [i_0] = 115;
    }
    #pragma endscop
}
