/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 -= (((((~(arr_1 [i_0 - 1])))) ? (min(var_11, 140)) : (65531 && 65527)));
        arr_2 [i_0] [i_0] = (((min((arr_0 [i_0] [i_0 - 1]), 65527))) ? (var_4 * var_7) : (min(var_8, 288230376151711488)));
        arr_3 [i_0 + 2] = ((((!(arr_1 [i_0 + 2]))) && var_9));
        arr_4 [i_0] = (!-var_2);
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 - 2] = var_2;
        arr_10 [1] = min(4123307407375324465, 255);
        arr_11 [i_1] = ((min((arr_0 [1] [i_1 - 1]), (min(var_7, var_4)))));
        var_16 *= (((!((!(arr_6 [9] [i_1]))))));
    }
    var_17 = ((((((!12) ? var_1 : (var_0 == var_7)))) != (max(var_7, (!-2454483385532447804)))));
    var_18 = (min((((12 ? -89 : 65523))), 838392691));
    #pragma endscop
}
