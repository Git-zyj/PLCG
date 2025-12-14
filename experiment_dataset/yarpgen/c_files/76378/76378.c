/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((min((arr_0 [i_0]), 3522940363)));
        var_15 = ((-(((((-23381 ? (arr_0 [13]) : (arr_1 [i_0])))) ? 23381 : var_2))));
    }

    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_16 = (((arr_1 [6]) | ((+((max((arr_1 [i_1]), (arr_1 [i_1]))))))));
        var_17 = (((((~(arr_3 [i_1 - 2] [i_1])))) ? ((max((arr_2 [i_1] [i_1 - 3]), (arr_1 [i_1 - 3])))) : (max((min(var_1, -912042089)), (((!(arr_2 [i_1] [i_1]))))))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_18 = 33;
        var_19 = (!((min((arr_5 [i_2]), (arr_4 [i_2 - 2] [i_2 - 2])))));
        var_20 = (max(((18 ^ (arr_5 [i_2]))), var_1));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_21 = ((((~(arr_7 [i_3]))) << (((max((arr_7 [i_3]), (min((arr_8 [i_3]), (arr_6 [i_3] [i_3]))))) - 18504))));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        var_22 = (-2 ? (((((((arr_16 [i_4] [i_5] [i_5] [i_4] [i_3] [i_3]) ? (arr_6 [1] [i_3]) : (arr_16 [10] [i_4] [i_5] [i_5] [i_6] [i_6])))) ? (((arr_8 [i_6 - 1]) ? 0 : (arr_6 [i_4] [i_6]))) : (arr_10 [i_3])))) : (arr_7 [i_6]));
                        var_23 = (min((!806165497), -23381));
                        var_24 = (min(var_24, var_4));
                        var_25 = (arr_7 [i_3]);
                        var_26 = (!-7869393146806711953);
                    }
                }
            }
            var_27 = (min(var_27, ((((((((-(arr_6 [i_3] [i_3])))) ? (arr_13 [i_3] [i_4] [i_4]) : var_5)) << (((arr_14 [i_4] [i_4]) - 603311711)))))));
        }
    }
    #pragma endscop
}
