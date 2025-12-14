/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((!var_14) ? var_9 : ((var_12 >> (var_7 - 53332)))));
    var_20 = var_4;
    var_21 &= (min(var_0, var_11));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (((((min(37, (arr_1 [i_0] [i_0]))) ? (min(1835819369, 65528)) : (arr_2 [i_0] [i_0])))));
        arr_3 [15] |= max((arr_1 [i_0] [i_0]), ((var_16 - ((min((arr_0 [i_0] [i_0]), var_4))))));
        arr_4 [i_0] = ((((arr_0 [i_0] [i_0]) ? ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (67100672 > var_2))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [4] = (max(((((arr_2 [i_1] [i_1]) ^ (arr_1 [i_1] [i_1])))), ((min((arr_2 [i_1] [i_1]), (((var_12 || (arr_7 [i_1] [i_1])))))))));
        arr_9 [i_1] [i_1] = ((min(((var_12 - (arr_0 [i_1] [i_1]))), var_8)) - (max(((min(var_2, var_12))), (max((arr_0 [i_1] [i_1]), (arr_7 [1] [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (arr_11 [i_2] [i_2]);
        arr_13 [i_2] = min(((+(((arr_11 [i_2] [i_2]) - (arr_12 [i_2] [i_2]))))), (arr_11 [i_2] [i_2]));
    }
    var_24 ^= max((((((var_5 ? -147739317248693483 : -67100673))) ? 205 : 0)), (var_5 - var_2));
    #pragma endscop
}
