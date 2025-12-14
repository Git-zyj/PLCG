/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((max(((min(var_1, 32749))), (min((arr_1 [i_0]), var_9))))) | -var_13));
        arr_2 [9] = (max((((var_2 >= 25264) % (var_15 & var_9))), (arr_1 [i_0])));
        arr_3 [i_0] = (min(32767, (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_1))));
        arr_4 [9] [3] = (var_6 + var_1);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (!9528);
        arr_9 [i_1] = (max(var_6, ((-1 ? (~var_5) : (arr_6 [i_1])))));
        arr_10 [i_1] = var_1;
        arr_11 [i_1] = var_16;
    }
    var_19 = (((min(((var_9 ? var_1 : var_15)), (((69 ? var_8 : var_7))))) <= (((((var_7 % var_14) >= ((min(var_12, var_8)))))))));
    #pragma endscop
}
