/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 *= (max(96, (((-((var_10 ? var_7 : 25)))))));
        var_18 -= ((+(((143 ^ var_15) ^ 134))));
        var_19 = 125;
        var_20 = ((-129 ? ((var_14 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : ((14735202095392712205 ? -63 : ((102 ^ (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (min(var_21, (arr_0 [i_1])));
        var_22 = (arr_3 [i_1]);
        var_23 = (+(min((arr_2 [i_1] [i_1]), (arr_0 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = (((var_9 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))));
        var_25 = (min(var_25, (((~((((((arr_8 [7] [i_2]) ? (arr_7 [i_2]) : (arr_7 [4])))) ? (((arr_8 [i_2] [i_2]) ? 150 : 5807793401927265089)) : 102)))))));

        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_26 = (~var_1);

            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                var_27 ^= 495212288;
                arr_14 [i_3] = ((((((arr_11 [i_4 - 2] [i_2] [i_4 - 2] [i_3 - 1]) ? (arr_9 [i_3 - 1] [i_3] [i_4]) : (arr_12 [i_4 - 1] [i_3])))) ? ((1 ^ (arr_12 [i_2] [i_3]))) : (arr_7 [i_3 - 3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_28 = ((-((max((arr_18 [i_6] [i_3] [i_4 - 2] [i_4 - 2] [i_6]), (arr_18 [i_4] [i_3] [i_4 - 2] [i_5] [i_6]))))));
                            var_29 = (min(var_29, ((min(12953541424639289358, (((var_16 ? var_15 : (min(var_11, 4290716690))))))))));
                            var_30 = arr_10 [i_3] [i_4] [i_5];
                            arr_21 [i_6] [8] &= (~var_9);
                        }
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            var_31 = ((((max(var_4, var_7))) ? (((((3 ? -1176724812881049927 : 1226386644471681360))) ? var_7 : ((-477115807 ? var_5 : 41391)))) : (((var_16 ? ((var_1 ? (arr_15 [i_7] [i_7] [i_7]) : 24153)) : (!var_0))))));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_26 [i_7] [i_8] = (!255);
                var_32 = (min(var_32, (((-109 + 2147483647) >> 0))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_33 += (arr_22 [i_7 + 2]);
                            arr_34 [i_7] [i_10] [i_9] [i_7 + 2] [i_7] = ((((var_16 / (arr_12 [0] [i_7])))) ? ((var_6 ? var_9 : 0)) : ((((min(var_8, (arr_32 [i_2] [12] [i_9] [i_7] [i_9])))))));
                            var_34 = (((((-(arr_8 [15] [i_9]))))));
                        }
                    }
                }
                arr_35 [6] [6] [i_9] [i_7] = (max(var_9, var_1));
                var_35 = (min(var_35, var_8));
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        arr_39 [i_12] = ((-var_2 ? 59 : 5493202649070262262));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_43 [i_12] [i_12] [2] = 17103736127583907251;
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {

                        for (int i_16 = 2; i_16 < 16;i_16 += 1)
                        {
                            var_36 = (27 ? var_12 : (3 & 3711541978316839410));
                            arr_51 [i_12 + 2] [i_14] [i_12] = (1 && -3);
                        }
                        var_37 = var_7;
                        var_38 = ((var_13 ? ((12288 ? var_5 : var_8)) : (arr_36 [i_12 + 1])));
                        var_39 += var_14;
                    }
                }
            }
            arr_52 [i_12] = ((-(arr_22 [i_12 - 1])));
        }
        arr_53 [i_12] = (~(arr_45 [i_12 + 2] [0]));
        var_40 = (min(var_40, (arr_50 [i_12 + 1] [i_12] [i_12] [0] [i_12])));
    }
    var_41 = (max(var_8, 0));
    var_42 = ((var_2 ? (min(((var_11 ? 3766873997069740173 : 0)), var_3)) : (((22 ? 124 : var_15)))));
    var_43 = (min((~var_16), var_1));
    #pragma endscop
}
