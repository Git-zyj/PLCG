/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [2] &= 18371570793189018813;
            var_16 = (((min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 3]))) % (arr_4 [i_0 + 4] [i_0 + 2])));
            var_17 -= ((8820988808795644077 & ((((arr_4 [i_0 + 4] [i_0 + 3]) ^ ((min((arr_5 [i_0 + 1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_0 - 1])))))))));
            var_18 -= (((((-(arr_5 [i_0 + 4] [i_1 + 1])))) | ((((arr_5 [i_1 + 1] [i_0 + 3]) <= 4237998076)))));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((arr_8 [i_0 + 1] [i_0 + 2] [i_2]) & ((max((arr_8 [i_0 + 3] [i_2 + 1] [i_2]), (arr_8 [i_0 + 2] [i_2 - 1] [i_2])))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_13 [i_0 - 1] [i_2] = (~170);
                var_19 += ((-(arr_8 [i_0 + 1] [i_2 - 1] [i_3])));
            }
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_2] [i_2 - 1] [i_2] = (max((((arr_15 [i_4 + 2] [i_0 + 2] [i_0 + 1]) ? (arr_5 [i_0 - 1] [i_0 + 1]) : 56969220)), var_14));
                arr_17 [i_0 + 3] [i_0 + 4] [i_2] [i_0 + 4] = arr_0 [i_2 - 1] [i_4 + 1];
            }
            var_20 ^= (((((arr_8 [8] [i_0 + 2] [8]) <= 500856983)) ? ((max((arr_8 [10] [i_0 + 2] [10]), (arr_8 [2] [i_0 + 2] [2])))) : (((arr_8 [16] [i_0 + 2] [16]) * (arr_7 [6])))));
        }
        arr_18 [i_0 + 1] = (max((((arr_4 [i_0 + 4] [i_0 + 2]) / (arr_4 [i_0 + 2] [i_0 + 3]))), (arr_4 [i_0 - 1] [i_0 - 1])));
        var_21 = (min(var_21, (arr_11 [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 4])));
        var_22 &= ((+(max((((arr_1 [i_0 + 4]) & 236)), (arr_1 [i_0 + 4])))));
        var_23 = (max(var_23, ((min(((min(-77, 176389505))), ((-(arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = (min(var_24, (((((!(arr_20 [i_5]))))))));
        arr_21 [i_5] = ((var_13 >= (arr_19 [i_5])));
        var_25 *= ((!(arr_20 [i_5])));
        arr_22 [i_5] [i_5] = ((+(((arr_19 [i_5]) ? (arr_20 [i_5]) : (arr_19 [i_5])))));
    }
    #pragma endscop
}
