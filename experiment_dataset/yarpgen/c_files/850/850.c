/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = 1;
                            var_14 = (((((arr_7 [7] [19] [i_3 - 1]) ? var_3 : 3176597558342606415)) % var_11));
                        }
                    }
                }
                var_15 = -5262357679576884775;

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_16 = min(((var_2 ^ (min(1, 2336031027530883055)))), ((max(1, (arr_10 [i_0] [i_0] [i_4])))));
                    var_17 |= (arr_10 [i_4] [i_4] [0]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = 2648134462205416067;
                                var_19 |= (((((((arr_13 [1] [i_4] [i_4]) >= 1)))) == ((1 ? 4 : 9223372036854775805))));
                                arr_18 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                                arr_19 [1] [i_4] [i_4] [i_0] [0] [i_1] = (((arr_4 [5]) ? (((arr_3 [3] [i_6]) ? (arr_3 [i_0] [11]) : (arr_3 [i_1] [i_6]))) : var_4));
                            }
                        }
                    }
                }
                arr_20 [i_0] [18] = (((arr_8 [i_0]) ? (max((arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), 1)) : (((min((max(0, (arr_14 [i_0] [14] [i_0] [7]))), (arr_8 [i_0])))))));
            }
        }
    }
    var_20 = (var_1 != -5413655338519562814);

    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_21 = ((~(((arr_13 [i_7 - 1] [13] [i_7]) ? -4868365799114826065 : (arr_13 [9] [i_7 - 1] [i_7 - 2])))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        var_22 = ((((((max(104, var_2))) || ((min(var_5, (arr_12 [i_7])))))) ? ((min(-1015387411065166988, (arr_13 [i_7 - 2] [i_9] [6])))) : (((~(((arr_8 [19]) ? (arr_5 [i_9] [i_9]) : var_8)))))));
                        var_23 *= (((arr_10 [i_8] [i_8] [i_10]) ? (((-4699202278877645695 ? var_8 : (arr_10 [i_7 + 1] [i_8] [12])))) : (((arr_8 [1]) ? var_3 : 1))));
                        var_24 = ((-((min((arr_24 [i_7 - 1]), (arr_1 [i_7 + 1]))))));
                        var_25 *= (564591170615325201 % 20);
                    }
                }
            }
        }
        var_26 = -1002843608998033470;
    }
    for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((var_2 == (arr_1 [13]))))));
        var_28 = (max((~14643), (((!(arr_27 [i_11] [i_11 - 1] [i_11]))))));

        /* vectorizable */
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 19;i_14 += 1)
                {
                    {
                        var_29 = (max(var_29, ((((arr_39 [i_13 + 2] [i_12 - 2] [i_11 - 2]) ? (arr_39 [i_13 + 2] [i_12 + 2] [i_11 - 1]) : (arr_39 [i_13 - 1] [i_12 - 2] [i_11 - 1]))))));
                        arr_44 [i_11] [i_11] = (!0);
                        var_30 = (max(var_30, (((1 ^ ((1 ? -185201076 : 1)))))));
                    }
                }
            }
            var_31 = (((arr_5 [4] [i_12]) ? (arr_41 [i_12 + 3] [i_12 + 4] [i_11 + 1]) : (((60 ? 95 : 1)))));
            var_32 = (((arr_4 [i_11 + 1]) ? (arr_42 [i_12 - 2]) : (arr_8 [i_11 - 2])));
        }
    }
    #pragma endscop
}
