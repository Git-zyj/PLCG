/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_16 = (3590757312 % 1118051655);
        arr_2 [i_0 - 1] = (((var_14 + 10216061293223241891) | (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = ((((max((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2])))) ? (max((arr_1 [i_1 - 2]), (arr_1 [i_1 - 2]))) : (arr_1 [i_1 - 2])));
        var_18 = ((~(((arr_4 [i_1 + 3]) >> (-var_11 + 159)))));
    }
    var_19 = var_1;
    #pragma endscop
}
