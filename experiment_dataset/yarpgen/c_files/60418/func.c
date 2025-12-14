/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60418
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (unsigned short)12288))));
                                var_13 = ((/* implicit */short) ((signed char) arr_14 [i_0] [i_1 - 1] [i_1 + 1]));
                                var_14 = ((/* implicit */short) ((signed char) 3372435431U));
                                var_15 = ((/* implicit */signed char) var_5);
                            }
                            for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned char) ((unsigned int) var_5));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) ((((/* implicit */int) (unsigned char)8)) > (((/* implicit */int) var_1))))));
                            }
                            for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) <= (((/* implicit */int) ((unsigned char) var_7))))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) ((395897315) != (((/* implicit */int) (unsigned short)53248))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2])))))));
                                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) min((arr_21 [i_0] [i_0] [(signed char)1] [i_3] [i_3]), (((/* implicit */unsigned long long int) -663420916))))))));
                                var_21 = ((/* implicit */unsigned long long int) var_2);
                                var_22 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)253)), (395897315))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)8)) & (((/* implicit */int) (short)-17605))))) ? (((/* implicit */int) var_9)) : (arr_2 [i_0])))));
                            }
                            /* LoopSeq 4 */
                            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) -395897296)), (max((((/* implicit */unsigned int) (_Bool)0)), (3372435431U)))))), (min((arr_22 [i_3] [i_3] [i_2] [i_1 - 2] [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
                                var_24 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_12)) - (-395897282)))));
                            }
                            /* vectorizable */
                            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                            {
                                var_25 ^= ((/* implicit */short) (+(arr_21 [i_8] [i_3] [(unsigned char)11] [(unsigned char)11] [(unsigned char)11])));
                                arr_26 [i_2] [i_3] [i_8] = ((/* implicit */unsigned char) arr_8 [(signed char)15] [(signed char)15] [i_3] [(signed char)15]);
                                var_26 -= ((/* implicit */long long int) ((int) 922531865U));
                                var_27 = ((/* implicit */unsigned char) ((arr_21 [i_0] [i_1 - 2] [i_2] [i_3] [i_8]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_28 &= ((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_0] [i_0] [15] [i_0] [i_0]) / (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) * ((+(((/* implicit */int) (unsigned char)64)))))))));
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 10587158851112007281ULL)) ? (((((((/* implicit */int) (short)-17604)) + (2147483647))) >> (((10587158851112007281ULL) - (10587158851112007278ULL))))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0]))))))))));
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) > (((/* implicit */int) (signed char)79)))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_9])) : (((((/* implicit */_Bool) 16423790612074236969ULL)) ? (arr_23 [i_9] [i_3] [2LL]) : (((/* implicit */int) var_9))))))) & ((~(7859585222597544334ULL)))));
                            }
                            for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                            {
                                arr_31 [i_0] = var_1;
                                var_31 = ((/* implicit */signed char) min((min(((unsigned short)12287), ((unsigned short)12287))), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53263))))) <= (((/* implicit */int) ((10587158851112007281ULL) != (((/* implicit */unsigned long long int) 131071U))))))))));
                                arr_32 [i_0] [(unsigned short)5] [i_2] [(unsigned short)5] [i_0] = ((/* implicit */short) (~(-663420916)));
                                arr_33 [i_3] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_3))), (7859585222597544334ULL))))));
                                var_32 = ((/* implicit */short) var_5);
                            }
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)77)))))));
                            var_34 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((unsigned short) var_1)), (((/* implicit */unsigned short) ((arr_14 [i_0] [i_2] [i_2]) <= (((/* implicit */int) arr_3 [i_0] [i_3]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_35 = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_1)), (18437736874454810624ULL))), (((/* implicit */unsigned long long int) (signed char)-40)))), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1]))));
                    var_36 |= ((/* implicit */signed char) max((max((min((9007199254741006ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_22 [i_0] [i_0] [(short)13] [i_0] [i_11])))))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_37 = ((/* implicit */int) ((unsigned char) var_10));
                        var_38 = ((/* implicit */unsigned long long int) (short)0);
                        var_39 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_36 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1 - 4])) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 131046U))))));
                        var_40 = ((/* implicit */_Bool) (~((-(10569711579028304474ULL)))));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_41 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)14)), (var_3)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_36 [i_1] [i_13] [i_14] [i_14])), ((unsigned short)53254)))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (4294967295U))))))));
                            var_42 = ((/* implicit */short) ((min((max((arr_13 [i_0] [i_1] [i_13] [i_0]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [(signed char)6])))), (((/* implicit */unsigned long long int) min(((short)5152), (((/* implicit */short) (signed char)-95))))))) & (((/* implicit */unsigned long long int) ((((7U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) ? (((/* implicit */int) min((arr_6 [i_0] [3LL] [i_0] [i_0]), ((signed char)-116)))) : (((/* implicit */int) ((131084U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_13] [4ULL] [i_14] [i_15] [i_15])))))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            var_43 = ((/* implicit */int) max((var_43), (min(((-(((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) -1193102846))))))), (((/* implicit */int) (signed char)-40))))));
                            var_44 &= ((/* implicit */signed char) arr_29 [i_0] [i_1] [i_13] [i_14] [i_16]);
                            arr_49 [i_0] [i_16] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((short)18054), ((short)0)))))))));
                        }
                        for (unsigned long long int i_17 = 3; i_17 < 15; i_17 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) (unsigned short)12262);
                            var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) max(((short)32767), (((/* implicit */short) arr_36 [i_14] [i_14] [i_14] [12U]))))), ((unsigned short)12287))))) / (min((1444845158719321489ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_13 [i_0] [i_1] [i_0] [i_17 + 1])))))));
                            var_47 = ((/* implicit */int) arr_6 [(signed char)7] [(signed char)7] [i_1] [(signed char)7]);
                        }
                        for (short i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            arr_55 [i_18] [i_18] [i_14] [i_14] [(signed char)14] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 3042035185U)) ? (17001898914990230137ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5163))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6)))));
                            var_48 &= ((/* implicit */int) ((unsigned char) ((signed char) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 - 1])));
                        }
                        var_49 = ((/* implicit */int) var_6);
                    }
                    for (short i_19 = 3; i_19 < 13; i_19 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 3; i_20 < 13; i_20 += 3) 
                        {
                            var_50 = ((/* implicit */int) var_4);
                            var_51 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), ((+(8461994371274137054ULL)))));
                            arr_61 [(unsigned short)7] [i_1] [i_1] [i_19] [i_19] = ((/* implicit */int) min((var_1), (((/* implicit */signed char) ((((/* implicit */int) arr_29 [(signed char)10] [i_1 - 1] [i_13 - 2] [i_13 - 2] [i_19 + 1])) <= (((/* implicit */int) (short)12288)))))));
                            var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_8)) ? (1444845158719321474ULL) : (((/* implicit */unsigned long long int) 2870825308U)))))) || (((/* implicit */_Bool) max((((int) 7859585222597544335ULL)), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))))))))));
                            var_53 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) var_12)))))), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_21 = 2; i_21 < 13; i_21 += 1) 
                        {
                            var_54 = ((/* implicit */unsigned long long int) ((_Bool) ((17001898914990230127ULL) >> (((/* implicit */int) (_Bool)0)))));
                            var_55 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_1)))));
                            var_56 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_19 - 3] [i_19] [i_19 + 2] [i_19] [i_19 + 1]))) & (arr_40 [i_1] [i_1] [i_19 - 1] [i_21 - 2])));
                            var_57 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) -4828893634152883181LL)) & (3299029710024555700ULL)))));
                        }
                        for (int i_22 = 0; i_22 < 16; i_22 += 2) 
                        {
                            var_58 = ((/* implicit */signed char) var_0);
                            var_59 = ((/* implicit */unsigned long long int) var_7);
                            var_60 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_19] [i_22])))))))) <= (((/* implicit */int) var_4))));
                        }
                        var_61 ^= ((/* implicit */short) max((((0ULL) >> (((7859585222597544334ULL) - (7859585222597544279ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_19])) : (((/* implicit */int) var_9)))) & ((-(((/* implicit */int) var_7)))))))));
                    }
                    for (short i_23 = 3; i_23 < 13; i_23 += 1) /* same iter space */
                    {
                        var_62 = arr_60 [i_1] [i_13] [i_13];
                        var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((arr_12 [i_0] [8LL] [i_13] [(_Bool)1] [(_Bool)1]), (((/* implicit */signed char) arr_11 [i_1]))))), (((unsigned short) 17001898914990230132ULL)))))) != (((long long int) ((int) 17001898914990230127ULL)))));
                        var_64 = ((/* implicit */int) (signed char)15);
                    }
                    var_65 = ((/* implicit */unsigned long long int) max((var_65), (((/* implicit */unsigned long long int) var_2))));
                    var_66 = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_1 + 1] [i_1 + 1] [i_13 + 1])) > (((/* implicit */int) arr_60 [i_1 + 1] [i_1 + 1] [i_13 + 1]))))), (((unsigned short) arr_60 [i_1 + 1] [i_1 + 1] [i_13 + 1]))));
                    /* LoopSeq 2 */
                    for (int i_24 = 0; i_24 < 16; i_24 += 4) 
                    {
                        var_67 *= ((/* implicit */signed char) min((1620522497U), (((/* implicit */unsigned int) ((unsigned char) max(((signed char)-84), (var_8)))))));
                        var_68 = ((/* implicit */unsigned char) arr_7 [i_13] [i_0]);
                        arr_74 [i_0] [i_0] [i_1] [i_13] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_4)))));
                        /* LoopSeq 3 */
                        for (long long int i_25 = 0; i_25 < 16; i_25 += 1) 
                        {
                            arr_77 [(short)3] [i_25] [i_24] [i_1 - 2] [i_1 - 2] [i_25] [i_0] = ((/* implicit */unsigned long long int) var_1);
                            var_69 = ((/* implicit */short) 17001898914990230127ULL);
                        }
                        for (int i_26 = 0; i_26 < 16; i_26 += 3) 
                        {
                            arr_81 [i_0] [i_0] [i_1] [i_13 - 2] [i_26] [i_24] [i_13 - 2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_26] [i_13] [i_1 - 4] [i_1 - 4] [i_26])) >> (((((/* implicit */int) (signed char)96)) - (78)))))) ? (17001898914990230144ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))));
                            arr_82 [i_26] = ((/* implicit */unsigned long long int) var_8);
                        }
                        for (unsigned char i_27 = 0; i_27 < 16; i_27 += 4) 
                        {
                            var_70 = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) var_12)) >> (((arr_40 [i_0] [i_1] [i_24] [i_24]) - (1982051291954850572LL))))))), (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-20539))) > (((/* implicit */int) arr_12 [(unsigned short)2] [i_1 + 1] [i_13] [i_24] [i_27])))))));
                            var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) var_5))));
                            arr_86 [i_0] [i_1] [i_1] [i_0] [i_27] [(signed char)9] [i_27] = (unsigned char)127;
                            var_72 = ((/* implicit */long long int) ((17001898914990230127ULL) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_72 [10] [i_1] [i_13] [i_24])) <= (((/* implicit */int) (unsigned short)55143))))), (min((((/* implicit */long long int) (short)5)), (arr_37 [(short)12] [(short)12] [i_24] [i_27]))))))));
                        }
                        var_73 ^= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)2657));
                    }
                    /* vectorizable */
                    for (unsigned int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 3) 
                        {
                            var_74 = ((/* implicit */unsigned int) 7079382907027991588ULL);
                            var_75 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (17001898914990230141ULL) : (((/* implicit */unsigned long long int) 4294967291U))));
                        }
                        /* LoopSeq 2 */
                        for (int i_30 = 3; i_30 < 13; i_30 += 4) 
                        {
                            arr_95 [i_0] [i_1] [i_0] [0ULL] [1ULL] = ((/* implicit */signed char) arr_53 [i_28] [i_28] [i_13] [i_1] [i_0]);
                            var_76 = ((/* implicit */int) min((var_76), (((((((/* implicit */_Bool) arr_73 [i_13] [i_13])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) & (((/* implicit */int) arr_93 [i_30] [i_30] [i_30 + 1] [i_30] [i_30 + 1]))))));
                            arr_96 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_38 [i_1] [i_13] [i_13 - 2] [i_1] [i_30] [i_30]) != (((/* implicit */unsigned int) ((int) var_4)))));
                        }
                        for (short i_31 = 1; i_31 < 15; i_31 += 1) 
                        {
                            arr_100 [i_13 - 2] [i_13] = ((/* implicit */long long int) 1871459728U);
                            var_77 = ((/* implicit */unsigned int) var_4);
                            arr_101 [i_0] [i_31 + 1] [i_0] [i_31 + 1] [i_31] = ((/* implicit */signed char) (unsigned short)17981);
                            var_78 ^= ((arr_68 [i_0] [i_1 - 3] [i_13] [i_28] [i_31]) <= (arr_68 [i_0] [i_0] [i_13] [i_0] [i_0]));
                            var_79 = ((/* implicit */signed char) ((int) ((int) var_8)));
                        }
                        var_80 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (arr_27 [i_13 - 1] [i_0] [i_0] [i_28] [i_28])));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned short i_32 = 0; i_32 < 16; i_32 += 4) 
                {
                    arr_105 [i_32] = ((/* implicit */signed char) arr_5 [i_0] [i_1 - 4] [i_1 - 4]);
                    var_81 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_32] [i_32])), (17001898914990230127ULL))) > (((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-6)))))))))));
                    var_82 = ((/* implicit */int) arr_92 [i_32] [i_32] [i_32] [i_32] [8] [i_0]);
                    var_83 = 67629635U;
                    var_84 = ((/* implicit */unsigned long long int) (~(max((var_3), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_9)), (var_1))))))));
                }
                for (signed char i_33 = 0; i_33 < 16; i_33 += 4) /* same iter space */
                {
                    arr_109 [i_1] [i_1] [7LL] = ((/* implicit */short) (-(((arr_71 [i_33]) & (((/* implicit */long long int) var_6))))));
                    var_85 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (short)1779)), (arr_23 [i_0] [8ULL] [i_0])));
                }
                /* vectorizable */
                for (signed char i_34 = 0; i_34 < 16; i_34 += 4) /* same iter space */
                {
                    var_86 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned short i_35 = 0; i_35 < 16; i_35 += 3) 
                    {
                        for (signed char i_36 = 0; i_36 < 16; i_36 += 2) 
                        {
                            {
                                var_87 = ((((/* implicit */_Bool) arr_50 [i_0] [i_1] [i_0] [i_34] [8ULL] [i_36] [10ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) != (arr_79 [i_0] [i_34] [i_0] [i_0] [i_0]))))) : (arr_51 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2]));
                                arr_120 [i_34] [i_1] [i_34] [i_34] [i_36] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1 - 3]))));
                            }
                        } 
                    } 
                    var_88 = var_7;
                    var_89 = ((/* implicit */unsigned short) 4294967295U);
                }
            }
        } 
    } 
    var_90 = ((/* implicit */unsigned char) var_1);
    var_91 = ((/* implicit */int) min((var_91), (((/* implicit */int) ((4194288) <= (min((((/* implicit */int) min((((/* implicit */short) (signed char)-119)), ((short)-13)))), (((((/* implicit */int) (unsigned short)17985)) * (((/* implicit */int) var_5)))))))))));
}
