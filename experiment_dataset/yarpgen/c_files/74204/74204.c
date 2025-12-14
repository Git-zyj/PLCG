/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -328194670));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 ^= (((arr_0 [i_0]) ? (((((328194656 / var_6) && (((var_8 | (arr_0 [i_0])))))))) : ((-328194667 ? 13882400825793418913 : (arr_1 [i_0])))));
        var_13 = (min(var_13, -9223372036854775794));
        var_14 = ((var_4 ? (var_8 * -10485) : (((var_2 / var_6) >> ((((328194638 ? var_8 : -25)) - 1067769254812235056))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = var_5;
        arr_5 [i_1] = (-(((2526035959866474211 == (arr_1 [i_1])))));
    }
    var_15 = (((((var_5 ? (((36 >> (8109172155332277598 - 8109172155332277588)))) : (min(7168972668824568473, var_8))))) ? (((((4564343247916132704 ? var_4 : var_10)) + var_3))) : var_0));
    var_16 -= ((-(min(328194646, ((max(328194655, var_6)))))));
    #pragma endscop
}
