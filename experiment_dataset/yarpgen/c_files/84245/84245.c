/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, (((((max((arr_0 [i_0]), 44067))) ? (((arr_2 [i_0]) ? 4052556348 : (arr_0 [i_0]))) : (((min((arr_2 [i_0]), (((!(-32767 - 1)))))))))))));
        var_19 = (((~16383) ? (min((!2030), -16391)) : ((min(((max(30825, -30825))), (max(63506, (arr_2 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_20 -= (((!16390) ? ((20356 ? ((min(63522, -1))) : (arr_3 [i_1 - 1] [i_1]))) : ((((max((arr_4 [5]), 16395))) ? ((min(-1, 8191))) : (arr_5 [0])))));
        var_21 = (((max(-18, (arr_4 [i_1])))) ? 53 : (arr_5 [i_1]));
        var_22 ^= (max(3736590677527050145, ((max((arr_5 [10]), 30825)))));
        var_23 &= (arr_4 [i_1]);
        var_24 = (min(((((((arr_3 [1] [i_1]) | 1840))) ? ((-30823 ? -16378 : 65535)) : (arr_4 [i_1 + 1]))), (arr_4 [i_1])));
    }
    var_25 = (max((((((var_5 ? var_2 : var_2))) ? ((max(-30823, var_8))) : (max(var_1, 14710153396182501471)))), ((max(7137, -21982)))));
    #pragma endscop
}
