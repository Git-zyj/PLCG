/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = ((var_10 ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : 9223372036854775794)) : var_3));
        var_17 = (~8316106359954689825);
    }
    var_18 = ((((!(((9223372036854775784 ? 3401722739 : 8886)))))) << (((min(((var_15 ? 9223372036854775794 : var_10)), ((max(var_2, 4294967282))))) - 4294967274)));
    var_19 = (((((((min(9223372036854775795, var_7))) ? ((var_1 ? var_4 : 8893)) : var_3))) ? 697378519620701734 : var_12));
    #pragma endscop
}
