/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((((min(var_10, var_7))) | -1141946842197116047)))));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 -= (((arr_0 [i_0]) > (!var_7)));
        arr_3 [i_0] [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = (min((min(var_11, -var_1)), ((((arr_5 [i_1] [i_1]) == var_2)))));
        arr_6 [13] = ((((!(((arr_4 [i_1]) || (arr_5 [i_1] [i_1]))))) || (~var_4)));
        var_16 = ((min(var_1, (arr_5 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_17 += (arr_5 [i_2] [i_2]);
        arr_9 [i_2] [i_2] |= (-var_6 % var_6);
    }
    var_18 = (min(var_1, (!1)));
    var_19 |= var_2;
    #pragma endscop
}
