/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (((((min((arr_0 [i_0]), 482853019))) || ((var_12 != (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((((((((-9223372036854775807 - 1) ^ var_14))) ? (max(482853019, (arr_1 [i_0] [i_0]))) : ((((!(arr_0 [i_0]))))))) ^ ((((~(arr_1 [i_0] [4]))) * (((((arr_1 [i_0] [i_0]) <= 3812114270))))))));
        var_20 = (max(((min(var_8, ((min(var_6, (arr_0 [i_0]))))))), (max((arr_0 [i_0]), var_16))));
    }
    var_21 &= var_12;
    var_22 ^= 54325;
    #pragma endscop
}
