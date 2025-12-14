/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 - 1] [6] = 234;
        var_14 = (arr_2 [i_0 - 1]);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_15 = (min(var_15, (max((arr_6 [12] [12]), (((!(!var_13))))))));
        arr_7 [i_1] = ((((!(var_12 - var_7))) ? (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : ((0 ? var_8 : (arr_5 [3] [i_1 - 3]))))) : ((((arr_6 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_12 [i_2] |= var_6;
        arr_13 [i_2] [i_2] = (1804299248 == 1804299248);
    }
    var_16 &= (!var_3);
    var_17 -= ((var_5 * ((((!(var_9 ^ 1804299248)))))));
    #pragma endscop
}
