/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_9, (-2147483647 - 1)))) ? (51133 > 14398) : (max(3, 1047552)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 = var_0;
        arr_2 [i_0] [i_0 + 3] = 1;
        arr_3 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = ((max(((14407 ? (arr_0 [10]) : 12)), ((var_14 ? (arr_1 [i_1]) : (arr_0 [22]))))));
        arr_6 [i_1] [i_1] = ((var_19 | (-7172016803711521360 % 1)));
        var_23 = ((((max((((arr_4 [i_1]) | 1)), (arr_0 [14])))) ? (((107 ? 25256 : 4294967295))) : (arr_4 [6])));
    }
    var_24 = ((!((((62880 + 28954) ? (var_4 >= -1200997569) : (!var_2))))));
    #pragma endscop
}
