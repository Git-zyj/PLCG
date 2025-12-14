/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 *= ((-(((arr_2 [1]) ? 62039 : 18))));
        var_22 = (max(var_22, (((((((arr_2 [10]) ? (arr_0 [i_0] [i_0]) : var_8))) ? (arr_2 [2]) : ((((!(arr_0 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = ((0 < (18942 || 1930516923)));
                    var_23 = (min(var_23, (((((((arr_6 [i_1]) ? (arr_1 [i_2]) : var_12))) ? (max(var_11, 643003755229209279)) : ((((arr_6 [i_1]) ? (arr_1 [i_0]) : (arr_6 [i_1])))))))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        arr_10 [i_3] = ((((!(arr_2 [0])) ? (((arr_3 [i_3 - 1] [i_3]) + (arr_0 [i_3] [i_3]))) : var_13)));

        /* vectorizable */
        for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_24 = (-32767 - 1);
            var_25 = -857719232;
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_26 = -1916577791;

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 *= (((arr_15 [i_6] [i_6]) ? ((-(max(158, 1957688060203488042)))) : (arr_9 [i_3])));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_28 ^= (min((arr_2 [4]), (((63 / (65535 * 2))))));
                        arr_25 [i_3] [i_5] [i_6] [i_5] [i_5] = (arr_20 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]);
                    }
                    var_29 = (min(var_29, ((max((((!(arr_1 [i_3 - 3])))), -165)))));
                    var_30 = (arr_24 [i_3] [i_3] [i_6] [i_6] [i_7]);
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                var_31 += ((((min((arr_2 [4]), (arr_2 [1])))) ? ((var_9 ? (arr_2 [4]) : var_19)) : (arr_2 [6])));
                var_32 = ((((var_11 - (arr_6 [i_5]))) > ((-(((!(arr_12 [i_3] [i_3] [i_9]))))))));
            }
            arr_29 [i_5] = ((((arr_15 [i_3 - 3] [i_5]) ? (arr_5 [i_3 - 2]) : 19)));
        }
    }
    #pragma endscop
}
