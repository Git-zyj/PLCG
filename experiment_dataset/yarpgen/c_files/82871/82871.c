/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_17 = (((((~(arr_2 [i_0] [i_1])))) ? (arr_0 [i_1 + 2]) : -8246024336694204848));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_18 = (arr_2 [i_1 + 1] [i_1 + 2]);
                var_19 = (min(var_19, ((((arr_6 [i_0] [i_1 + 2] [i_2]) || (arr_6 [i_0] [i_0] [i_0]))))));
                var_20 = (988455565 < -8246024336694204848);
                var_21 = (max(var_21, (((!(arr_6 [i_0] [i_0] [i_0]))))));
                var_22 = -8246024336694204858;
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_9 [i_3] [i_3] [i_3] |= ((-(arr_8 [i_1 + 2] [i_1 + 2])));
                var_23 = (arr_0 [i_3]);
                arr_10 [i_0] [i_0] [i_0] = (arr_1 [i_3]);
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = (arr_14 [1]);

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {

                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    var_24 ^= (arr_3 [i_6 + 1] [i_6 - 1] [i_6 + 1]);
                    var_25 = ((~(arr_19 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1])));
                }

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_26 = (min(var_26, ((((arr_12 [i_4] [i_4]) >= (49 == -2048))))));
                    arr_26 [i_0] [i_0] [i_5] [i_0] = (arr_4 [i_0] [i_4] [i_4] [i_7]);
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_30 [i_0] [i_5] [i_5] = (((arr_13 [i_5]) && (arr_13 [i_0])));
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_4] |= ((~(arr_29 [i_4] [i_4] [i_5] [i_8])));
                }
            }
            arr_32 [i_0] [i_0] [i_0] = (((arr_16 [i_0] [i_4] [i_4] [i_4]) != (arr_16 [i_0] [4] [i_4] [i_4])));
            var_27 = (min(var_27, (((!(arr_0 [i_0]))))));
        }
        arr_33 [i_0] |= (arr_12 [i_0] [i_0]);
        var_28 = ((-2048 >= ((207 ? -6476366156225737689 : -6476366156225737689))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_29 = 7710908598965568043;
        arr_36 [i_9] = (!1);
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_30 &= (((min((max((arr_24 [1] [1] [i_10]), (arr_14 [i_10]))), (arr_20 [i_10] [i_10] [i_10] [i_10]))) >= ((((2436566745 != (max((arr_27 [i_10] [i_10]), (arr_0 [i_10])))))))));

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_31 -= ((~((~(~-3593968116118386064)))));
            var_32 = ((~((((((arr_12 [i_10] [5]) ? 7611742438973149573 : 1)) == (arr_24 [i_10] [i_10] [i_10]))))));
            arr_42 [i_11] [1] = (arr_1 [i_11]);
        }
    }
    var_33 |= 7710908598965568043;
    #pragma endscop
}
