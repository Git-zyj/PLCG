/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(16 && 10776)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((0 ? -2147483642 : 1)));
        var_12 = (min(var_12, 39660));
        arr_3 [0] &= -16129;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = var_6;
        var_13 = ((((((var_7 ? var_3 : (arr_0 [i_1]))))) ? 46621 : (!32760)));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (1 ? ((((arr_9 [i_2]) > var_5))) : ((var_4 ? 0 : (arr_6 [i_2]))));
        var_14 += ((((min(911605975, var_5))) % ((0 ? 4841865937414390061 : 65))));
    }
    var_15 = ((((min(var_8, ((32767 ? 0 : 851190075))))) ? (max(((var_4 ? var_8 : 1)), ((var_9 ? var_10 : var_5)))) : ((1362560021 ? var_2 : ((var_0 ? var_10 : 0))))));
    #pragma endscop
}
