/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [3] [3] = ((-((var_15 ? (arr_0 [7]) : ((4294967295 ? 3384087804890542411 : var_12))))));
        var_20 = (min(var_20, ((max((((((3384087804890542406 ? (arr_0 [i_0]) : var_13))) ? (arr_1 [i_0]) : (arr_0 [i_0]))), ((((arr_0 [i_0]) + (arr_0 [i_0])))))))));
        arr_3 [i_0] [14] = var_9;
        arr_4 [i_0] = (max((min(var_12, var_12)), (52154 || 3384087804890542411)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = (min(var_21, ((min(var_1, (max(3384087804890542413, 3384087804890542413)))))));
        arr_7 [i_1] = ((-7907670205719731046 ? 2539087840215637755 : ((((arr_5 [i_1] [i_1]) ? ((-3384087804890542407 ? var_0 : 65535)) : var_12)))));
        arr_8 [i_1] = (arr_6 [i_1] [i_1]);
        arr_9 [i_1] = var_11;
    }
    var_22 = var_12;
    var_23 = (((var_7 << var_8) ? ((((((var_11 ? 16 : var_2))) >= (min(var_9, 3384087804890542413))))) : (((max(var_6, 977628588249408490))))));
    #pragma endscop
}
