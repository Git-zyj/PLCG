/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 += (arr_0 [i_0]);
        arr_3 [i_0] = 30;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_1] [i_1] = (arr_4 [i_1] [i_1]);
            arr_9 [13] [i_2] [i_1 - 1] = 7354775178087436599;

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_13 [i_2] [i_2 - 1] [i_3] = 56865018;
                var_14 ^= (((arr_11 [i_1 - 1] [i_2] [i_3] [i_2]) < (arr_11 [i_1 + 3] [i_2] [i_3] [i_2])));
                var_15 = -29854;
                var_16 = 2301339409586323456;
            }
        }
        var_17 = ((~((min(29861, (arr_7 [i_1 + 3] [7]))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 = (((((((arr_14 [i_4] [i_4]) ? var_3 : var_8)) < (arr_15 [i_4] [i_4]))) ? var_10 : ((~(((!(arr_15 [i_4] [i_4]))))))));
        var_19 *= (arr_14 [i_4] [i_4]);
        arr_16 [i_4] = ((-(max((arr_15 [i_4] [i_4]), (arr_14 [i_4] [i_4])))));
        var_20 = (max(var_20, 18030489714381475710));
    }
    var_21 = var_5;
    var_22 = var_12;
    #pragma endscop
}
