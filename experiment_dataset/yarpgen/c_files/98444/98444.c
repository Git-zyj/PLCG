/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_0));
    var_12 = (max(((((var_10 ? var_10 : var_6)))), ((-var_7 ? var_8 : (var_0 ^ var_9)))));
    var_13 = var_10;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_14 = ((arr_0 [i_0]) * (max(((max(var_8, (arr_1 [i_0] [i_0 - 3])))), (((arr_2 [i_0]) / var_8)))));
        arr_3 [i_0] = ((~(arr_2 [i_0])));
        var_15 = ((var_5 % (((min((arr_1 [i_0 - 4] [i_0 + 2]), (arr_1 [i_0] [i_0 - 1])))))));
    }
    var_16 = (min(var_16, (((((((((var_8 ? var_9 : var_2))) ? var_7 : var_5))) ? var_9 : (((var_3 && var_6) & ((var_7 ? var_10 : var_1)))))))));
    #pragma endscop
}
