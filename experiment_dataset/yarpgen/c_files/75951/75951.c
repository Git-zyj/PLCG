/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_2;
    var_13 = (((((var_3 ? var_10 : (max(3, 63708))))) ? 49 : ((((min(var_8, var_7)) == var_9)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = -var_2;
        arr_5 [i_0] = (max(((~(arr_2 [i_0]))), (((arr_2 [i_0]) % (arr_3 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (((1828 ? ((var_4 ? 49320 : var_8)) : var_3)));
        arr_8 [i_1] = var_10;
        arr_9 [i_1] [i_1] = ((((!(3948975011 != -6132024592776284034))) ? (((arr_6 [i_1]) ? (arr_7 [i_1] [i_1]) : var_4)) : (max(var_3, (arr_7 [i_1] [i_1])))));
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 = (!1927794513);
        arr_12 [i_2] = (min((max((arr_7 [i_2] [i_2]), var_0)), (((2147483647 * (((-2147483647 - 1) / 4281826159)))))));
        var_16 = ((((max(((16211 ? (arr_7 [i_2] [i_2]) : 23541)), 1450626980))) ? (16383 / 123) : (((arr_11 [i_2]) ? (arr_11 [i_2]) : (arr_10 [i_2] [i_2])))));
        var_17 = (((arr_6 [i_2]) ? var_8 : (min(((~(arr_11 [i_2]))), 585765274))));
    }
    #pragma endscop
}
