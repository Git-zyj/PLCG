/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? var_8 : var_10));
    var_13 = ((var_3 ? var_3 : (((-127 - 1) ? var_2 : var_9))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_1 [i_0] [i_0]) ? 69 : ((min(var_2, var_11)))))) ? ((((-1132485121 + 2147483647) << (var_1 - 837359605)))) : (min((arr_3 [i_0]), var_1))));
        var_14 = (i_0 % 2 == 0) ? (((((((~var_0) >> (((arr_3 [i_0]) - 12879038020118733547))))) ? ((~(var_10 & var_10))) : (arr_2 [i_0])))) : (((((((~var_0) >> (((((arr_3 [i_0]) - 12879038020118733547)) - 6214083972166008420))))) ? ((~(var_10 & var_10))) : (arr_2 [i_0]))));
    }
    var_15 *= var_1;
    var_16 = ((((var_3 && (((var_7 ? var_11 : 4609434218613702656))))) ? (max(var_2, ((0 ? var_10 : var_8)))) : ((((((var_10 ? 18446744073709551615 : var_0)) < (!var_2)))))));
    #pragma endscop
}
