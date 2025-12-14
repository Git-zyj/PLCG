/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_16 < (~var_10))))) * (min(((var_3 ? var_17 : var_13)), var_11))));
    var_21 = (((((((min(var_4, var_2))) % 117))) ? var_19 : (max(((34 ? (-32767 - 1) : 413186250)), var_17))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_22 = var_5;
        arr_3 [i_0] = ((2 ? 2147483647 : 413186253));
        arr_4 [i_0] = (arr_0 [i_0]);
        var_23 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_24 = (max(var_24, var_11));
        arr_7 [i_1] = (((arr_6 [i_1]) != (((arr_6 [i_1 - 1]) ? (arr_6 [i_1 - 1]) : (arr_5 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_25 = (((((((((arr_8 [i_2]) | (arr_10 [i_2] [8])))) ? ((((var_12 == (arr_8 [i_2 + 1]))))) : (min((arr_8 [i_2 - 2]), (arr_5 [i_2])))))) && (((((-(arr_10 [i_2] [4]))) + (arr_10 [i_2] [i_2]))))));
        var_26 = (((min(34, -1438199224966790753))) ? (min(9385798663514540988, 1)) : (((((((arr_5 [i_2 + 2]) ? (arr_6 [i_2]) : var_3))) ? (arr_6 [i_2 - 2]) : (arr_5 [i_2])))));
    }
    var_27 = (var_4 ? (((min(65515, 41)))) : var_12);
    #pragma endscop
}
