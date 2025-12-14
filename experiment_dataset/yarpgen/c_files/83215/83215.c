/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [10] = (((min(((-(arr_0 [i_0]))), (min(-41611445, -873975830)))) | ((((-(arr_2 [10]))) | (((arr_1 [6] [9]) / var_8))))));
        var_14 = (min(((min(12407027331787539584, (arr_0 [i_0])))), (((2250960113 ? -26628 : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = 26628;
        var_16 = (((min(2044007185, (0 / 4294967295))) + (arr_5 [1] [i_1])));
        var_17 += ((-((-((max(var_10, (arr_5 [i_1] [i_1]))))))));
        var_18 = (((((~(arr_7 [i_1])))) ? (arr_5 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) ^ ((~(arr_6 [i_1])))))));
        arr_8 [i_1] = ((((min((arr_4 [2] [i_1]), 71))) && (~2044007182)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (min(((((max(1, 20))) ? (arr_7 [i_2]) : (arr_5 [i_2] [i_2]))), ((((18047374319955385846 ? (arr_7 [6]) : (arr_9 [6] [6])))))));
        arr_12 [i_2] = (((((arr_10 [i_2] [21]) | (arr_5 [i_2] [i_2]))) * (!18047374319955385873)));
        var_19 ^= 7;
        var_20 = ((((((arr_6 [17]) | 6102130314021832663)) & (((min((arr_10 [i_2] [0]), 253)))))));
        arr_13 [i_2] = (((min(((!(arr_5 [i_2] [i_2]))), (!-127))) ? 3 : 636362567));
    }
    var_21 = (((((max(399369753754165743, var_10)) / -2)) + 1));
    var_22 = (var_10 / var_4);

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 = -1;
        var_24 += -47;
    }
    #pragma endscop
}
