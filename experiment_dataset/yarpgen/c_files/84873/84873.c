/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 |= ((((((!1) + 406169250))) ? (((((arr_7 [i_0] [i_1] [i_2] [i_3] [i_1]) && var_1)))) : ((max(-1, 0)))));
                        arr_9 [i_0] [4] [0] = (((min((9223372036854775785 ^ 1466525082), var_11)) >> (var_3 - 34913)));
                        var_16 = (min(var_16, (arr_5 [4] [4] [i_2])));
                        var_17 = var_11;
                    }
                }
            }
        }
    }
    var_18 = var_1;

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_19 = (arr_2 [i_4]);
        var_20 -= (max(-var_4, (min((4294967295 >= var_8), (max(2759503468, (arr_4 [i_4] [i_4] [i_4])))))));
        arr_13 [i_4] [i_4] = ((((arr_4 [i_4] [9] [i_4]) + 9223372036854775807)) << (((arr_4 [i_4] [3] [i_4]) - 491578405)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_16 [i_5] = (((((var_3 ? (arr_15 [i_5]) : (arr_15 [i_5])))) ? 9223372036854775785 : var_8));
        arr_17 [i_5] = (((arr_14 [i_5]) ? -4825645423451241256 : (arr_15 [i_5])));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_21 = (max(var_21, 15582167349862395329));
            arr_22 [i_7] = (max((((arr_19 [i_6] [1]) >= var_4)), (((33 - 1085784814) <= (min((arr_1 [i_6]), var_13))))));
        }
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            arr_26 [i_6] [i_6] [i_6] = -1535463820;

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                var_22 = ((((var_11 ? var_3 : (arr_4 [i_8 - 1] [i_9] [i_9 - 1]))) < var_2));
                arr_29 [i_9] = (min(2864576723847156287, (((!(var_0 * 2759503476))))));
                var_23 &= (arr_7 [3] [3] [i_8] [3] [i_9 + 1]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 9;i_11 += 1)
                    {
                        {
                            arr_35 [i_6] [11] [i_9] [1] [i_10] [i_11 + 2] = (15582167349862395339 | var_2);
                            var_24 = ((15582167349862395346 == (((arr_2 [i_6]) ? (max((arr_34 [i_8 + 1] [i_9]), 1535463827)) : var_0))));
                            var_25 = 2864576723847156303;
                            arr_36 [i_6] [i_8 - 1] [i_9] [i_9 - 1] [1] [i_11] = ((~(((arr_21 [i_11 + 2]) ? var_0 : (arr_30 [9] [i_10] [i_10])))));
                            var_26 = (max(var_26, (arr_31 [i_6] [i_9 - 1] [i_11])));
                        }
                    }
                }
                arr_37 [i_6] [i_9] = var_11;
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                arr_41 [i_6] [i_6] [i_6] [i_12] |= ((min(var_3, var_12)) << ((var_4 ? (arr_34 [i_6] [i_12]) : (arr_3 [i_6] [i_12]))));
                arr_42 [3] [i_12] [i_12] [i_8] = 2759503475;
                arr_43 [i_6] [i_6] = var_4;
                arr_44 [6] [i_8] [i_8] [i_8] = var_6;
                var_27 = (min(var_27, (((((arr_0 [i_8 + 1] [i_6]) < (arr_0 [i_8 + 1] [i_8])))))));
            }
        }
        var_28 = (min(var_28, (arr_30 [i_6] [i_6] [i_6])));
    }
    var_29 |= 2759503477;
    #pragma endscop
}
