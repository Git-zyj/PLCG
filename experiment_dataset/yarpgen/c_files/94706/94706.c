/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((-26271 - var_5) > (var_3 / -374848531)))), var_1));
    var_12 = (!var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max((max((arr_0 [i_0] [i_0]), var_8)), ((((arr_1 [i_0]) == 195)))));
        arr_3 [i_0] [i_0] = ((-(!var_5)));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_13 -= arr_5 [i_1 - 1] [i_1 - 1];
        var_14 |= 61;
        arr_8 [i_1 - 1] = (min((max(((405943297497713929 ? var_9 : var_8)), (((-(arr_1 [i_1])))))), var_5));
        var_15 = (arr_0 [i_1 + 1] [i_1]);
    }
    var_16 = (max(var_16, var_2));
    #pragma endscop
}
