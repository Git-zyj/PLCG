/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_17 ? var_2 : var_7)) + (var_6 / 1)))) ? (!254) : (((var_16 % 18446744073709551615) % -var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (arr_8 [8] [i_2] [i_0] [i_0]);

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_20 ^= (arr_8 [i_1] [i_2] [i_3] [i_4]);
                            var_21 = 7252264561194243812;
                            arr_13 [i_3] = (arr_4 [i_0 - 2]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_22 = -4111635384666767659;
                            var_23 = (max(var_23, ((-4111635384666767658 + ((var_7 ? var_3 : 7303888899847124644))))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_24 = (max(var_24, ((((arr_6 [i_0 + 1] [i_0 - 1]) < (arr_6 [i_0 + 1] [i_0 - 1]))))));
                            var_25 = (arr_2 [i_1]);
                            var_26 = 1;
                            arr_19 [i_0] [i_1] [i_1 - 3] [i_2 + 1] [i_3] [i_3] [i_6] = ((~((7252264561194243812 ? (arr_7 [i_2]) : var_5))));
                            var_27 = (min(var_27, (--1)));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_28 = ((~(arr_14 [i_1 + 2] [i_1 - 2] [i_1 + 1] [i_1 + 1])));
                            var_29 -= (!(arr_10 [i_1 + 2] [i_2 + 1]));
                        }
                        arr_22 [i_2] [i_1] = (!1);
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        var_30 = (max(var_30, ((max(var_15, (max(((1 ? (arr_14 [i_0 - 2] [i_0] [i_0 - 1] [i_0]) : 3947313079560608010)), (arr_8 [i_0] [i_1] [i_2] [i_8]))))))));
                        var_31 *= (((((var_6 / (arr_3 [i_8 + 1])))) < (arr_3 [i_8 - 3])));
                    }

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_32 = (min((min(4111635384666767659, -22652)), ((((min(-126, (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2]))) < -69)))));
                            var_33 += var_11;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_34 = (min(var_34, ((((max(((var_7 ? (-2147483647 - 1) : var_2)), (((arr_8 [i_0 - 1] [i_1] [i_2] [i_11]) ? -87 : var_9)))) + ((((arr_16 [i_0] [i_1] [i_2] [i_9]) ? (arr_31 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0 - 2])))))))));
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] = ((!(((arr_5 [i_0 + 1]) < (arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0])))));
                            var_35 = (arr_34 [i_0] [i_1] [1] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_0] [i_0] [i_12] [i_0] = (((((arr_2 [i_0]) ? var_2 : (arr_20 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) % (((var_5 ? (arr_37 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2]) : var_6)))));
                            var_36 = (max(var_36, (~var_12)));
                            var_37 = (min(var_37, (~var_17)));
                            var_38 *= ((-122 / (arr_18 [i_0] [i_0] [i_12] [i_0] [i_0 - 1] [i_0] [i_1])));
                        }
                        var_39 = (min(var_39, (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_9])));
                        arr_39 [i_2 + 1] [i_1] [i_2 + 1] [i_9] = (arr_9 [i_0 - 1]);
                        arr_40 [i_0] [i_0] = (arr_0 [i_2 + 1]);
                    }
                    var_40 ^= ((-(max(((((arr_7 [i_2]) ? var_11 : (arr_31 [i_0] [i_0] [i_0] [0] [i_0 + 1])))), ((2251799813685247 ? -4574856946764271507 : -32))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_41 = ((var_14 ? (arr_34 [i_14] [i_14 + 3] [i_14 + 3] [i_14 + 3]) : (((arr_34 [i_0 + 1] [i_1] [i_1] [i_13]) % (arr_34 [i_0] [i_1 - 2] [i_1 - 2] [i_0])))));
                                var_42 = (3 + 1094610056);
                                var_43 += 7252264561194243812;
                            }
                        }
                    }
                }
                var_44 = (((!-4547642574803050691) ? (((arr_21 [i_1 - 3] [i_1 - 3] [i_1 - 3]) ? (arr_21 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (arr_6 [i_1 - 2] [i_1]))) : ((min((arr_21 [i_1 - 2] [i_1] [i_1]), (arr_31 [i_1 - 3] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))))));
                var_45 = ((+((28016 ? (arr_3 [i_1 - 2]) : 2139011340))));
            }
        }
    }
    var_46 = (max(var_46, (18446744073709551612 % 1)));
    #pragma endscop
}
