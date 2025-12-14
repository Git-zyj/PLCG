/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98704
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
    var_11 &= ((/* implicit */unsigned short) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) var_4);
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)75)), (14675086236160113815ULL)));
                        var_13 = ((/* implicit */signed char) (~(3771657837549437819ULL)));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)31920))))) : (arr_8 [i_2 - 1] [i_1] [i_2] [i_3] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])) == (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_1] [i_0])))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_9 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6]))))))) ? (min((3771657837549437800ULL), (((/* implicit */unsigned long long int) 722377454)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24654)) / (arr_16 [i_1] [i_4] [i_6]))))));
                            arr_23 [i_5] [i_0] [i_0] = ((/* implicit */int) ((((var_7) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */unsigned long long int) ((min((4316281885657685751LL), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)85)) : (arr_14 [i_0] [i_1] [i_1] [i_5]))))))) : ((+(3771657837549437800ULL)))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_10)))) : (min((arr_14 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_0]), (arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_5])))));
                            arr_24 [i_0] [i_1] [i_4] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)104);
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                var_16 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0]))))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) : (var_0))))) << (min((((((/* implicit */_Bool) arr_15 [i_0] [i_1])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_6 [i_7] [i_1] [i_0] [i_0]))))))));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    arr_32 [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_13 [i_0] [i_1] [i_7] [i_8])))) / (arr_31 [i_0] [i_0] [i_8] [i_0])));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (min((((/* implicit */long long int) var_8)), (arr_6 [i_0] [i_7] [i_0] [i_8])))));
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107)))))));
                    var_19 -= ((/* implicit */_Bool) ((unsigned char) min((arr_22 [i_0] [i_1] [i_7] [i_9] [i_9]), (var_3))));
                }
                for (unsigned char i_10 = 4; i_10 < 22; i_10 += 3) 
                {
                    var_20 = ((/* implicit */signed char) (~((~(10777344613462369164ULL)))));
                    var_21 *= ((/* implicit */unsigned char) arr_1 [i_0]);
                }
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1564154369)) ? (((/* implicit */int) (short)-31680)) : (((/* implicit */int) var_10)))) > (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_7] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_7] [i_1] [i_1] [i_1] [i_0])))))))));
                /* LoopSeq 4 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_5)))))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), ((short)-31676)))) : (((/* implicit */int) var_8))));
                    arr_43 [i_1] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_17 [i_11] [i_7] [i_1] [i_1] [i_0])) / (((/* implicit */int) var_1)))));
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)19)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215)) ? (((/* implicit */unsigned long long int) arr_40 [i_0] [i_1])) : (var_3)))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) var_10)), (var_0)))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_7] [i_7] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_40 [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-31691)) : (((/* implicit */int) var_4)))))));
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    arr_46 [i_7] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (short)32767)) << (((((/* implicit */int) arr_7 [i_12 + 1] [i_12] [i_12 + 1] [i_12 - 1])) - (85))))) << (((((/* implicit */int) min((arr_0 [i_0] [i_12 + 1]), (((/* implicit */short) arr_44 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12] [i_7]))))) + (1100)))));
                    arr_47 [i_0] [i_1] [i_7] [i_12] [i_12] = ((/* implicit */unsigned short) (signed char)-125);
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)168)))), (min((((/* implicit */int) arr_0 [i_12] [i_12 + 1])), (((((/* implicit */int) (unsigned char)0)) << (((var_3) - (11522762401635072242ULL))))))))))));
                    arr_48 [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-24))));
                    arr_49 [i_1] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [i_12] [i_7] [i_7] [i_1] [i_0]))) != (arr_2 [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_8 [i_12] [i_1] [i_7] [i_12] [i_0])) : (var_3))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((max((14675086236160113815ULL), (((/* implicit */unsigned long long int) (signed char)-60)))) - (18446744073709551544ULL))))))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        var_27 |= ((/* implicit */short) var_6);
                        arr_54 [i_14] [i_7] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_13 - 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13])))))));
                        var_28 = ((/* implicit */signed char) var_1);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)31679), (((/* implicit */short) (signed char)19))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31675)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (3771657837549437800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)31672))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (short)31694)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), ((unsigned char)203)))))))));
                        var_30 = ((/* implicit */short) (+(min((-367557112512923355LL), (((/* implicit */long long int) (signed char)-91))))));
                    }
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        arr_61 [i_16] [i_1] [i_1] [i_7] [i_7] [i_13] [i_16] = arr_19 [i_0] [i_0] [i_1] [i_7] [i_13] [i_13] [i_16];
                        var_31 *= ((/* implicit */short) var_10);
                    }
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        arr_64 [i_0] [i_1] [i_7] [i_13] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (short)-31673))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_9))) > (((/* implicit */int) ((((/* implicit */int) (short)21139)) > (((/* implicit */int) (short)-31666)))))))) : ((~((~(((/* implicit */int) (_Bool)1))))))));
                        arr_65 [i_7] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-60))));
                    }
                    arr_66 [i_13] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) max((((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7] [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_37 [i_0] [i_0] [i_1] [i_7] [i_13 + 1])), (arr_11 [i_0] [i_0] [i_1] [i_1] [i_7] [i_13]))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_1))));
                    arr_67 [i_0] [i_1] [i_7] [i_7] [i_13] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_1))) > (367557112512923339LL))))))));
                }
                for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    arr_70 [i_0] [i_1] [i_7] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_18] [i_7] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */short) var_10)), (arr_0 [i_0] [i_1]))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */int) min((arr_7 [i_7] [i_7] [i_7] [i_7]), (arr_7 [i_0] [i_1] [i_7] [i_18])))) % ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_75 [i_0] [i_1] [i_7] [i_18] = ((/* implicit */_Bool) var_7);
                        arr_76 [i_19] [i_18] [i_18] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) (signed char)-3);
                    }
                    for (unsigned char i_20 = 2; i_20 < 23; i_20 += 3) 
                    {
                        arr_79 [i_20] [i_20] = ((/* implicit */_Bool) var_4);
                        arr_80 [i_20] [i_20] = ((/* implicit */unsigned short) arr_58 [i_0] [i_1] [i_7]);
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) var_2))));
                    }
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) arr_30 [i_0] [i_0]);
                        arr_83 [i_7] [i_7] |= ((/* implicit */unsigned char) max((var_1), (((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), (arr_37 [i_21] [i_7] [i_7] [i_7] [i_0]))))));
                        var_36 *= ((/* implicit */unsigned char) ((((((unsigned long long int) var_4)) % (((((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) % (var_0)));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_21] [i_0] [i_0] [i_0] [i_0] [i_0]))))) * (((/* implicit */int) max((var_10), ((_Bool)1)))))) : (((((/* implicit */int) arr_42 [i_21 - 1] [i_21 - 1])) / (((/* implicit */int) (_Bool)1))))));
                    }
                }
            }
        }
        var_38 = ((/* implicit */unsigned char) var_10);
        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (-(((((/* implicit */int) var_6)) * (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
    }
    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
    {
        arr_86 [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (short)-4929)) : (((/* implicit */int) (short)21139))))) ? (((/* implicit */int) (unsigned char)16)) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)920)) : (((/* implicit */int) (unsigned char)240))))))) ? ((+((~(var_0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_40 [i_22] [i_22])) : ((+(var_3)))))));
        arr_87 [i_22] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)23)))))))));
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 3) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)124), (var_5)))), ((~(arr_16 [i_22] [i_24] [i_25])))))) ? (((((/* implicit */int) arr_55 [i_24] [i_23] [i_24] [i_25] [i_25] [i_25])) % (((/* implicit */int) arr_59 [i_25] [i_24] [i_24] [i_24] [i_22])))) : (((/* implicit */int) ((short) arr_84 [i_22] [i_22]))))))));
                        var_41 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-94)) ? (9776542269418584305ULL) : (9053702478863537410ULL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_26 = 0; i_26 < 24; i_26 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_27 = 0; i_27 < 24; i_27 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_28 = 1; i_28 < 22; i_28 += 1) 
            {
                arr_105 [i_27] = max((((/* implicit */unsigned long long int) var_8)), ((~(arr_2 [i_28 - 1] [i_26]))));
                var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)16)))) ? (((/* implicit */int) var_6)) : ((((((-(((/* implicit */int) arr_92 [i_26] [i_26] [i_28])))) + (2147483647))) << ((((+(((/* implicit */int) arr_92 [i_26] [i_26] [i_28])))) - (244))))))))));
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 24; i_29 += 3) 
                {
                    for (unsigned short i_30 = 1; i_30 < 21; i_30 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) arr_6 [i_30] [i_29] [i_28] [i_27]))));
                            arr_112 [i_26] [i_27] [i_28] [i_29] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (short)-21140))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_26] [i_26] [i_28] [i_27] [i_30])) ? (((/* implicit */int) arr_78 [i_26] [i_26] [i_27])) : (((/* implicit */int) arr_33 [i_27] [i_30] [i_27] [i_29] [i_28]))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_29 [i_30] [i_30] [i_30] [i_30 + 1] [i_30] [i_30])))))));
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1640634795649345133ULL), (((/* implicit */unsigned long long int) (short)5505))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_17 [i_26] [i_27] [i_28 + 1] [i_29] [i_30]))))) : ((+(var_0)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 1; i_31 < 23; i_31 += 3) 
            {
                for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                {
                    for (int i_33 = 2; i_33 < 22; i_33 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_9), (var_4)))) / (((/* implicit */int) arr_74 [i_26] [i_26] [i_27] [i_27] [i_31] [i_32] [i_33]))));
                            var_46 = ((((/* implicit */_Bool) ((unsigned long long int) arr_106 [i_26] [i_27] [i_31 + 1] [i_33 - 2] [i_33 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_106 [i_27] [i_27] [i_31 - 1] [i_33 - 2] [i_33 + 2]) == (((/* implicit */unsigned long long int) arr_85 [i_31 - 1])))))) : (((arr_106 [i_27] [i_27] [i_31 - 1] [i_33 - 2] [i_33 - 1]) % (((/* implicit */unsigned long long int) arr_85 [i_31 - 1])))));
                            arr_120 [i_26] [i_26] [i_31] [i_27] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1063180281U)) ? ((+(((/* implicit */int) var_4)))) : (arr_62 [i_31 - 1] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_33 - 2])));
                        }
                    } 
                } 
            } 
            arr_121 [i_26] [i_27] [i_26] = ((/* implicit */signed char) (-((~(var_3)))));
            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_116 [i_26] [i_26] [i_26] [i_26])) - (((/* implicit */int) arr_52 [i_26] [i_27] [i_26] [i_27] [i_26] [i_26]))))), (arr_63 [i_27]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)49581))))))))));
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) var_3))));
        }
        arr_122 [i_26] = ((/* implicit */unsigned char) arr_93 [i_26] [i_26] [i_26]);
    }
    var_49 = ((/* implicit */signed char) var_8);
}
