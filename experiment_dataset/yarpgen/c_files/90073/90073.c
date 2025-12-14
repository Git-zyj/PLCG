/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 30617;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (min((arr_1 [i_0 + 1]), (((arr_1 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : 10856895151709649437))));
        arr_2 [i_0] = -9044;
        arr_3 [15] &= ((((((((117 ? 7589848921999902178 : 515687190639591641))) ? (((~(arr_1 [i_0])))) : -8654635469447751511))) ? (((arr_1 [i_0 - 1]) + var_7)) : ((var_6 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (max(var_14, ((min(0, 16967581034409936637)))));
        var_15 &= (min((min(10856895151709649441, (arr_5 [i_1]))), ((min((arr_7 [i_1]), -4294967295)))));
    }
    #pragma endscop
}
