/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_0 * var_6)));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_11 = ((-(((1952222104 <= (((!(arr_0 [i_0])))))))));
        arr_4 [i_0] = (max(((((!(arr_3 [i_0]))))), (((arr_1 [i_0 - 1]) ? 7119035376239506444 : var_2))));
        arr_5 [i_0] [i_0] = min(((((((arr_2 [i_0]) ? (arr_1 [i_0]) : 10591))) ? (~var_5) : (((arr_3 [i_0]) & var_1)))), (arr_3 [i_0]));
    }
    #pragma endscop
}
