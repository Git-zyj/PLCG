/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_11 = (((~(~1))));
        var_12 *= ((151 & (arr_2 [i_0 + 1] [i_0 + 1])));
        var_13 = 1;
        var_14 = 3148100713;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [4] = ((1 ? (max((arr_4 [i_1]), var_6)) : (arr_4 [i_1])));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] = var_5;
            var_15 = ((max((arr_0 [i_1] [i_2]), 1)));
            var_16 = 35062;
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((-98 >= ((((((arr_2 [i_3 + 1] [i_3 + 1]) ? var_1 : (arr_6 [i_3])))) ? var_6 : (arr_13 [7] [7]))))))));
        arr_14 [i_3] = 174;
    }
    var_18 += (((65530 > 3555031276) > (((var_1 ? (min(var_1, 6015332331457961510)) : (var_4 * var_9))))));
    #pragma endscop
}
