/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= max((((!(var_9 << var_1)))), var_9);
    var_11 = -1;
    var_12 = ((((((max(var_5, var_2))) ? var_1 : (!var_3))) - (-var_0 != var_2)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!6380);
        var_13 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 |= (~-4);
        var_15 = 255;
        arr_7 [8] = (((((0 ? ((var_3 ? (arr_4 [i_1]) : -81)) : ((((arr_0 [i_1]) && (arr_0 [i_1]))))))) ? (max(((~(arr_0 [i_1]))), (arr_5 [i_1] [i_1]))) : (arr_5 [i_1] [i_1])));
        var_16 = (((arr_0 [i_1]) ? ((((arr_0 [i_1]) || (((-19 + (arr_6 [i_1]))))))) : (arr_0 [7])));
    }
    #pragma endscop
}
