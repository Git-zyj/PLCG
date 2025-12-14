/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -var_3;
        arr_4 [i_0] [i_0] = ((((var_10 ? var_6 : -6261809607069230512))) ? (arr_1 [i_0] [i_0 + 2]) : (!-64));
        var_17 = var_9;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 2] = ((((var_4 - ((min(1, var_7)))))) ? (arr_5 [i_1 - 2]) : 6261809607069230511);
        var_18 = (min(var_18, (arr_0 [16])));
        var_19 *= ((!((!(arr_6 [i_1] [i_1])))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((var_15 ? (((!var_4) >> (((min(var_7, var_1)) - 30292)))) : ((((arr_6 [i_2] [i_2 + 1]) < 110))))))));
        var_21 = (((var_1 >= var_8) >= ((((min(88, -52))) - (arr_8 [i_2])))));
        var_22 ^= (!var_11);
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (arr_0 [i_3]);
        arr_13 [i_3] = -2046;
    }
    var_23 ^= ((-((var_1 ? var_13 : var_7))));
    var_24 = 32;
    var_25 = (-99 & 264241152);
    var_26 = ((((var_1 < (((min(2038, 1)))))) ? ((((-6261809607069230480 + 1672283798) || ((min(var_16, 64)))))) : var_13));
    #pragma endscop
}
