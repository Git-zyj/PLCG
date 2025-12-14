/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(28457, var_2));
    var_12 = (min(var_12, 37079));
    var_13 = (((2147483647 || (((0 ? var_10 : 7))))));
    var_14 = var_10;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] = -7901;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_15 &= (((((-3855557243070715322 ? (arr_6 [i_1 + 3]) : 7))) ? (((2147483647 << (7901 - 7901)))) : (((arr_4 [i_1 + 3]) * 0))));
        arr_7 [i_1 + 2] = ((4294963200 % (((29992 ? (arr_1 [1]) : (arr_6 [14]))))));
    }
    #pragma endscop
}
