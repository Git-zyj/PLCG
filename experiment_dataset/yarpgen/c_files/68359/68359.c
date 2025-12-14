/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_3 [i_0]) ? (arr_3 [i_0 - 2]) : var_8))) ? ((-((var_11 ? (arr_1 [i_0]) : 11913772232673059888)))) : (((max((((var_3 > (arr_1 [9])))), var_5))))));
        var_13 = (max(var_13, (((((-13925 != (arr_0 [i_0 + 1] [i_0 + 1]))) ? ((min(0, (arr_0 [i_0 - 2] [i_0 - 2])))) : (((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_0 [i_0 - 2] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 - 1]))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] |= (((((1 ? 1960696868 : (arr_6 [i_1] [i_1])))) ^ (!var_6)));
        var_14 |= ((((max(((max((arr_5 [i_1]), (arr_5 [i_1])))), ((var_12 ? var_11 : 0))))) || 230));
    }
    var_15 = var_6;
    var_16 = ((-(min((var_0 ^ var_2), (min(var_4, var_5))))));
    #pragma endscop
}
