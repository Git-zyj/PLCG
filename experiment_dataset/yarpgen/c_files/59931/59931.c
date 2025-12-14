/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = -14073171902084481958;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (min((arr_1 [i_0]), (!-var_7)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_15 ^= (((arr_9 [i_3] [i_0]) - (arr_9 [i_1] [i_3])));
                            arr_11 [i_4] = 0;
                        }
                    }
                }
                var_16 = (max(var_16, (arr_3 [i_0] [i_1] [i_0])));
                var_17 = (((arr_8 [i_0] [i_1] [i_1] [i_2]) ? var_8 : (arr_3 [i_0] [i_0] [i_2])));
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_18 = (arr_1 [i_0]);
                arr_16 [i_0] [i_0] [i_0] = var_0;
                arr_17 [i_0] [i_0] [i_1] [i_0] = 13;
                arr_18 [i_5] = (9660404962715135326 ? var_7 : ((((!(1 && 1))))));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_19 = (min(var_19, 0));

                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    var_20 = (arr_15 [i_7 + 2] [i_6] [i_1]);
                    arr_23 [i_7] = (~65535);
                    arr_24 [i_0] [i_1] [i_1] [i_7] = (arr_3 [i_7] [3] [i_1]);
                }
                arr_25 [4] [4] [i_0] = (((!var_9) ? (min(6723009413937405139, 0)) : var_1));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_21 |= (((~(11841507349908237285 && 8465339012875410104))));
                            arr_30 [i_8] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] = ((~(((!(3332948510 + var_13))))));
                            var_22 = ((max(((1 ? (arr_8 [i_0] [i_1] [i_8 - 1] [i_9]) : 805471960)), (((!(arr_22 [19] [i_1] [i_1] [i_9])))))));
                            var_23 ^= ((+((((((arr_3 [i_1] [i_8] [i_9]) & -6))) ? 1 : (arr_1 [i_8 + 2])))));
                            var_24 += ((((arr_12 [i_0] [i_0] [i_0]) ? ((max(0, 0))) : var_8)));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_33 [i_0] [i_0] [i_10] = (arr_10 [i_10] [i_10]);

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_25 = -var_10;
                    arr_36 [i_10] [i_10] [i_1] [i_10] = ((~((-(arr_29 [i_11] [i_10] [i_1] [i_1] [i_0] [i_0] [i_0])))));
                    arr_37 [i_0] [i_0] [i_10] [i_11] = var_8;
                    arr_38 [i_0] [i_10] [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_1] [i_0]);
                    arr_39 [i_0] [i_0] [i_10] [i_10] [i_0] [i_10] = ((min(((((arr_8 [i_0] [i_10] [i_1] [i_0]) ? var_1 : 96))), (min(7997695231763200, (arr_1 [i_0]))))));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_42 [i_12] [i_10] [i_10] [i_0] = ((+(((arr_0 [i_12]) + (arr_0 [i_1])))));
                    var_26 = var_3;
                }
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_27 = (max((((arr_12 [i_0] [i_1] [i_13]) ? (((var_4 ? var_9 : -1))) : (min(16759780729449513682, -6120523389595215585)))), ((~(min((arr_14 [i_0] [i_0] [13]), var_13))))));
                    arr_45 [i_0] &= ((~(max(((((arr_10 [i_1] [11]) ? 18205 : (arr_0 [i_10])))), (~var_3)))));
                    var_28 = ((+(((815164804 && var_13) ? (arr_35 [i_10] [i_1]) : var_12))));
                    var_29 = (arr_19 [i_1] [i_1] [i_10] [i_13]);
                    var_30 = (max(var_30, ((((arr_9 [i_0] [i_13]) + ((22701 ? 0 : 10599525688238224903)))))));
                }
            }
        }
        var_31 = (max((((var_5 <= (arr_26 [i_0] [i_0] [i_0] [i_0])))), (((arr_26 [i_0] [i_0] [i_0] [i_0]) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : 65516))));

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            var_32 ^= (max((arr_31 [i_0]), var_0));
            arr_49 [i_14] [i_0] = ((!((min((arr_10 [19] [i_14]), 96)))));
            arr_50 [i_0] [i_14] [i_14] = (arr_35 [i_0] [i_14]);
        }
        var_33 = ((((!((min(23733, 3))))) && ((((arr_12 [i_0] [i_0] [i_0]) ? (arr_32 [i_0] [i_0] [i_0] [i_0]) : (((arr_48 [i_0]) ? var_0 : var_3)))))));
    }
    var_34 = var_1;
    var_35 ^= max((((!(0 || var_1)))), var_13);
    #pragma endscop
}
