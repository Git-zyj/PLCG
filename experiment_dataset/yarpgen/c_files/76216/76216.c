/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [6] [i_0] |= (((255 >= ((var_4 ? var_7 : (arr_0 [i_0]))))));
        var_12 = var_1;
        arr_4 [i_0] = ((+(((var_0 - var_1) ? (max(var_7, (arr_0 [i_0]))) : (max(var_8, (arr_2 [i_0 - 1])))))));
        var_13 = (-68 % 57633);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (min(var_0, (((arr_5 [i_1] [i_1]) ^ var_5))));
        arr_8 [i_1] = (arr_5 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = (max(var_2, (max(var_4, (min(var_8, (arr_7 [i_2])))))));
        arr_12 [i_2] = (((max((arr_10 [i_2]), -1725848182)) + -var_2));
        arr_13 [0] [i_2] |= (max(var_10, (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])))));
    }
    var_15 |= (var_0 | var_1);
    #pragma endscop
}
