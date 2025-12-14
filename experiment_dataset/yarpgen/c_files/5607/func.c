/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5607
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (arr_0 [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9607)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_0] [i_0 - 2]));
        var_10 *= ((/* implicit */short) 3151065248U);
    }
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 2) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(((int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */_Bool) 13077473111158355435ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1984))) : (9187601120290957425ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1]))) : (var_3)))))))));
                            arr_16 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1]))) == (var_0)))), (((unsigned short) var_1))))));
                            var_12 = ((/* implicit */unsigned long long int) min(((~(1287173833))), ((+(max((arr_4 [i_1] [i_1]), (arr_4 [i_4] [i_1])))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_19 [i_1] [i_2] [i_5] [i_2] = max((min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_5])) <= (var_4)))), (max((arr_6 [i_1] [i_2]), (((/* implicit */long long int) arr_5 [i_1])))))), (((/* implicit */long long int) min((arr_10 [i_1]), (((/* implicit */short) ((signed char) 1814797719)))))));
                    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_5] [i_1])) ? (arr_6 [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5])))))));
                    arr_20 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 4; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_14 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)14]))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-16432)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (_Bool)1)))))));
                            var_15 += arr_23 [i_6] [i_5] [i_6] [i_7];
                        }
                        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_8 + 2] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
                            arr_31 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15453))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_5] [i_1] [i_8]))) : (min((((/* implicit */long long int) (_Bool)0)), (var_6)))))));
                            arr_32 [i_1] [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((int) var_3))))), (arr_8 [i_1] [i_1] [i_1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_2] [i_5] [i_6] [i_9]))))));
                            arr_36 [i_5] [i_9] [i_1] [i_5] [i_6] [i_1] [i_6] = (-(var_5));
                            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)32429)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (arr_28 [i_9] [i_1] [i_9] [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_7 [i_9])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) / ((~(6LL)))));
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_5])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) arr_11 [i_1] [i_5] [i_1])))));
                            var_19 = ((/* implicit */short) ((unsigned short) (unsigned short)65535));
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)0)), (min((arr_39 [i_11] [i_10] [i_5] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) (signed char)53))))));
                        }
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4553052620850948957ULL)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) ^ (arr_22 [i_1] [i_2] [i_5] [i_10])))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_2])), (var_0)))) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_2] [i_5] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_10]))) : (-7459192695731146867LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_2]))))))))))));
                        var_22 |= ((/* implicit */int) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31208)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_2] [i_5] [i_5] [i_10] [i_10])))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_5] [i_1])) ? (var_4) : (((/* implicit */int) var_7)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            arr_47 [i_10] [i_1] [i_5] [i_10] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_4 [i_1] [i_1])) : ((~(var_6)))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (signed char)-110)))) + (2147483647))) << (((((/* implicit */int) arr_12 [i_2])) - (38))))))));
                        }
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (unsigned short)64592)) : (((/* implicit */int) (short)14494))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18730))) ^ (-1904407863568993341LL)))) ? ((-(var_5))) : (-6453641051234446762LL))) : (((/* implicit */long long int) (+((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_5])))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */unsigned long long int) 49061025)) < (((unsigned long long int) arr_11 [i_2] [i_2] [i_5])))) ? (((long long int) (unsigned char)67)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (-(-3967579922821074302LL)))))))))));
                        var_26 |= ((/* implicit */short) arr_44 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        arr_57 [i_1] [i_1] [i_14] [i_1] = arr_46 [i_2] [i_2] [i_14] [i_15] [i_14] [i_1];
                        arr_58 [i_1] [i_1] [i_14] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)42849)) ? (((/* implicit */int) arr_39 [i_1] [i_15] [i_1] [i_15] [i_14] [i_1])) : (((((/* implicit */int) (unsigned short)23192)) - (((/* implicit */int) arr_24 [i_1] [i_2] [i_2] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 23; i_16 += 2) 
                    {
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            {
                                arr_66 [i_1] [i_1] [i_14] [i_16 + 1] [i_17] [i_2] [i_17] = ((/* implicit */unsigned int) arr_38 [i_1] [i_14] [i_1] [i_14] [i_2] [i_1]);
                                arr_67 [i_1] [i_1] [i_16] [i_14] [i_1] [i_1] = arr_42 [i_1] [i_1] [i_1] [i_1] [i_17] [i_1] [i_17];
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (unsigned short)8722))));
                }
                for (unsigned short i_18 = 3; i_18 < 21; i_18 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
                        {
                            {
                                arr_78 [i_1] [i_2] [i_18 + 1] [i_19] [i_20] [i_20] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) arr_10 [i_1])) - (((/* implicit */int) var_8)))) + (min((((/* implicit */int) (short)-23769)), (var_4)))))));
                                arr_79 [i_20] [i_1] [i_18 - 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)41753))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_18 + 1] [i_18 - 2] [i_18 + 1] [i_18 + 1])) ? (arr_68 [i_18 + 1] [i_18 - 2] [i_19] [i_19]) : (arr_68 [i_18 + 1] [i_18 - 2] [i_18] [i_18]))))));
                                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_6)))) && (((/* implicit */_Bool) arr_65 [i_20] [i_1] [i_18] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)46618)))), (((/* implicit */int) arr_14 [i_1] [i_1] [i_19] [i_1]))))) : (((((/* implicit */_Bool) ((unsigned char) -4629114814612553900LL))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) arr_72 [i_1] [(unsigned char)13] [i_1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34)))))))));
                            }
                        } 
                    } 
                    arr_80 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) 1952036711974611ULL));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)162)) / (max((max((((/* implicit */int) var_7)), (var_1))), (((/* implicit */int) (signed char)-38))))));
                                arr_87 [i_1] [i_1] [i_1] [i_21] [i_1] |= (unsigned short)40605;
                            }
                        } 
                    } 
                    arr_88 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)12704))))) ? (((((/* implicit */_Bool) 1103685621U)) ? (var_1) : (arr_49 [i_1] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_69 [i_2] [i_2] [i_2])) : (arr_50 [i_1] [i_1] [i_1])))))));
                }
                var_30 ^= ((/* implicit */long long int) arr_83 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2]);
                /* LoopNest 3 */
                for (unsigned short i_23 = 0; i_23 < 24; i_23 += 2) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        for (short i_25 = 0; i_25 < 24; i_25 += 1) 
                        {
                            {
                                arr_96 [i_25] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_55 [i_1] [i_2] [i_23] [i_24]);
                                arr_97 [i_1] = arr_53 [i_1] [i_24] [i_1] [i_1];
                                var_31 = ((/* implicit */int) var_8);
                                var_32 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1])) > (((/* implicit */int) ((unsigned char) (unsigned char)68))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) var_4);
}
