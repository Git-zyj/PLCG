/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [2] [i_0] |= (min((((749412740137345147 | 2461517107686314960) | var_8)), (arr_0 [i_0])));
        var_14 = (max(var_14, ((((arr_2 [i_0]) ? ((253 * ((0 ? (arr_2 [i_0]) : (arr_2 [i_0]))))) : (arr_1 [i_0]))))));
        arr_4 [i_0] |= ((var_4 ? (max(-24649, (min(var_3, 16296507612146045437)))) : (((-(var_4 + 2008385470))))));
    }
    var_15 = var_10;
    var_16 = 749412740137345147;
    #pragma endscop
}
