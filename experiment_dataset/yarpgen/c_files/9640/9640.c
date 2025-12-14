/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((min(var_11, var_14)) + 2147483647)) << (((((min(93, var_11)) + 2044168465)) - 15))))) ? (4095 << var_10) : ((var_6 ? (var_3 ^ var_13) : (max(3499840951, var_9))))));
    var_16 = ((((((((-1281121405049470237 ? -23080 : var_13)))) + 2147483647)) >> (((max(var_7, (max(17314049705022100734, var_9)))) - 17314049705022100715))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1] [i_0]);
        arr_4 [i_0] [2] = (((arr_2 [i_0] [i_0]) ? var_13 : (arr_2 [i_0 + 1] [i_0])));
        arr_5 [i_0] = (~var_2);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (i_1 % 2 == 0) ? ((var_0 << ((((var_3 ? (arr_0 [i_1] [i_1]) : 152)) - 15507)))) : ((var_0 << ((((((var_3 ? (arr_0 [i_1] [i_1]) : 152)) - 15507)) - 7673))));
        arr_9 [i_1] = 6765074153104220278;
    }
    #pragma endscop
}
