/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_7;
        var_16 += ((((((!-37) == (1034585995 % 11)))) << (((((((arr_2 [i_0]) && (arr_1 [i_0]))) ? ((~(arr_2 [i_0]))) : ((((-3007618667894536073 > (arr_0 [i_0]))))))) - 14286813114181717984))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 &= var_0;
        arr_8 [i_1] [i_1] = ((!-37) && (((((~(arr_5 [5]))) % (~14996)))));
        var_18 = (((arr_5 [i_1]) / ((-11415940354379589268 - (arr_4 [i_1] [i_1])))));
    }
    var_19 -= var_14;
    #pragma endscop
}
