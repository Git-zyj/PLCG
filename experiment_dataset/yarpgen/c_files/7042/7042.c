/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((max((max(var_3, var_10)), ((111 ? 2184438910465025383 : var_11))))) ? (var_10 & var_4) : var_9);
    var_14 = ((((min(var_7, var_11))) < ((((max(172, var_7))) ? var_12 : var_6))));
    var_15 = (((((var_11 != (~var_2)))) ^ ((((max(34, -88))) | -111))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 1;
        var_16 = (((arr_1 [i_0 + 2]) ? (arr_2 [i_0 + 2]) : ((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        var_17 = (min(var_17, (((var_4 ? var_4 : (((!(arr_2 [i_0 + 2])))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((!(arr_6 [i_1 - 1] [i_1 - 2])));
        var_18 = (max(var_18, -var_4));
    }
    var_19 = var_9;
    #pragma endscop
}
