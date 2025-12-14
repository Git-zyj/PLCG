/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((4165853349634266309 ? -4165853349634266305 : 50988))) ? var_0 : var_11))) <= (min((min(4165853349634266297, -4165853349634266276)), ((var_12 ? 4165853349634266304 : var_13))))));
    var_16 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(var_6, (-4165853349634266276 < var_11))))));
        var_18 = (~-4165853349634266309);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = ((((((arr_3 [i_1] [i_1]) ? (arr_5 [i_1]) : var_2))) ? ((max(-var_12, ((max(58313, -58)))))) : (max(var_7, (min(var_4, var_13))))));
        var_19 += (arr_6 [16] [16]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_11 [i_2] = 1580943807940067878;
        var_20 = (max(var_20, (((var_2 ? var_10 : ((var_11 ? -62 : -23578)))))));
        var_21 = (((var_5 ? 154 : 7174)));
        arr_12 [i_2] [i_2] = (arr_9 [i_2] [i_2]);
    }
    var_22 = var_13;
    #pragma endscop
}
