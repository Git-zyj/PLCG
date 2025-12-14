/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((-2147483647 - 1), 0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((((max(17585, (arr_1 [i_0])))) ? (((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (arr_1 [i_0]) : ((-(arr_1 [i_0])))))) : (min((((1 ? (arr_1 [i_0]) : (arr_1 [i_0])))), (arr_0 [i_0])))));
        var_14 = ((~(max(2590418875, (arr_1 [i_0])))));
        arr_2 [i_0] = ((((((min((arr_1 [i_0]), (arr_1 [17])))))) > 400710913179628306));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
