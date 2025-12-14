/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = ((((((((var_5 ? (arr_0 [i_0 + 3] [i_0]) : var_5))) ? ((var_0 ? var_0 : var_2)) : (arr_0 [i_0 - 1] [i_0])))) - var_7));
        arr_4 [i_0] [i_0] = (((((((((arr_3 [i_0]) ? -4748347183870647043 : var_8))) ? var_6 : ((var_11 ? var_2 : 64297))))) ? ((((var_1 ? var_14 : var_13)))) : var_12));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 ^= var_12;
        arr_9 [i_1] = (arr_3 [i_1]);
    }
    var_17 = (min(var_17, var_6));
    var_18 = (~var_0);
    var_19 = ((((!(((var_8 ? var_10 : var_4)))))) - ((-var_12 ? (min(var_2, var_14)) : var_10)));
    var_20 = 1;
    #pragma endscop
}
