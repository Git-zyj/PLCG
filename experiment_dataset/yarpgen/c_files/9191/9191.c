/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((var_11 ? var_5 : var_5))) ? var_9 : ((var_8 ? var_15 : var_12))))) ? (((var_8 ? ((var_5 ? var_9 : var_4)) : var_5))) : (((var_11 ? var_11 : var_12)))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_17 += var_2;
        var_18 = var_6;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 *= ((var_6 ? var_4 : ((var_11 ? var_1 : var_7))));
        var_20 = (max(var_20, (((((((var_8 ? var_14 : var_1)))) ? (((var_13 ? var_1 : var_8))) : (((((var_9 ? var_5 : var_12))) ? ((var_13 ? var_5 : var_0)) : var_8)))))));
        var_21 = ((((((var_14 ? var_9 : var_13))) ? var_7 : ((var_3 ? var_9 : var_0)))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = var_15;
        arr_8 [i_2] = ((((((var_3 ? var_12 : var_1))) ? var_0 : (((var_6 ? var_3 : var_7))))));
        var_23 = ((var_15 ? (((((var_11 ? var_14 : var_6))) ? var_1 : var_0)) : var_12));
        var_24 = ((((var_3 ? var_10 : var_12))));
    }
    var_25 = ((((((var_4 ? var_3 : var_15))) ? var_0 : var_3)));
    var_26 = (((((var_6 ? var_2 : var_0))) ? var_1 : ((var_1 ? var_7 : var_8))));
    #pragma endscop
}
