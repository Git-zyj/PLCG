/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((1 ? 19061 : var_12))) ? var_12 : var_9)) == ((((var_6 || (var_2 > -1347663888)))))));
    var_14 = (min(var_0, 62303));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 -= (min(0, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = 0;
        arr_4 [i_0] = ((max(13961319357896011358, (min(4085, 7)))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_8 [1] = (((((var_0 | (arr_0 [5] [i_1]))) ^ (arr_0 [5] [13]))));
        var_16 = (((((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [10] [i_1 + 1]) : (arr_0 [9] [i_1 + 1]))) > (((-32767 - 1) ? var_2 : (arr_0 [i_1] [i_1 + 1])))));
        var_17 = 1849616516;
        var_18 ^= (19061 / -16078);
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        var_19 = (min(var_19, (!1)));
        var_20 = (min(((((arr_10 [6]) ? 29640 : (max((arr_9 [i_2] [i_2 - 2]), (arr_10 [i_2 + 1])))))), (min(7257814925099053893, -1))));
    }
    #pragma endscop
}
