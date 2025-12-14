/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (-49 <= var_1)));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [5] [2] = (max((min(-5347, (arr_2 [i_0]))), -47));
        arr_5 [i_0] = (((-5377 ? -509594783 : (~262143))));
        arr_6 [18] = (((arr_0 [i_0]) ? (((arr_2 [i_0]) & 5375)) : ((min((arr_3 [i_0]), 1901836461)))));
        arr_7 [i_0] = var_11;
        var_14 = (((((~(((-5377 + 2147483647) >> (-5371 + 5371)))))) ? (((((262143 ? 49164 : -36787512339166045))) ? (arr_0 [i_0]) : (min(var_9, var_6)))) : (arr_0 [18])));
    }
    var_15 = ((((max(((107 ? var_7 : 5319)), 122))) ? var_7 : (((((0 << (-26 + 47)))) ? var_9 : (~var_5)))));
    #pragma endscop
}
