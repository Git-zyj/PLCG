/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0])))) || ((!(arr_1 [i_0 - 1] [i_0 - 1])))));
        var_17 = (((arr_1 [i_0] [i_0]) ? (min(((12 ? 138 : 164)), (((!(arr_1 [i_0] [i_0])))))) : (((!((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 1]) : 18))))))));
    }
    var_18 = 0;
    var_19 = (min(var_19, var_0));
    var_20 = var_4;
    #pragma endscop
}
