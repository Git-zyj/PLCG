/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = ((128 ? (~123) : 798));
    var_17 = (((((max(var_14, var_2)) % -16)) / var_0));
    var_18 = ((var_12 ? ((((max(40, var_5))))) : (max(var_14, var_7))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 2147483647;
        arr_4 [i_0] [6] = -var_7;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (arr_6 [i_1] [i_1]);
        var_20 = ((var_4 ? (~9007199254738944) : var_5));
        arr_8 [i_1] [i_1] = (((arr_6 [i_1] [i_1]) >= ((-((var_6 ? (arr_6 [i_1] [1]) : 57340))))));
        arr_9 [i_1] = var_5;
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_13 [9] [i_2] = (max(((((var_8 && 0) == var_3))), (((arr_10 [i_2 + 3]) - var_13))));
        var_21 = (((((min(776, (arr_5 [i_2 - 1]))) > (arr_10 [i_2]))) ? (((-799 ? 132 : 97))) : (max((arr_12 [i_2 - 1] [i_2 + 1]), var_14))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_18 [i_3] [i_3] = ((max((arr_17 [i_3]), var_12)));
        arr_19 [6] = (8221 > 15);
        arr_20 [i_3] = ((max(((var_2 / (arr_14 [i_3]))), 0)));
    }
    #pragma endscop
}
