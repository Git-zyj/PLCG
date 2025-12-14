/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_11 = ((-(((var_10 ? var_2 : var_3)))));
        var_12 = var_0;
        arr_2 [i_0] = ((~39) ? ((((!(1 - 113))))) : (((arr_0 [i_0 - 2] [i_0 - 1]) ? ((-8266889565010170784 ? var_7 : var_7)) : var_8)));
        arr_3 [i_0] = ((var_5 ? (((!(!var_0)))) : ((((!var_2) || var_6)))));
    }
    var_13 = (((((~((1425042769 | (-127 - 1)))))) ? (((((~20) != 1)))) : ((var_4 ? 7506367564272902580 : (((min(var_9, 0))))))));
    #pragma endscop
}
