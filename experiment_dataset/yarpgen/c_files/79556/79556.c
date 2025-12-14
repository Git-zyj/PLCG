/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((max(6, 5772280038858603582))) ? ((max(var_7, var_14))) : (max(var_0, var_9)))), (((((max(-36, var_13))) && var_18)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [0] = 1798212989;
        var_21 -= (((1498015874 & 16399233856247592321) >= ((((arr_0 [6] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 -= 1074452472;
        arr_6 [i_1] [i_1] |= ((((((arr_5 [i_1]) / var_3))) ? (arr_5 [i_1 + 1]) : (arr_2 [i_1 - 2])));
    }
    var_23 = (min((max(1, ((var_6 ? var_6 : var_7)))), (((((var_10 ? var_14 : var_11))) ? ((var_11 ? var_18 : -9151157215664779999)) : ((min(var_2, 1335212306)))))));
    #pragma endscop
}
