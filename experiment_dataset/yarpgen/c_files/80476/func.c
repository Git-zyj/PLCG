/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80476
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2] [i_1]))));
                    arr_10 [7LL] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 3])) && (((/* implicit */_Bool) var_12))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) -1143715854527575367LL)) && (((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_2 - 3] [i_1]))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) ^ (((/* implicit */int) arr_11 [i_3] [i_2 - 3] [i_1] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [5LL] [5LL] [i_3] [i_3] [i_4] = ((/* implicit */_Bool) ((long long int) ((var_5) && (((/* implicit */_Bool) 2447836009204400548LL)))));
                            var_15 -= ((/* implicit */unsigned char) ((arr_5 [i_3] [i_4]) && (((/* implicit */_Bool) var_9))));
                        }
                        var_16 -= arr_14 [i_0] [i_1] [i_2] [i_2] [i_3];
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1])))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((_Bool) var_4));
                        var_19 = ((/* implicit */int) -7988515565539212336LL);
                    }
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (arr_14 [i_1] [i_6] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
                        arr_23 [i_0] [i_1] [i_2 - 3] [i_6] = ((/* implicit */int) ((arr_21 [(signed char)20] [i_2] [i_2 + 1] [i_2 - 1]) && (((arr_19 [i_0] [i_1] [i_1] [i_2] [(_Bool)1]) && (arr_21 [i_0] [i_1] [(_Bool)1] [i_6])))));
                        arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 1] [i_2] [i_6])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_6] [i_2 - 2] [i_6])) : (156491933)));
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-2447836009204400548LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)16091))))))) <= (4885243084765033756ULL)));
                        arr_29 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */int) (_Bool)1);
                        arr_30 [i_0] [(unsigned char)7] [(_Bool)1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57974)) && (((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_2] [i_1] [i_0] [i_0])))))));
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [20LL] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)17108)) : (((/* implicit */int) var_7))))) ^ (arr_3 [i_2 - 1])));
                        var_22 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_2)))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_7 [12U] [i_2] [i_2 - 3] [i_2 + 1]))))));
                        var_24 += ((/* implicit */long long int) ((signed char) var_11));
                    }
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) var_8);
                            var_26 = ((/* implicit */long long int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_9)) : (4885243084765033756ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_26 [(unsigned char)9] [i_9] [(_Bool)1] [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned int) var_12)))));
                            arr_41 [i_9] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) ^ (((/* implicit */int) arr_32 [i_2 - 3] [i_2 - 2] [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 2]))));
                            var_29 = ((/* implicit */signed char) (_Bool)1);
                        }
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            arr_45 [i_12] [i_2] [i_12] = ((unsigned int) arr_18 [i_0] [i_0] [(_Bool)1] [i_2 - 3]);
                            var_30 = ((arr_36 [i_2 - 3]) ? (((/* implicit */int) arr_36 [i_2 - 2])) : (((/* implicit */int) arr_36 [i_2 + 1])));
                            var_31 = ((/* implicit */_Bool) (~(var_3)));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1709858016U)) ? (var_11) : (0U))))))));
                        }
                        arr_46 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2])) ? (arr_17 [i_9] [i_2] [i_1] [i_0]) : (arr_22 [i_2 - 3] [i_2 - 2] [i_2] [i_2 - 1])));
                    }
                }
                arr_47 [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (_Bool)1)), (1610612736U))) ^ ((+(((((/* implicit */_Bool) 8691189083783599624LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    arr_51 [i_0] [i_1] [i_13] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        arr_55 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(2447836009204400562LL))))))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_14])) ? (((((/* implicit */_Bool) 2447836009204400553LL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_42 [i_0] [i_1] [i_14] [i_14] [i_13] [i_14])))) : ((~(((/* implicit */int) arr_42 [i_0] [i_1] [i_1] [i_14] [i_0] [i_1]))))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_53 [i_0] [i_0] [i_0])))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) 1213166970)) : (11184920286455693835ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_14] [i_13] [(_Bool)1] [1LL] [(_Bool)1] [i_0])))))) && (((/* implicit */_Bool) -3705136847806829229LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_13] [(_Bool)1] [i_15]))) : (arr_16 [i_0])));
                        arr_58 [i_0] [(_Bool)1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (((~(var_11))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_8))))))));
                        /* LoopSeq 2 */
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */_Bool) arr_61 [i_0] [i_0] [(unsigned char)17] [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            var_37 *= (!(((/* implicit */_Bool) 1108307720798208LL)));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) var_7))));
                            arr_63 [14LL] [i_1] [(_Bool)1] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            arr_66 [i_17] [15LL] [i_15] [i_13] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) var_2);
                            var_39 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)223)) && ((_Bool)1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))));
                            arr_67 [i_17] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) -8947489111460302895LL)) ? (17214828736288181913ULL) : (((/* implicit */unsigned long long int) 8791422700846959341LL)))) : (((/* implicit */unsigned long long int) var_3))));
                        }
                        var_40 = ((/* implicit */long long int) min((var_40), ((-(var_8)))));
                    }
                    var_41 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_42 [i_0] [i_1] [i_1] [i_13] [i_13] [i_13])))))))) <= (((17214828736288181913ULL) ^ (((/* implicit */unsigned long long int) -2447836009204400548LL))))));
                }
                /* vectorizable */
                for (unsigned char i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    arr_70 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2447836009204400548LL)) && (((/* implicit */_Bool) arr_59 [i_18] [i_18 + 1] [i_18 + 1]))));
                    var_42 += ((/* implicit */_Bool) (~(arr_53 [i_18 + 1] [i_18 + 1] [i_18 + 1])));
                    /* LoopSeq 2 */
                    for (int i_19 = 1; i_19 < 20; i_19 += 4) 
                    {
                        arr_73 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_18 - 2]))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (+(8947489111460302895LL))))));
                        var_44 -= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_0] [i_1] [i_18 - 2] [i_18 + 1] [0ULL] [i_19 + 1]))));
                        arr_74 [4U] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44081))))))) : (((arr_37 [i_0] [i_1] [i_18] [i_19]) ? (arr_56 [i_0] [(_Bool)1] [(unsigned char)4] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_0] [i_0] [i_18] [(unsigned char)21] [i_18] [i_1] [i_0])))))));
                    }
                    for (int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        var_45 = ((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_18 - 2]))));
                        /* LoopSeq 4 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_80 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] |= (+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))))));
                            var_46 = ((/* implicit */int) ((((/* implicit */long long int) arr_65 [i_0] [i_1] [i_18] [i_18] [6U] [i_21])) ^ (arr_40 [i_0] [i_0] [i_1] [i_18 + 1] [i_18] [i_18] [i_21])));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_47 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) 3519449175736987993LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_22] [i_20] [i_20] [i_18] [i_1] [i_0])))));
                            var_48 = ((/* implicit */unsigned char) ((arr_64 [i_18 - 1] [i_18 - 2] [i_18] [i_18 + 1] [i_18 + 1] [i_18]) ^ (arr_64 [i_18 - 2] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 2] [18LL])));
                        }
                        for (signed char i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [18LL] [9U] [i_18] [i_20] [i_23])) ? (arr_14 [i_23] [i_20] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            arr_88 [i_0] [(_Bool)1] [i_18 - 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_20 [i_18])))) ? (arr_49 [i_0] [i_18 + 1] [i_18] [i_20]) : (((((/* implicit */_Bool) var_9)) ? (-6968869462181620870LL) : (var_8)))));
                            var_50 *= ((/* implicit */_Bool) ((unsigned char) var_8));
                        }
                        for (int i_24 = 0; i_24 < 22; i_24 += 2) 
                        {
                            var_51 = arr_14 [i_24] [i_24] [i_24] [i_24] [i_24];
                            arr_92 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [20] [i_24]))) : (var_8))))));
                            var_52 = ((/* implicit */unsigned short) (-((~(2447836009204400548LL)))));
                        }
                        var_53 = ((/* implicit */unsigned int) (~(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    var_54 = (~(((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_91 [i_18] [i_18])) : (1326333267))));
                }
                for (long long int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    var_55 = (!(((/* implicit */_Bool) (+(-1341102705)))));
                    var_56 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_68 [i_0] [i_1])))) ? (((/* implicit */int) var_0)) : (((((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) (_Bool)1)))) ^ ((+(((/* implicit */int) (unsigned char)112))))))));
                }
                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2)))), (((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) / (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_58 |= ((long long int) max((var_1), (((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) var_12)))))));
    var_59 -= ((/* implicit */_Bool) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_26 = 0; i_26 < 10; i_26 += 2) 
    {
        arr_98 [0] = ((/* implicit */int) max((((((/* implicit */_Bool) 1610612736U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (arr_17 [i_26] [(unsigned short)2] [i_26] [i_26]))), (((((/* implicit */_Bool) arr_17 [i_26] [i_26] [i_26] [i_26])) ? (arr_17 [i_26] [i_26] [(_Bool)1] [i_26]) : (arr_17 [5U] [i_26] [i_26] [i_26])))));
        arr_99 [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)42))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 5508847812695449589LL)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) arr_18 [i_26] [i_26] [(signed char)15] [i_26])))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((/* implicit */int) ((((/* implicit */_Bool) 1231915337421369707ULL)) && ((_Bool)1)))))))));
        var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((long long int) arr_27 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) (unsigned short)44092))))) : ((+(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_27 = 2; i_27 < 9; i_27 += 2) 
        {
            var_61 = ((/* implicit */unsigned long long int) arr_42 [i_27 - 1] [i_27 - 2] [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_26]);
            var_62 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_26] [i_27] [i_27] [19LL] [(_Bool)1])) <= (2447836009204400548LL))))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8947489111460302897LL)) ? (((/* implicit */int) arr_1 [i_26] [i_26])) : (((/* implicit */int) (_Bool)1))))) ^ (arr_48 [i_26] [i_26] [i_26] [i_27])))));
        }
    }
}
