/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= (-99 % -1626460576);
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) >> (4034469566890749369 - 4034469566890749360)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (arr_6 [i_1]);
        arr_7 [i_1] [i_1] = ((((var_8 ? (arr_6 [i_1]) : (4034469566890749378 ^ 1))) >= (((((((arr_5 [5] [5]) && -5927584069656847099)) && (max((arr_6 [i_1]), (arr_6 [i_1])))))))));
    }
    #pragma endscop
}
