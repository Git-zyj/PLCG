/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 53;
    var_17 = var_9;
    var_18 = var_14;
    var_19 = -var_3;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (((143 + (arr_0 [i_0]))));
        var_21 = (((((var_4 >> ((((var_13 | (arr_0 [i_0]))) - 3240863138380974025))))) ? 40 : (((arr_1 [i_0]) << (var_9 - 56)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_0] |= var_14;
            var_22 = (arr_1 [i_0]);

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_23 = ((~((-(((arr_5 [i_0] [i_4]) << (var_5 - 215)))))));
                            arr_13 [i_2] [i_2] [i_2] [4] [i_2] = ((((var_15 ? ((var_1 ? (arr_3 [i_4]) : -8219101182185809588)) : ((-6546529873548722096 ? var_13 : var_15))))) ? (((!-5304285568213085459) ? (-7917717757084189278 / var_12) : (((5304285568213085458 ? (arr_5 [i_0] [i_2]) : (arr_11 [i_0] [i_0] [i_2] [3] [i_0] [i_0] [i_2])))))) : var_11);
                            arr_14 [i_0] [i_4] [i_2] [i_3] [16] &= ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4]) ? 32 : ((-(arr_6 [i_2 - 1] [i_0]))));
                        }
                    }
                }
                arr_15 [i_0] [i_2] [2] = (arr_0 [i_0]);
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_21 [i_0] [i_6] [i_5] [i_6] = max(188, 27);
                    var_24 = (max(var_24, ((((5304285568213085466 > 40) > var_8)))));
                    var_25 = var_7;
                    arr_22 [i_1] &= ((31 ? (max(-886654966220632953, 84)) : -6507396592724222387));
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_26 = (arr_2 [i_0] [i_0] [i_0]);
                            var_27 |= (((85 % 7) & ((((-2569172825067353428 && (!-6038382087390368146)))))));
                            var_28 = (min(var_28, (min((max(var_2, var_8)), ((123 ? (arr_8 [i_8 - 3] [i_8 - 3] [i_8] [i_8] [i_8 - 3]) : var_13))))));
                            var_29 -= -194;
                            var_30 = (min(var_30, (arr_24 [i_8] [i_8 - 2] [i_5] [i_8 - 2] [i_5])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_31 = (((arr_23 [i_9] [i_10]) ? ((max(123, 21))) : (arr_23 [i_0] [i_0])));
                            var_32 = var_9;
                            var_33 = var_11;
                            arr_32 [16] [i_9] [i_1] [i_0] = (max(((8818173103209204939 ? -1268508515416614977 : 8724643111642143630)), (max((arr_29 [i_0] [i_0] [i_0]), (arr_29 [i_5] [i_5] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        arr_36 [i_11] [i_11] = (!var_6);
        var_34 &= arr_0 [i_11 - 1];
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_35 = (max(((-9054560881298694422 ? (max((arr_39 [i_12]), var_4)) : (33 > 9060144588742573560))), var_4));
        arr_40 [i_12] = var_3;
    }
    #pragma endscop
}
