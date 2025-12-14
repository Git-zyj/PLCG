/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (max((min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 2]))), (((arr_1 [i_0 + 2]) ? ((18446744073709551615 ? (arr_1 [i_0]) : 307962985)) : (((min(var_16, (arr_0 [i_0])))))))));
        var_18 = (min(var_18, ((((min(var_7, (arr_0 [1])))) ? (((((1 ? (arr_0 [12]) : (arr_1 [i_0 + 1])))) ? var_2 : (arr_1 [i_0 - 2]))) : var_10))));
    }
    var_19 = ((19323 ? (3811725959 * var_14) : -4605978510207341406));
    var_20 = (max(255, (max((~-120), (~var_4)))));
    #pragma endscop
}
