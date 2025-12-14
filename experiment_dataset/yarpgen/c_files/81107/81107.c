/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -2564873128004160515;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_2 [i_0]) ? var_3 : (arr_2 [i_0]))), ((((arr_2 [i_0]) | 9223372036854775807)))));
        arr_4 [i_0] = (((+(((-9223372036854775807 - 1) ? var_5 : -15337)))));
        arr_5 [15] = min(((min(15311, 61987))), (45814656 ^ 10));
        arr_6 [i_0] = (((arr_2 [i_0]) ? (((((-9223372036854775807 - 1) != (max(var_0, 17053297439724466793)))))) : ((18446744073709551615 ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : ((max((arr_1 [15] [15]), -28093)))))));
        var_20 = ((var_1 ? (arr_1 [i_0] [i_0]) : (min((arr_2 [i_0]), (18446744073709551615 & 1)))));
    }
    #pragma endscop
}
