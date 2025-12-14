/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_13 ? ((var_13 ? (!0) : (0 && 9024501215948181730))) : -1073741824));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [7] = ((((((arr_0 [i_0]) ? (var_12 && var_14) : (((arr_1 [i_0]) ? -7011 : var_10))))) ? var_6 : ((-14 ? 127 : ((var_4 ? var_12 : var_13))))));

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (arr_1 [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3] [i_2] [8] [8] = var_13;
                            var_17 = var_6;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_20 [i_0] [4] [i_0] = var_5;

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_23 [5] [i_5] [i_0] = ((-((-(arr_21 [i_5] [i_5])))));
                arr_24 [i_6] [i_6] [i_6] = var_11;
                var_18 = (arr_21 [i_0] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_19 = var_3;
                            arr_31 [i_8] [i_5] [i_5] [i_6] [i_7] [i_5] = (((var_11 ? (var_0 && var_10) : (((arr_13 [i_8] [i_8] [i_6] [i_8] [i_6]) & var_1)))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_20 *= var_10;
                var_21 = var_8;
            }
        }
        for (int i_10 = 2; i_10 < 9;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                arr_39 [i_10] = (~var_7);
                var_22 = (((((-809129381 ? 15360 : -2088683973))) ? ((((1505047826 ? 18446744073709551615 : var_4)))) : -var_6));
                var_23 = 1073741823;
                var_24 = (min((127 > var_1), (arr_26 [2] [2] [2] [i_10 + 1])));
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_43 [i_10] [i_0] [i_10] [i_10] = 9223372036854775807;
                var_25 = 1073741823;
                arr_44 [i_0] [i_10] [9] = (var_2 - var_0);
                arr_45 [i_10] [i_10] = var_5;
            }
            var_26 = (((50151 ^ (arr_13 [i_10] [i_10 - 2] [i_10] [i_10 + 2] [i_10 + 1]))));
            var_27 = (max(var_27, var_7));
            var_28 = (~var_14);
        }
    }
    #pragma endscop
}
