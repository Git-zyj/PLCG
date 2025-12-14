/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 2] = 240;
        arr_5 [i_0] = var_4;
        arr_6 [i_0] = (max((((arr_2 [i_0 + 3]) & (arr_2 [i_0 + 2]))), (((!(arr_2 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_10 [13] = (((((var_4 ? (arr_0 [i_1] [i_1]) : (arr_3 [i_1])))) ? ((-(var_8 == var_0))) : var_4));
        arr_11 [i_1] = (max(((-4706 ? 27 : 1222919193)), (min(4294967268, ((min(var_6, (arr_0 [i_1] [i_1]))))))));
        var_10 = var_7;
    }
    var_11 = (var_2 != var_6);
    var_12 = var_0;
    #pragma endscop
}
