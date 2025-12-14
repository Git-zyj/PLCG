/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_0 % (((-9 ? var_3 : 116)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 *= -126;
        var_12 = ((73 / (-108 % -72)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_13 = ((((max(((~(arr_0 [i_1] [i_1 + 2]))), ((-126 ? (arr_0 [16] [i_1 + 3]) : (arr_0 [i_1 + 2] [i_1])))))) ? ((min((arr_3 [i_1 + 3]), (arr_3 [i_1 + 3])))) : (((arr_1 [i_1]) ? (arr_3 [i_1 - 2]) : -12))));
        arr_4 [i_1] [i_1] = 116;
    }
    #pragma endscop
}
