/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 < -30515);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_11;
        arr_3 [i_0] = (((((arr_0 [i_0 - 1]) ? ((var_1 ? var_0 : var_17)) : ((189860362 ? var_9 : var_11)))) >= (arr_1 [i_0])));
        arr_4 [i_0] = var_5;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0 - 1] [i_1] [i_1] = (((arr_6 [i_0] [i_0] [i_0 - 1]) ? (max(18446744073709551615, -4840087987675398316)) : (arr_1 [i_0])));
            arr_8 [i_1] [1] [i_0] = ((~(((arr_1 [i_0 - 1]) << (((arr_5 [i_0] [i_0 - 1] [i_0]) + 724462160154715640))))));
            arr_9 [i_0] = var_0;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_2] = (arr_5 [i_2 - 1] [i_0 - 1] [i_0 - 1]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_25 [i_0] [i_5] [i_3] [i_5] [i_0] = (var_7 * -4840087987675398316);
                            arr_26 [i_0] [i_0] [i_5] [i_0] [i_0] = var_7;
                            arr_27 [i_0] [i_3] [i_3] [i_5] = ((-1 ? ((var_9 ? (arr_19 [i_5 - 1] [i_4] [i_0] [i_0]) : 4840087987675398316)) : (arr_22 [i_0] [18] [i_2] [i_2] [i_3] [i_4] [i_5])));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            arr_38 [i_6] [i_6] [i_8] [i_7] [i_6] [i_0] = (arr_34 [i_0]);
                            arr_39 [i_6] = (((arr_23 [i_0 - 1] [i_9 - 1] [i_7] [i_8] [i_0 - 1]) ? (arr_36 [i_0] [9] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_1 [i_9 + 1])));
                            arr_40 [i_9] [i_8] [i_6] [i_6] [i_0] = (((arr_35 [i_0 - 1] [i_0 - 1]) * (arr_1 [i_8])));
                            arr_41 [i_0] [i_0] [i_6] [i_8] [i_9] = var_13;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_44 [i_0] [i_8] [i_7] = ((!((min(-2713725254556565176, 13687537920672278246)))));
                            arr_45 [i_0] [i_6] [i_7] [i_8] [i_0] = 9223372036854775807;
                        }
                        arr_46 [i_0 - 1] [i_6] [i_6] [i_6] [i_8] = (arr_36 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
            arr_47 [i_6] [2] [i_6] = ((0 ? 8987590612415897411 : 9223372036854775807));
        }
        arr_48 [i_0] [i_0] = var_7;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_51 [i_11] [i_11] = (((((var_6 ? 18446744073709551615 : 1))) % (arr_21 [22] [4] [i_11] [i_11] [i_11] [i_11] [22])));
        arr_52 [i_11] = min(1, 1681670953040974923);
        arr_53 [i_11] = (arr_31 [22] [i_11] [i_11] [6]);
        arr_54 [1] = ((((-((min((arr_30 [i_11] [i_11] [i_11]), (arr_23 [i_11] [i_11] [i_11] [i_11] [i_11])))))) <= (((!(arr_28 [i_11] [i_11]))))));
        arr_55 [1] [i_11] = ((var_6 >= ((((((arr_5 [i_11] [1] [6]) % var_14))) ? (arr_23 [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_42 [20] [i_11] [20])))));
    }
    #pragma endscop
}
