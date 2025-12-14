/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/960
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
    var_16 = ((/* implicit */signed char) ((unsigned int) var_11));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((3470560486U) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) (-(arr_4 [i_1] [(short)17])))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))))));
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [i_0 - 1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (+(17116184735140217343ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [6ULL] [i_1] = ((/* implicit */int) (unsigned short)26668);
                                var_19 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [(signed char)17] [i_4] [i_0] [i_2]);
                                var_20 = ((/* implicit */unsigned int) arr_2 [i_2] [(unsigned short)15]);
                                var_21 = ((/* implicit */unsigned long long int) (signed char)1);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) ((signed char) (-(arr_15 [i_1]))));
                        var_23 = ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (7638098792284305570LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)15224), (((/* implicit */unsigned short) (unsigned char)223)))))));
                        var_24 = ((/* implicit */long long int) var_11);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (arr_6 [i_2 - 1] [i_5] [i_5] [i_0]) : (var_15)))) == (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 469512855U)) : (18446744073709551588ULL)))))));
                    }
                    for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_1] = var_2;
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_26 = (!(((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 8131921440526423954LL))))), (arr_18 [i_1] [i_6 + 2] [i_2 - 1] [i_2 - 1] [i_0 + 2] [i_1])))));
                            var_27 = (!(((/* implicit */_Bool) ((int) var_10))));
                            var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_0] [(signed char)20] [i_1] [i_1] [i_1] [i_1]))) ? (min((((/* implicit */unsigned long long int) (signed char)14)), (5129353320148071645ULL))) : (((/* implicit */unsigned long long int) (-(arr_19 [i_0] [(signed char)10] [(signed char)10] [i_0] [(_Bool)1] [i_0]))))));
                        }
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) 1033685525)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (18446744073709551607ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                arr_30 [i_0] [6U] [i_2 + 1] [20ULL] [i_9] |= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((int) (_Bool)1))))));
                                arr_31 [(unsigned short)4] [i_9] [i_8] [4LL] [i_1] [(unsigned short)4] |= ((/* implicit */unsigned short) max((min((arr_6 [(short)22] [i_2 - 1] [12] [i_9]), (arr_6 [20LL] [20LL] [8] [i_2 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_30 = min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_10] [(short)16] [i_1] [(short)16] [3LL] [i_0]))))), ((-(((((/* implicit */_Bool) arr_20 [i_10] [i_1] [i_10] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5))))));
                    arr_34 [i_1] [i_1] [17U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (17382464821699474692ULL)));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)30052)) : (((/* implicit */int) (unsigned short)65266)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) var_11);
                        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1]))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_3))));
                        arr_37 [9ULL] [9] [i_1] [9ULL] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_10] [i_1]);
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))));
                        var_36 = ((/* implicit */unsigned long long int) min((arr_17 [i_0] [i_12] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]), (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])) ? (var_4) : (arr_17 [i_12] [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 2; i_15 < 21; i_15 += 1) 
                        {
                            arr_50 [i_0 - 1] [i_0 - 1] [(unsigned char)0] [i_14] |= ((/* implicit */long long int) (-(var_2)));
                            var_37 = ((/* implicit */long long int) ((unsigned int) ((arr_38 [i_0 - 1] [i_1] [i_14] [i_14]) << (((((((/* implicit */int) (short)-12932)) + (12954))) - (20))))));
                            arr_51 [i_1] [i_1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(arr_33 [i_15] [(_Bool)1] [17U]))))))));
                        }
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (((-(((/* implicit */int) var_14)))) | (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_16 - 1])))))))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(signed char)18] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 - 1])) % (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2]))))) ? ((+(arr_25 [i_0 - 1] [i_16 - 1]))) : (var_15)));
                            arr_55 [i_1] [i_1] = ((/* implicit */signed char) max((16604304923947674544ULL), (3ULL)));
                            arr_56 [i_0] [i_1] [i_12] [i_12] [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30043))));
                        }
                        for (unsigned int i_17 = 3; i_17 < 22; i_17 += 2) 
                        {
                            arr_59 [i_0] [12LL] [i_12] [i_14] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_15 [(signed char)14]))));
                            arr_60 [(signed char)7] [i_1] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)0))));
                            var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_16 [i_0] [i_1] [i_17 + 1] [i_1] [i_17]))))));
                        }
                        var_42 = ((((unsigned int) arr_40 [i_0] [i_0])) % (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (469512857U))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_40 [(unsigned char)19] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) var_6)))))) : (((((/* implicit */_Bool) var_3)) ? (var_15) : (arr_17 [i_1] [i_1] [i_12] [i_1] [i_1] [(unsigned char)9])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((((/* implicit */_Bool) (~(19U)))) ? (arr_27 [i_0] [13U] [(unsigned short)8] [i_0] [i_14] [i_14] [i_18]) : (((/* implicit */unsigned long long int) arr_6 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]))))));
                            arr_63 [i_1] [i_1] [i_14] [i_12] [i_1] [i_1] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_9)) : (var_10))))) ? ((~(((arr_27 [3LL] [i_1] [3LL] [13U] [18U] [18U] [(signed char)10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0 - 1] [21ULL] [i_0 - 1]))) == (arr_35 [i_0 - 1] [i_1] [i_0 - 1])))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_57 [i_0 - 1] [i_1] [i_12] [i_19] [(unsigned short)6]))));
                        var_45 = ((/* implicit */unsigned short) var_1);
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_46 = ((/* implicit */int) ((unsigned short) arr_57 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0]));
                            var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_0] [i_1] [(unsigned short)8] [i_19] [i_20] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_12] [i_12] [i_20]))))))));
                            arr_72 [i_0 + 1] [i_1] [i_12] [i_12] [i_19] [(short)11] [i_20] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_62 [i_0] [i_1] [i_12] [(_Bool)0] [i_20]))))));
                            var_48 = ((/* implicit */short) ((int) arr_39 [i_1] [i_0] [i_0] [i_1]));
                            var_49 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (1517936968)));
                        }
                        for (unsigned long long int i_21 = 2; i_21 < 19; i_21 += 1) 
                        {
                            var_50 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_65 [i_0] [i_0 + 2] [(unsigned short)20] [i_0 + 1] [i_0] [i_0 - 1]))));
                            arr_77 [21LL] [21LL] [i_12] [11] [i_1] = ((/* implicit */short) ((_Bool) var_10));
                            arr_78 [i_1] [i_1] = ((/* implicit */short) arr_17 [i_0] [i_0 - 1] [i_1] [i_12] [i_0 - 1] [i_21 + 4]);
                        }
                    }
                    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned int) var_15);
                        var_52 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [2ULL] [i_1])) : (arr_24 [i_22] [i_1] [i_1] [i_0 + 2]))))) | (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))));
                        var_53 = ((/* implicit */long long int) ((short) ((unsigned long long int) arr_28 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1])));
                    }
                    var_54 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_74 [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2] [10LL])) ? (((/* implicit */int) arr_74 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_74 [i_0 + 2] [i_0 + 2] [i_1] [i_12] [i_0 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 3895965928970329091ULL))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_23 = 1; i_23 < 19; i_23 += 3) 
                    {
                        arr_84 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)-11287)), (3ULL)));
                        arr_85 [i_0] [i_1] [i_12] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [12LL] [i_23] [i_23 + 2] [14])) ? (var_6) : (((/* implicit */long long int) arr_4 [i_1] [i_0])))) >> (((var_15) + (2269640315749816820LL))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_24 = 2; i_24 < 20; i_24 += 4) 
                    {
                        var_55 = arr_43 [i_0] [6ULL] [i_12] [i_24 + 1];
                        /* LoopSeq 2 */
                        for (signed char i_25 = 4; i_25 < 19; i_25 += 4) 
                        {
                            var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15224)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_12] [i_24 - 2] [i_24 - 2] [i_0] [(unsigned short)2]))) : (var_7)));
                        }
                        for (unsigned int i_26 = 0; i_26 < 23; i_26 += 4) 
                        {
                            var_58 = ((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 1]);
                            arr_94 [i_1] [i_24 - 2] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(3ULL)));
                        }
                    }
                }
            }
        } 
    } 
}
