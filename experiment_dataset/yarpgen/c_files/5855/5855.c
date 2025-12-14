/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((-(max((arr_5 [i_0]), (-8144993288141689899 * var_5)))));
                                var_22 *= 1169590943;
                                var_23 = (max(var_23, (((!(((~(arr_7 [i_3] [i_3])))))))));
                            }
                        }
                    }
                }
                var_24 = max((min((~var_8), 11122142649398254573)), (arr_2 [i_1]));
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_25 = ((((((!((min(var_19, (arr_5 [i_5])))))))) > 1169590927));
        arr_16 [i_5] [i_5] = (max(-129, (~5390997036943881518)));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {
                        var_26 += 842507532;
                        var_27 += (((min((arr_7 [i_6] [i_7]), (max(660766654, 73)))) != ((min(((-(arr_19 [i_5] [i_5]))), (arr_13 [i_6]))))));
                        var_28 -= (((23 & (max(3634200663, var_18)))));
                        arr_27 [i_5] [i_7] [i_5] = ((!(-13320 == var_12)));
                    }
                }
            }
        }
        var_29 = (min(var_29, -230889384));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_31 [i_9] = -113918543;
        arr_32 [i_9] [i_9] &= (arr_25 [i_9]);

        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_30 += (((arr_34 [i_10]) ^ (~var_11)));

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_31 = ((arr_23 [i_9] [i_10] [i_11]) ? (arr_23 [i_9] [i_10] [i_11]) : (arr_23 [i_9] [i_10] [i_11]));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_32 = -var_15;
                            var_33 = -13;
                            arr_43 [i_9] [i_12 - 2] [i_9] [i_9] [i_9] [i_9] |= ((!(arr_8 [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_11])));
                            arr_44 [i_9] [i_9] [i_9] [i_11] = (arr_7 [i_12] [i_13]);
                        }
                    }
                }
            }
            arr_45 [i_9] [i_9] [i_10] = ((var_8 ? ((~(arr_35 [i_9] [i_9] [i_9] [i_9]))) : (arr_33 [i_10])));
            var_34 = 786432;
            var_35 = (~(arr_9 [i_9] [i_10] [i_9] [i_10]));
        }
    }
    #pragma endscop
}
