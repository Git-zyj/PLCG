/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89441
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_11 -= ((/* implicit */unsigned short) arr_4 [i_1]);
            var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0]))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0]))))) ? ((-(var_3))) : (((((/* implicit */_Bool) 835919067813383229LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) : (1628126517U))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_1)))))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                var_15 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_10)))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_2]) << (((/* implicit */int) arr_5 [i_0] [i_2] [i_3 - 1])))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_4] [i_2] [i_2] [i_0])) << (((((var_4) << (0ULL))) - (2417764285U))))))));
                arr_15 [i_4] [(short)9] [(short)7] = ((/* implicit */short) ((arr_14 [i_0] [i_4] [i_4]) == (arr_14 [9U] [i_2] [i_4])));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-55)) ? (((((/* implicit */int) arr_8 [1] [i_4])) << (((var_4) - (2417764284U))))) : (((((/* implicit */_Bool) -4288034385785552117LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                var_18 = arr_1 [(signed char)7];
                arr_18 [i_0] = ((/* implicit */_Bool) ((unsigned int) 314563035U));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned short i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        {
                            arr_29 [(short)6] [(short)6] [(short)6] [i_7] [i_2] = ((/* implicit */short) 16ULL);
                            arr_30 [i_0] = ((/* implicit */signed char) ((4288034385785552117LL) << (((1031593520) - (1031593519)))));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)37))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_2] [(short)5] = ((/* implicit */signed char) ((unsigned short) (~(arr_6 [(signed char)9] [i_2] [i_9]))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [3U] [i_0])) ? (((unsigned int) var_3)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1628126517U))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -4288034385785552109LL))) ? ((-(((/* implicit */int) arr_5 [i_6] [i_2] [i_6])))) : ((-(((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0]))))));
                }
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_22 = ((/* implicit */int) arr_9 [i_2] [i_10]);
                    /* LoopSeq 1 */
                    for (int i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        arr_41 [2LL] [i_2] [(signed char)2] [i_10] [i_11] [(_Bool)1] = ((/* implicit */long long int) arr_5 [i_11 - 3] [i_6] [8LL]);
                        var_23 = ((/* implicit */long long int) arr_39 [i_0] [i_2] [i_0] [i_10] [i_0] [i_11] [i_10]);
                        var_24 = ((/* implicit */short) var_0);
                        arr_42 [i_0] [i_0] = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_17 [i_0] [i_2] [(_Bool)0] [i_11])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_43 [(_Bool)1] [i_10] [(_Bool)1] &= ((/* implicit */short) ((arr_22 [i_11 - 2] [i_11 - 3] [i_11 + 1] [i_11 - 3]) << (((arr_22 [i_11 - 2] [i_11 + 1] [i_11 - 3] [(short)3]) - (2375548842U)))));
                    }
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0]))));
                    arr_47 [i_12] [i_12] [i_12] [(unsigned char)10] = ((/* implicit */signed char) ((int) arr_44 [i_0] [i_2] [i_6] [i_12] [i_12]));
                }
                for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) 15259879357015128668ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_6]))))));
                    arr_51 [i_0] [i_2] [i_6] [i_13] = ((((/* implicit */_Bool) -1031593520)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (short)-1)));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_6] [i_13])) ? ((+(((/* implicit */int) arr_50 [i_13] [i_13] [i_13] [i_13] [1U] [i_13])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_54 [i_13] [i_2] [0] [i_13] [(unsigned short)3] = ((/* implicit */signed char) ((1628126511U) & (((/* implicit */unsigned int) ((int) (_Bool)0)))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_0] [i_2] [i_6] [i_13] [i_14])) ? (-4288034385785552125LL) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [4] [i_6] [i_0] [i_14]))))))));
                    }
                }
            }
        }
        /* LoopSeq 3 */
        for (int i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            arr_57 [(short)0] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_15])) == (((/* implicit */int) var_0)))))));
            arr_58 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (short)32749);
            arr_59 [i_15] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_6)))) ? (arr_39 [i_0] [i_0] [i_0] [i_15] [i_0] [i_15] [i_15]) : (((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0])))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((77694021U) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        arr_66 [i_16] [i_16] [i_16] = ((/* implicit */signed char) arr_55 [(signed char)5]);
                        arr_67 [i_0] [i_15] [i_15] [i_16] [i_17] = ((/* implicit */unsigned short) arr_10 [i_0] [i_15] [i_0] [i_16]);
                        arr_68 [i_0] [i_0] [i_16] = ((arr_9 [i_15] [i_17]) << (((((((/* implicit */int) (unsigned short)49015)) << (((361213981U) - (361213976U))))) - (1568456))));
                    }
                } 
            } 
            var_30 ^= ((/* implicit */signed char) arr_34 [i_0] [i_0] [(signed char)2] [i_15]);
        }
        for (unsigned short i_18 = 1; i_18 < 10; i_18 += 1) 
        {
            arr_72 [i_0] [6U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_6))) == (((/* implicit */int) (_Bool)1))));
            var_31 -= (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)10]))))));
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            arr_81 [i_21] [i_21] [i_19] [i_21] [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << ((((+(arr_46 [i_21] [i_21] [i_21] [i_21]))) - (1487200019)))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_6))));
                        }
                        for (unsigned short i_22 = 2; i_22 < 10; i_22 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_22] [i_20] [i_19] [i_19] [(unsigned short)0] [i_0] [(signed char)8])) << ((((~(((/* implicit */int) (_Bool)1)))) + (25)))));
                            var_34 ^= ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) var_1)) / (arr_6 [i_22 - 1] [i_22] [0LL]))));
                            var_35 = ((/* implicit */int) ((long long int) var_7));
                        }
                        var_36 -= ((/* implicit */int) (unsigned short)60911);
                        var_37 = ((/* implicit */int) (unsigned short)3831);
                        var_38 ^= ((/* implicit */long long int) ((((((int) 3305548725U)) + (2147483647))) << (((((/* implicit */int) arr_37 [i_0] [i_0] [4LL] [4LL] [i_0] [i_0])) - (13695)))));
                    }
                } 
            } 
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_8))) << ((((((~(((/* implicit */int) (unsigned short)48995)))) + (49024))) - (13)))));
        }
        for (unsigned short i_23 = 3; i_23 < 9; i_23 += 4) 
        {
            var_40 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_23 - 2]))));
            arr_86 [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_76 [i_0] [11U] [i_0] [(signed char)10] [i_23] [i_23]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_71 [i_23] [(unsigned char)8])) : (((/* implicit */int) arr_13 [i_23] [(unsigned short)8] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_23]))));
        }
    }
    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 1) 
    {
        arr_90 [i_24] = min((((/* implicit */unsigned int) ((unsigned short) 0U))), (((unsigned int) (+(((/* implicit */int) arr_70 [i_24] [i_24]))))));
        arr_91 [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) (signed char)-78))))))) : (((unsigned int) (signed char)105))));
    }
    /* vectorizable */
    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 2) 
    {
        arr_96 [i_25] [(unsigned short)13] = ((/* implicit */short) var_1);
        var_41 = ((/* implicit */unsigned short) arr_94 [i_25]);
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_26 = 1; i_26 < 22; i_26 += 4) 
    {
        var_42 *= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)23)) || ((!(((/* implicit */_Bool) (signed char)28)))))) || (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_98 [i_26] [i_26 + 3])), (1688984979U)))) || (((/* implicit */_Bool) arr_99 [i_26]))))));
        var_43 = ((/* implicit */signed char) (+(((228038739U) << (((/* implicit */int) (_Bool)1))))));
        var_44 *= ((min((((/* implicit */unsigned int) (signed char)125)), (((((/* implicit */_Bool) (signed char)54)) ? (1688984979U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16541))))))) << (((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) << (((((-7941852601590125241LL) + (7941852601590125292LL))) - (51LL)))))) : (((((/* implicit */_Bool) 2302778158450697937LL)) ? (17023713942603988693ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) - (9223372036854775805ULL))));
    }
    /* vectorizable */
    for (unsigned short i_27 = 1; i_27 < 13; i_27 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_28 = 0; i_28 < 16; i_28 += 2) 
        {
            arr_108 [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((arr_101 [i_28]) - (1771336643)))));
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 16; i_29 += 3) 
            {
                for (unsigned short i_30 = 2; i_30 < 12; i_30 += 2) 
                {
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -1039908940)) - (3349605508U)));
                        arr_114 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = ((/* implicit */long long int) ((arr_94 [i_27 + 3]) << (((arr_94 [i_27 + 2]) - (1097922551)))));
                        var_46 += ((/* implicit */unsigned short) (~(arr_106 [i_30 + 1])));
                        arr_115 [i_27] [i_27] [i_27] [i_27] = ((/* implicit */unsigned int) var_1);
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-23)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) / (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
            arr_116 [i_27] [i_27 + 3] = ((/* implicit */unsigned int) arr_113 [(signed char)1] [i_28] [i_27] [i_27]);
            var_48 &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-18))))));
            arr_117 [i_27 - 1] [i_27] [i_28] = ((/* implicit */int) ((unsigned char) arr_93 [i_27 - 1]));
        }
        var_49 += ((/* implicit */unsigned int) ((signed char) ((int) var_4)));
        var_50 = ((/* implicit */signed char) ((long long int) (unsigned char)73));
    }
    for (signed char i_31 = 0; i_31 < 21; i_31 += 1) 
    {
        var_51 ^= ((/* implicit */long long int) 1597948762);
        var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((16U) << (((((/* implicit */int) arr_99 [(unsigned short)6])) - (8692))))))))));
        /* LoopSeq 1 */
        for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_33 = 0; i_33 < 21; i_33 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (signed char i_35 = 0; i_35 < 21; i_35 += 1) 
                    {
                        {
                            var_53 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_118 [(short)0]))))))));
                            arr_132 [i_31] [i_35] [i_34] [i_34] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_130 [i_32] [i_32 - 1] [i_32 - 1] [(_Bool)1] [i_32] [i_32 - 1])) ? (((((/* implicit */_Bool) arr_130 [i_32] [(short)6] [i_32 - 1] [i_32] [i_32 - 1] [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (arr_130 [i_32 - 1] [i_32] [i_32 - 1] [i_32] [i_32 - 1] [i_32]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1663311792))))));
                            var_54 ^= var_5;
                        }
                    } 
                } 
                var_55 *= ((/* implicit */signed char) (~((-(-2092137973)))));
            }
            arr_133 [2ULL] [i_32 - 1] [(signed char)9] = ((/* implicit */long long int) ((int) min((((/* implicit */int) arr_119 [i_31] [i_32])), (((arr_97 [22ULL]) << (((((var_1) + (1129386985))) - (18))))))));
            var_56 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_118 [(signed char)11])) * (((/* implicit */int) arr_128 [i_31] [i_31] [i_31] [i_31] [(_Bool)1] [i_31]))))) * (((((/* implicit */_Bool) arr_98 [i_31] [i_31])) ? (arr_126 [i_32 - 1] [i_32 - 1] [i_32]) : (1688984967U)))))), (min((arr_122 [i_31] [i_31] [1U]), (((arr_93 [i_32]) << (((arr_130 [i_31] [i_31] [i_32] [i_32 - 1] [i_32] [i_32]) - (4128722235U)))))))));
            /* LoopNest 3 */
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                for (int i_37 = 0; i_37 < 21; i_37 += 1) 
                {
                    for (long long int i_38 = 1; i_38 < 19; i_38 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-34))));
                            var_58 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_119 [i_36] [i_32]))) - (((((/* implicit */_Bool) ((signed char) -1058378018))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)77)))) : (((((/* implicit */_Bool) (signed char)127)) ? (1688984979U) : (((/* implicit */unsigned int) -240355980)))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) ((unsigned int) (((-(11192938285958549747ULL))) - (((/* implicit */unsigned long long int) (-(-929583014))))))))));
}
