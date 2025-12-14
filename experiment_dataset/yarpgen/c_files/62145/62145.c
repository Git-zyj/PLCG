/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_10;
    var_15 = (var_10 * (var_13 > 704469740));
    var_16 &= ((~(126 || 1)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = ((-(((!(arr_0 [i_0 - 1]))))));
        var_18 = 31744;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((arr_2 [i_1] [i_0 - 2]) ? (arr_4 [i_1]) : ((-(arr_4 [i_1]))));
            arr_7 [i_1] = (((~(arr_0 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_19 = 30987;
            arr_10 [i_0] [i_0] [i_2] = var_3;
            arr_11 [i_0 + 4] [i_0 + 4] = ((((-(arr_1 [i_0 - 3]))) - (arr_1 [i_0 + 4])));
        }
        var_20 = 65281;
    }
    #pragma endscop
}
