/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((-(min(var_2, var_11)))), var_9));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 + 1]);
        var_22 = (min(var_22, ((min(((~(((arr_0 [i_0]) ^ (arr_1 [i_0]))))), (((((arr_1 [i_0]) & (arr_0 [i_0]))) << (((max((arr_1 [i_0]), (arr_0 [i_0]))) - 6344867580339106835)))))))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = (min((arr_2 [i_1]), (min(2000967158, (-32767 - 1)))));
        var_24 = (min(var_24, (arr_3 [i_1])));
        var_25 = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_26 = ((((((min((arr_4 [i_2]), (arr_5 [i_2])))))) >= (min((arr_6 [i_2]), (arr_5 [i_2])))));

        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_27 = max(((((arr_5 [i_2]) && (arr_10 [i_2] [i_3 + 2] [i_3])))), ((-(arr_10 [i_2] [i_3] [i_2]))));
            var_28 = (arr_6 [i_2]);
            var_29 = (min((min((!-2000967170), (arr_7 [i_2] [i_2] [i_3 + 2]))), 4022164703822425516));

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_30 = (((-2000967182 | 2000967150) != (1 & -2000967166)));
                var_31 = (0 > 3507851581);
                var_32 = (min((((arr_11 [i_3] [i_3 + 1] [i_3 + 2]) & (arr_10 [i_2] [i_3 + 2] [i_3 + 2]))), (((7 != 1) ? (arr_10 [i_2] [i_3] [i_4]) : (arr_7 [i_3 - 1] [i_2] [i_3])))));
                var_33 = ((((((arr_12 [i_3 - 2] [i_4] [i_4]) & (arr_7 [i_2] [i_2] [i_2])))) - (((min((arr_9 [i_2]), (arr_11 [i_2] [i_3] [i_4]))) & (arr_7 [i_3 - 2] [i_2] [i_3 + 2])))));
            }
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_34 = (((((min((((~(arr_12 [i_2] [i_2] [i_5])))), (max((arr_6 [i_2]), (arr_10 [i_2] [i_5] [i_5]))))) + 9223372036854775807)) << ((((((max((arr_14 [i_5 + 1]), (arr_14 [i_5 - 2])))) + 23642)) - 40))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_35 = (arr_17 [i_7 - 1] [i_5] [i_6] [i_2]);
                            var_36 = (max(var_36, (arr_7 [i_8] [i_8] [i_8])));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_7 [i_2] [i_2] [i_6]);
                            var_37 = (((arr_7 [i_8] [i_2] [i_2]) ? ((min((arr_15 [i_7 + 1] [i_5] [i_5 + 1] [i_7]), (arr_15 [i_7 + 1] [i_5] [i_5 - 2] [i_7])))) : (arr_9 [i_2])));
                        }
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            arr_25 [i_2] [i_5] [i_2] [i_2] [i_9] [i_5] = ((~((max((arr_16 [i_9] [i_9 - 2] [i_9] [i_9 + 1]), (arr_16 [i_9] [i_9 + 1] [i_9] [i_9 - 1]))))));
                            var_38 = (max(var_38, (arr_8 [i_2] [i_2])));
                            var_39 = (min(((((arr_11 [i_2] [i_5 - 2] [i_7 - 3]) && (arr_14 [i_2])))), (max(-1432642970483374715, -1336216691))));
                            var_40 = (arr_10 [i_2] [i_5] [i_7]);
                            arr_26 [i_2] [i_5] [i_6] [i_7] = (((((((arr_4 [i_2]) & (arr_8 [i_5] [i_6]))) / (arr_13 [i_2] [i_7 - 1] [i_7 + 2]))) != ((((((((arr_14 [i_9]) + 2147483647)) >> (((arr_14 [i_2]) + 23603)))))))));
                        }
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            arr_29 [i_2] [i_5] [i_2] [i_2] = (~(((((arr_7 [i_2] [i_2] [i_10]) | (arr_24 [i_2] [i_5] [i_6] [i_7] [i_6] [i_10] [i_2]))) / ((min((arr_28 [i_2] [i_5] [i_6] [i_7] [i_10]), (arr_20 [i_2])))))));
                            var_41 = (arr_12 [i_2] [i_6] [i_7]);
                        }
                        var_42 = (((((+((((arr_15 [i_5] [i_5] [i_6] [i_7]) && (arr_11 [i_5] [i_6] [i_7]))))))) ? ((((arr_23 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_5]) <= (arr_23 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5])))) : (1336216691 * 0)));
                        var_43 = ((max((arr_27 [i_2] [i_5 - 2] [i_7 - 4]), (arr_15 [i_5 - 2] [i_5] [i_6] [i_7]))));
                    }
                }
            }
            var_44 = ((-(((((~(arr_11 [i_2] [i_5] [i_5])))) | (((arr_19 [i_2] [i_5] [i_5] [i_5]) & (arr_7 [i_2] [i_2] [i_5])))))));
            arr_30 [i_2] [i_2] = arr_13 [i_2] [i_2] [i_5];
        }
        var_45 = (min(var_45, ((((((arr_15 [i_2] [i_2] [i_2] [i_2]) * ((((arr_11 [i_2] [i_2] [i_2]) == (arr_20 [i_2])))))) | (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        var_46 = ((((min((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_2]))) + 2147483647)) << ((((((~((((arr_17 [i_2] [i_2] [i_2] [i_2]) == (arr_10 [i_2] [i_2] [i_2])))))) + 25)) - 24)));
        var_47 = (max(var_47, (min((arr_27 [10] [i_2] [i_2]), (max(((min((arr_8 [i_2] [i_2]), (arr_6 [8])))), ((~(arr_11 [i_2] [i_2] [i_2])))))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 15;i_13 += 1)
            {
                {
                    var_48 ^= (arr_32 [i_11]);
                    var_49 = (arr_9 [i_12]);
                }
            }
        }
        arr_41 [i_11] [i_11] = ((!(arr_10 [0] [i_11] [i_11])));
    }
    var_50 = (max(var_50, var_3));
    var_51 = (var_10 ? var_4 : (min(1023, -5305056034961575575)));
    #pragma endscop
}
