/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = ((var_6 ? ((((var_10 ? var_3 : var_5)) | var_6)) : var_3));
    var_15 = ((var_1 | ((((var_2 + var_9) ? -16 : -8852)))));
    var_16 = (max(var_16, 8852));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((16383 == (!-8852)));
        var_18 |= var_2;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((arr_3 [i_1]) ? var_1 : var_4));
        arr_8 [i_1] [i_1] = ((-(((arr_0 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_0 [i_1])))));
        arr_9 [i_1] [i_1] = (arr_2 [14] [i_1]);
    }
    #pragma endscop
}
