/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 11219707750204852556;
        arr_4 [i_0] [i_0] = var_15;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (~-11219707750204852558);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_18 = 11219707750204852558;
                var_19 = (((arr_5 [i_0 - 2] [i_0 - 2] [i_0]) != var_9));
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_20 = ((((min(3966442467, 9346))) > ((var_1 + (arr_1 [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_21 = var_3;
                    var_22 = -var_2;
                    var_23 = var_4;
                    var_24 = (max(((((var_7 ? 83 : var_7)) | (((arr_12 [i_3] [i_3]) ? var_4 : (arr_12 [4] [4]))))), 31));
                }
            }
        }
        arr_18 [i_3] [i_3] = (((((2218463862 / (((var_14 + 2147483647) << (var_8 - 3798571986379588172)))))) ? -var_12 : (var_3 / 2145386496)));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_22 [i_6] = ((((max((arr_5 [14] [i_6] [i_6]), (max(70, 91))))) ? (max(((154 << (((arr_0 [i_6]) + 4123174060369986095)))), var_5)) : var_6));
        var_25 &= ((((arr_9 [i_6] [6] [i_6]) ? (arr_9 [i_6] [22] [i_6]) : var_15)));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = ((-136273477 ? ((var_9 ? ((249 ? var_13 : (arr_19 [i_6]))) : (arr_20 [i_6]))) : (((~(arr_9 [i_7] [i_6] [i_6]))))));
            var_27 ^= (((((arr_9 [i_6] [12] [i_7]) ? (arr_9 [i_7] [10] [10]) : 12288))) || (((arr_9 [i_6] [6] [i_6]) || (arr_9 [i_6] [16] [i_6]))));
        }
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            var_28 = (min(var_28, (((~(((!83) ? (((-127 - 1) ? 13733289563531971376 : 119)) : (((max(8184, var_3)))))))))));

            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                arr_30 [i_6] [i_8 + 3] [0] = var_12;
                var_29 = var_16;
                var_30 *= ((-((var_16 * ((var_13 ? 18122912442264444687 : 165))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_31 = (max((((!(arr_9 [i_8 - 1] [i_6] [23])))), (~var_6)));
                            var_32 *= ((!((!(arr_29 [i_8 - 1] [i_8 - 1] [i_6])))));
                            var_33 = ((9223372036854775805 ? 11219707750204852568 : 1845723487));
                        }
                    }
                }
            }
        }
    }
    var_34 = (((var_10 * ((min(-113, 0))))) * (((var_6 <= var_7) ? ((var_12 ? var_4 : 126)) : (91 >= var_10))));
    #pragma endscop
}
