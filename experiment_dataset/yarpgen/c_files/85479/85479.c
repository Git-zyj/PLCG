/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_9;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [7] = (-2147483647 - 1);
        arr_3 [i_0 - 3] [5] = arr_0 [i_0 + 1];
        var_14 = (((max(-2909581864910306586, (((arr_1 [i_0] [i_0]) ? var_11 : 3616284925605856571)))) + 7864));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1 - 1] = (arr_0 [i_1 - 2]);
        var_15 += ((-2021806291 ? var_10 : (arr_0 [13])));
    }
    for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_16 ^= ((((((((88 ? 45123300 : 7876))) ? ((49433 ? (arr_8 [i_2]) : -5063)) : 255))) ? (max((arr_9 [i_2 - 2] [i_2]), (arr_9 [i_2 - 2] [i_2 - 2]))) : (((((var_8 ? -4484169541563924604 : 196))) ? (arr_5 [i_2 - 4] [i_2]) : (arr_9 [i_2] [i_2])))));
        arr_10 [i_2] [i_2] = ((((max((arr_1 [i_2 - 4] [i_2 + 1]), (arr_1 [i_2 - 1] [i_2 - 2])))) ? ((-4484169541563924604 ? (arr_1 [i_2 + 1] [i_2 + 2]) : 979074187)) : (((arr_1 [i_2 - 1] [i_2 - 2]) ? 1992971018 : (arr_1 [i_2 - 1] [i_2 - 4])))));
        arr_11 [i_2] [11] = (!196);
        arr_12 [i_2] = -495103909783538141;
    }
    #pragma endscop
}
