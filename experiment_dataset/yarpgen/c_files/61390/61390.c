/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = -3616451376535189038;
        var_11 |= (max(((-(arr_0 [i_0 + 2]))), ((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (max(var_12, ((((((((0 ? var_6 : (arr_0 [i_0]))) ^ ((max((arr_5 [i_0] [4] [4]), var_7)))))) ? ((((max(1, (arr_3 [i_0 - 1] [i_1] [i_1])))) ? (((arr_3 [i_0] [1] [i_0]) / (arr_1 [i_0]))) : (arr_1 [i_0 - 2]))) : (((max((arr_4 [i_1]), (max(244, 43937)))))))))));
            var_13 ^= (((arr_5 [i_1] [i_1] [i_0 - 1]) / (-2147483647 - 1)));
        }
        var_14 = (1 + 0);
    }
    var_15 = (max(var_15, (((var_6 || ((!((max(var_8, var_7))))))))));
    var_16 = (max((((max(var_0, 10865585472810434644)))), ((var_5 ? (6330 == 1) : (var_8 * 18446744073709551601)))));
    var_17 *= (-127 - 1);
    #pragma endscop
}
