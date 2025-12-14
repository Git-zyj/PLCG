/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, -123));
        var_17 += (((-127 - 1) ? ((((!(arr_0 [i_0]))))) : (((arr_1 [i_0]) ^ 2163428740))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_18 = ((+(min(((((arr_2 [i_1] [i_1]) < (arr_3 [i_1] [i_1])))), (min((-9223372036854775807 - 1), 9223372036854775807))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_2] = (max((min((arr_6 [i_1] [i_2] [i_2]), -4377449594716075036)), ((min(213, (arr_6 [i_1] [i_1] [i_2]))))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 = (((((((arr_5 [i_1]) | -3269229412793564482)) - (min((arr_5 [i_1]), var_11)))) - (((arr_7 [i_1]) - (arr_3 [i_1] [i_3])))));
                var_20 = 7733606637582481083;
                arr_11 [i_1] [i_2] [i_3] = 524280;
                arr_12 [i_1] [i_1] [i_3] = (((((((var_4 - (arr_3 [i_2] [i_1]))) ^ (arr_5 [i_3])))) ? ((~(arr_10 [i_1] [i_1] [i_3]))) : var_3));
            }
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                var_21 = (max(var_21, ((((((arr_9 [i_4 + 1] [i_2] [i_4]) / (arr_9 [i_4 - 1] [i_1] [i_2]))) <= (arr_6 [i_4 + 1] [i_2] [i_4]))))));
                var_22 = (((((arr_4 [i_4 - 1]) / (arr_4 [i_4 - 1])))) ? (((arr_2 [i_4 + 1] [i_4 + 1]) ? -3817250605235001048 : (arr_2 [i_4 + 1] [i_4 + 1]))) : 2768415457);
            }
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            var_23 *= (arr_7 [i_5]);
            var_24 = (~29);
            var_25 *= (524286 <= 11);
            var_26 += ((~((((max((arr_2 [i_1] [i_1]), var_3))) ? ((-6 / (arr_9 [i_5] [i_1] [i_1]))) : ((524280 ^ (arr_4 [i_1])))))));
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] [i_6] = var_8;
        var_27 = ((~(201 <= 3)));
    }
    var_28 = var_2;
    #pragma endscop
}
