/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64254
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((max((arr_7 [i_3]), (arr_7 [i_4]))) <= (((/* implicit */unsigned long long int) var_9))));
                            var_17 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_4] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : (var_6)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) arr_14 [i_3]);
                            var_18 = ((/* implicit */signed char) var_4);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(var_11)))))) ? (max((((/* implicit */unsigned int) -879312848)), (4063920477U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [(short)10] [i_2] [i_3] [i_6]))))))));
                            arr_22 [i_0] [i_0] = ((arr_4 [i_0]) >> (((var_6) + (8300980838609034906LL))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_25 [i_7] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_3] [i_1] [i_0]))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-8309359921756028187LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (8145205967663266309LL) : (var_1)))) : (min((var_8), (((/* implicit */unsigned long long int) var_2))))))));
                            var_20 -= ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_7]);
                            var_21 = (((!(((/* implicit */_Bool) 227488854U)))) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (max(((~(4880072784025748602ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (-1499400918)))))));
                            var_22 += ((/* implicit */_Bool) arr_3 [i_7] [i_2] [i_0]);
                        }
                        var_23 *= arr_9 [i_2];
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1499400918)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))))))));
                            var_25 ^= (-((~(((((/* implicit */_Bool) 4067478459U)) ? (var_2) : (((/* implicit */unsigned int) arr_12 [i_1] [5LL] [i_1] [i_1] [i_1])))))));
                            var_26 = ((/* implicit */unsigned int) var_13);
                        }
                        for (short i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (-(var_14))))) ? (((/* implicit */unsigned long long int) arr_19 [(unsigned char)4] [i_3] [i_3])) : (min((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])), (arr_21 [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_0]))))))));
                            var_28 = ((/* implicit */unsigned char) 6913003127061375739ULL);
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */unsigned long long int) 227488876U)) - (((((/* implicit */_Bool) ((var_1) - (var_11)))) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_9))))) : ((~(var_8))))))))));
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (((!(((((/* implicit */unsigned long long int) var_12)) < (arr_21 [i_0] [i_1] [i_2] [i_2] [(short)8] [i_10]))))) ? (((((/* implicit */_Bool) max((var_11), (var_11)))) ? (((/* implicit */unsigned long long int) var_12)) : (arr_4 [(short)2]))) : (11533740946648175873ULL))))));
                            var_31 ^= ((/* implicit */int) (signed char)-123);
                            var_32 = ((/* implicit */short) (unsigned char)43);
                        }
                        var_33 = ((/* implicit */unsigned int) min((var_33), (var_9)));
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) (-(max((((/* implicit */int) (unsigned char)162)), (((((/* implicit */_Bool) 13512004216372847851ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)11418))))))));
                            var_35 *= ((/* implicit */unsigned int) (-(((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1016)))))));
                        }
                        for (short i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                        {
                            var_36 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_13)), (var_10))))))), (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                            arr_41 [i_0] [(signed char)10] [8] [i_0] [(signed char)10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13] [i_11])) ? (((/* implicit */int) arr_34 [i_13] [(signed char)6] [10U] [8ULL] [(signed char)6] [i_0])) : (((/* implicit */int) max((var_10), (var_10))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11412)) ? (((/* implicit */int) (signed char)25)) : (1570368851)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 11533740946648175883ULL)) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) : (((/* implicit */int) arr_27 [i_13] [(signed char)8] [(signed char)8] [i_2] [(signed char)8] [i_0]))));
                            arr_42 [i_0] [7ULL] [10] [i_11] [i_13] = ((/* implicit */long long int) arr_36 [i_2]);
                            arr_43 [i_0] [i_1] = ((/* implicit */short) var_3);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((short) min((11533740946648175877ULL), (((/* implicit */unsigned long long int) var_2))))))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), ((~(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)84)) ? (6913003127061375742ULL) : (18446744073709551609ULL))) : (max((4934739857336703764ULL), (((/* implicit */unsigned long long int) 8938652283429892014LL))))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
                            var_39 *= ((/* implicit */unsigned long long int) (-(((unsigned int) (~(0ULL))))));
                            var_40 += ((/* implicit */signed char) arr_1 [i_0]);
                        }
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) min(((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (arr_1 [i_2]))))), (arr_1 [i_2]))))));
                    }
                    for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned int) 8365560385995656393ULL);
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0] [3LL]);
                            arr_56 [i_17] [i_0] [i_2] = ((/* implicit */short) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) - (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_47 [i_0] [i_1] [i_2] [i_16] [i_0])) : (var_6))) : (((/* implicit */long long int) arr_9 [i_0])))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                        {
                            arr_59 [i_0] [i_1] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) 10081183687713895221ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) (short)14124))))) : (max((arr_1 [i_0]), (min((var_1), (((/* implicit */long long int) (signed char)66)))))));
                            var_44 *= ((((/* implicit */_Bool) max((var_12), (max((((/* implicit */unsigned int) arr_44 [i_0] [i_0] [i_0] [(_Bool)0] [i_18])), (arr_15 [6ULL])))))) ? ((~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 753229337)) : (11533740946648175874ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_12), (((/* implicit */unsigned int) var_13)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16] [10U]))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_19 = 1; i_19 < 8; i_19 += 4) 
                    {
                        arr_62 [i_0] [i_0] = ((((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [i_1] [i_2] [i_19])) + (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)9084)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_15)))));
                        arr_63 [i_19] [i_0] [i_2] [(signed char)6] [i_0] [7] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)111)), (1499400907)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                    {
                        for (short i_21 = 0; i_21 < 11; i_21 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_11 [i_21] [i_21] [i_20] [i_1] [i_1] [i_0])) ? (((/* implicit */int) ((unsigned char) arr_64 [i_0] [i_1] [i_1] [i_0] [i_1]))) : (((/* implicit */int) (short)-4422)))), (((((/* implicit */_Bool) (short)-11437)) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) 3409868532670825591LL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_58 [i_0] [i_1] [i_2] [i_2] [i_21]))))))));
                                var_46 = ((/* implicit */signed char) var_10);
                                arr_69 [i_0] [i_21] [i_21] |= ((/* implicit */int) ((long long int) arr_24 [i_20]));
                                arr_70 [i_0] [i_1] [i_2] [i_20] [(signed char)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((7692185221354543705ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4442))))))));
                                var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (+(var_9)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                        {
                            {
                                arr_76 [i_0] [i_0] [i_2] [8ULL] [i_22] [i_23] [8ULL] = ((/* implicit */short) ((_Bool) var_11));
                                var_48 |= (!(((/* implicit */_Bool) max((var_3), (((/* implicit */int) ((short) var_14)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 1) 
    {
        for (short i_25 = 2; i_25 < 20; i_25 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        {
                            var_49 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_84 [i_25] [i_25] [i_25 + 1] [i_27] [13LL])))) ? (max((((/* implicit */unsigned long long int) ((signed char) (signed char)-1))), (3609274142474981310ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)9069)) : (((/* implicit */int) var_10))))), ((-(var_11))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_28 = 0; i_28 < 24; i_28 += 1) /* same iter space */
                            {
                                var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-98))))))))));
                                var_51 = ((/* implicit */unsigned int) ((short) 4166465637U));
                            }
                            for (unsigned char i_29 = 0; i_29 < 24; i_29 += 1) /* same iter space */
                            {
                                var_52 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 607153039546610041ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-23LL))))) ^ (((/* implicit */long long int) 1250108511))));
                                var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)191)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-13595)) : (((/* implicit */int) var_15))))))) ? (max((((/* implicit */unsigned long long int) arr_87 [i_24] [i_27] [i_26] [i_27] [i_29] [(_Bool)1])), ((~(arr_79 [i_25 + 4] [i_24]))))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_10)), (var_12))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_30 = 0; i_30 < 24; i_30 += 4) 
                {
                    for (unsigned char i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        for (unsigned long long int i_32 = 2; i_32 < 22; i_32 += 4) 
                        {
                            {
                                arr_99 [i_24] [i_24] [i_24] [(unsigned char)12] [i_31] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_89 [i_31] [(short)22] [i_25 + 3] [22] [i_25 + 1] [i_25] [i_25 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (arr_94 [i_32] [i_31] [11ULL] [i_30] [i_25] [(short)18])))) : (var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))));
                                var_54 = ((/* implicit */unsigned int) (short)1074);
                                arr_100 [i_31] [i_32] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (short)5956)))));
                                var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_98 [i_31] [i_25 - 2] [i_30] [i_31] [i_32] [i_32]) % (arr_98 [i_24] [i_25 + 2] [i_30] [i_30] [i_25 + 2] [i_32 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (((((/* implicit */_Bool) arr_98 [(unsigned char)10] [5U] [i_24] [i_31] [i_32 - 1] [i_32 + 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_24] [i_24] [i_30] [i_31] [i_24]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
