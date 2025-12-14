/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min((~24), var_13)), (max(((var_6 ? var_5 : var_14)), (var_6 < var_6)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_0 [i_0]) ? 65535 : ((-(max((arr_0 [i_0]), 9007199254740991)))));
        arr_4 [i_0] [i_0] = ((29773 ? 35762 : 35763));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] = (min((((-9044340484516758259 + 9223372036854775807) >> (var_6 <= 20590))), (((9044340484516758248 ? 35762 : 29773)))));
        var_21 += (min((max((min((arr_7 [i_1]), -1)), (arr_7 [i_1 - 1]))), (((arr_5 [i_1]) ? 48 : var_7))));
        arr_9 [i_1] = (min(((((min(9044340484516758259, -653))) - (arr_5 [i_1 + 1]))), (((var_1 & 18446744073709551615) ? (arr_1 [i_1 - 1]) : 18446744073709551615))));
    }
    var_22 = var_13;
    var_23 = ((35762 ? 18437736874454810643 : 2623877160866811425));
    #pragma endscop
}
