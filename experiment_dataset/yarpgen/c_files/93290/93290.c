/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [1] [i_2] [19] [i_0] [i_0] = (-524287 - (4294967295 >= var_14));
                            arr_12 [i_0] [i_1] [i_0] [i_0] = (var_13 <= -var_10);
                            arr_13 [i_1] [i_1] = var_7;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((!((!(((1 >> (var_13 - 8437858999019354292)))))))))));
                                arr_22 [i_0] [i_0] [i_4] [i_5] = ((((max(32767, 4023327830))) ? 10 : (!8107248696166692071)));
                                var_16 ^= (!var_4);
                                var_17 |= (8492537914197018465 | -15886);
                                var_18 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_19 = var_0;
                                var_20 = (((var_2 ? 14975929934028120473 : 271639465)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_37 [i_1] [i_10] [i_11] = var_8;
                            arr_38 [i_11] [i_10] = 0;
                            var_21 = ((!((max(201, (-114 && 201))))));
                            var_22 = ((min((min(-1, var_3)), var_2)));
                            var_23 *= (-32767 - 1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_43 [i_13] [i_12] [i_1] [i_13] = ((((((((var_5 >> (var_9 - 3410041293)))) ? var_2 : 1538978566))) ? (524287 ^ var_6) : 31));
                            arr_44 [i_0] [i_0] [i_13] [i_0] = ((13835058055282163712 / 20) * ((193 ? 24 : 55)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 0;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 8;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_24 = var_13;
                            arr_56 [1] [i_15] [i_15] [3] [1] = ((-1620717501 ? (~18446744073709551615) : ((((!(!var_5)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 7;i_19 += 1)
                    {
                        {
                            arr_62 [i_19] [9] [i_18] = (~var_7);
                            var_25 = (((min((((7 ? -2 : var_2))), var_1)) - ((((-24 && (var_5 < var_1)))))));
                            arr_63 [i_19] = (~((907382176 ? var_3 : ((58 ? 131 : 2040)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 7;i_21 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((max((((~(2147483648 == 109)))), (255 ^ 4078751094))))));
                            arr_68 [5] [i_15] [i_20] [5] [i_21] = ((var_0 - (min(4924376334918020660, var_12))));
                            var_27 = var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
