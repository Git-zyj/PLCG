/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 != ((var_0 >> (((var_8 + var_11) - 63878))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 - 2] [i_0 + 1] = (var_9 == var_0);
        arr_5 [20] [4] = ((-(((arr_3 [i_0 + 1]) ? 65535 : ((-88 ? -127 : (arr_0 [i_0] [i_0])))))));
        arr_6 [i_0] = (max(((var_4 | (arr_0 [i_0 + 1] [i_0 + 1]))), ((((arr_0 [i_0 + 2] [i_0 + 2]) >= var_2)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_11 [3] = (arr_7 [i_1] [i_1]);
        var_18 = ((((var_6 ? (arr_0 [i_1] [0]) : (arr_0 [i_1] [i_1]))) % ((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
        arr_12 [i_1] = (max(((((((arr_1 [i_1] [7]) >> (var_13 - 17852418061845546048)))) ? (max(var_9, (arr_1 [i_1] [i_1]))) : (((arr_9 [i_1]) ? (arr_7 [10] [i_1]) : var_0)))), var_8));
    }
    var_19 -= ((var_2 ? ((var_5 ? ((16404 ? var_13 : var_15)) : (((min(var_4, 87)))))) : (((((var_15 ^ var_10) && var_6))))));
    #pragma endscop
}
