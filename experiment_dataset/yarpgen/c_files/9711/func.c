/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9711
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1152886320234758144ULL)))))) ? (max((((/* implicit */unsigned long long int) ((long long int) var_10))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)8192)), (((((/* implicit */int) var_8)) * (((/* implicit */int) var_10))))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) max((var_0), ((signed char)20)))), (arr_1 [(unsigned short)14])))) >> ((((~(17293857753474793460ULL))) - (1152886320234758140ULL)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_13 += ((/* implicit */unsigned int) max((max((max((((/* implicit */unsigned long long int) (signed char)-21)), (var_5))), (((/* implicit */unsigned long long int) ((signed char) var_1))))), (((/* implicit */unsigned long long int) var_7))));
            var_14 = ((((/* implicit */_Bool) 15723921465601122864ULL)) && (((/* implicit */_Bool) (-(3075847652U)))));
            var_15 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4183222482U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) : ((+(111744813U)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-6296121814761051809LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2] [i_0])))))) : (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))))))));
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 15723921465601122864ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_0] [(unsigned char)12] [i_0])), (304597816U)))) : ((~(var_6))))), (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])) * (max((((/* implicit */unsigned long long int) 111744813U)), (var_5)))))));
            arr_5 [i_1] [i_1] [(unsigned char)13] = ((/* implicit */unsigned int) ((unsigned long long int) max(((-(1842215195936037934ULL))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) var_0))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_2] [19ULL]))))) ? (((arr_6 [i_0] [i_2] [4]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0]))))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]))));
            arr_8 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 17)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6296121814761051809LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))))));
            arr_9 [i_2] = ((/* implicit */unsigned int) (unsigned char)0);
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_5))));
            arr_13 [22ULL] [(short)19] [i_3 - 1] = ((/* implicit */int) ((signed char) arr_0 [(_Bool)1]));
        }
        /* vectorizable */
        for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6296121814761051809LL)) ? (arr_26 [i_0] [i_4] [6ULL] [i_6]) : (arr_16 [i_7] [i_7] [i_7])));
                            arr_27 [8] [i_4] [8] [i_4] [8] = ((/* implicit */signed char) var_6);
                            var_19 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46)))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_18 [i_0] [(unsigned short)23] [(unsigned short)19] [i_0])))) ? ((~(17524392735938425045ULL))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0])))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (arr_26 [(unsigned char)21] [i_0] [i_8] [i_8])));
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                {
                    for (unsigned char i_11 = 3; i_11 < 23; i_11 += 1) 
                    {
                        {
                            arr_41 [i_11 - 1] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) 2717351459058138882ULL));
                            arr_42 [i_0] [i_0] [(unsigned char)19] [i_10] [(signed char)18] = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
            } 
            arr_43 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6390926080784307324ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (15563396100345687060ULL)))) ? (((((/* implicit */_Bool) arr_14 [21ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) : (((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_0] [(unsigned char)16] [i_8]) * (((/* implicit */unsigned int) arr_23 [i_8] [i_0] [(_Bool)1] [i_0] [i_0])))))));
            /* LoopSeq 2 */
            for (int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 23; i_13 += 1) 
                {
                    for (unsigned int i_14 = 2; i_14 < 22; i_14 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-59)) - (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((var_8) && (((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
                            arr_52 [(short)8] [(short)8] [(unsigned char)8] [i_13 + 1] [i_13 - 3] [i_14] [i_13] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (111744814U))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_2)))))));
                            arr_53 [i_0] [i_0] [i_12] [i_13] [i_13] = ((/* implicit */unsigned long long int) var_10);
                        }
                    } 
                } 
                arr_54 [i_0] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 17524392735938425045ULL)) ? (17672938251965616265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                arr_55 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) arr_17 [i_8] [i_8] [i_8]))))));
            }
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3072))) != (((((/* implicit */_Bool) (short)26656)) ? (12934570774538704125ULL) : (((/* implicit */unsigned long long int) 304597816U))))));
                arr_58 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 2009590238))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (arr_37 [i_8] [i_8] [i_8])));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_61 [i_16] [i_16] = ((/* implicit */signed char) min((arr_49 [i_0] [i_0] [i_0] [i_16] [i_16] [i_16]), (((/* implicit */short) ((_Bool) var_3)))));
            var_24 = ((/* implicit */unsigned short) max((arr_47 [i_16] [i_16] [i_16] [(signed char)12]), (((/* implicit */unsigned long long int) ((_Bool) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41)))))))));
            arr_62 [i_16] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) ((unsigned short) arr_44 [(_Bool)1] [i_16] [i_0])))), (max((var_7), (((/* implicit */unsigned int) var_10))))));
            arr_63 [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_1);
        }
        arr_64 [(unsigned short)11] [(unsigned short)11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (15563396100345687060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (short)23032))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_46 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((unsigned short) var_2))))) : (((/* implicit */int) (unsigned char)56)));
    }
    for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
    {
        var_25 = ((/* implicit */unsigned char) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 304597804U)) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (unsigned char)172))))));
            /* LoopSeq 1 */
            for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                {
                    var_27 += ((/* implicit */short) (!((_Bool)1)));
                    arr_76 [i_18] [i_19] [(unsigned short)11] [(signed char)3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_34 [i_19] [i_18] [i_17]) ? (((/* implicit */int) var_9)) : (arr_69 [i_17] [i_18] [i_17])))) + (((unsigned int) (_Bool)0))));
                }
                for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) -54280102))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) var_0))) : ((+(((/* implicit */int) (short)-25308))))));
                }
                arr_80 [i_17] [i_18] [i_17] [i_18] = ((/* implicit */unsigned short) 6296121814761051808LL);
                arr_81 [14ULL] [i_18] [i_18] = ((/* implicit */signed char) 17227621339690006617ULL);
            }
            /* LoopSeq 3 */
            for (unsigned int i_22 = 3; i_22 < 15; i_22 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_23 = 2; i_23 < 16; i_23 += 4) 
                {
                    var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)14))))) ? (((((/* implicit */_Bool) 12934570774538704121ULL)) ? (((/* implicit */int) arr_50 [(signed char)3] [(_Bool)1] [i_18] [i_22] [i_23] [i_23 - 1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (_Bool)1))));
                    var_31 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_89 [i_23] [i_22 + 1] [i_18] [i_18] [(signed char)12] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) && ((_Bool)1)));
                    arr_90 [i_17] [i_18] [i_18] [i_17] = ((short) ((((/* implicit */_Bool) var_3)) ? (arr_26 [i_17] [i_17] [i_18] [i_23 + 1]) : (((/* implicit */int) (signed char)-122))));
                }
                for (int i_24 = 0; i_24 < 18; i_24 += 1) 
                {
                    arr_93 [i_17] [i_18] = var_0;
                    arr_94 [i_18] [10ULL] = ((/* implicit */signed char) var_8);
                }
                var_32 *= ((/* implicit */unsigned int) ((((arr_74 [i_22] [i_17] [i_22] [i_17] [i_18]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_17] [i_18]))))) ? (arr_51 [i_17] [i_17] [i_17] [i_17] [i_18] [i_22]) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (long long int i_25 = 0; i_25 < 18; i_25 += 3) /* same iter space */
                {
                    arr_99 [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) % ((+(var_5)))));
                    arr_100 [(short)14] [i_17] [i_22] [i_22] [(_Bool)1] &= ((/* implicit */unsigned long long int) (+(((3247952750U) & (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    var_33 = (-(((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_29 [i_25] [10])) : (((/* implicit */int) var_3)))));
                }
                for (long long int i_26 = 0; i_26 < 18; i_26 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)242))))));
                    arr_103 [i_18] [i_18] [i_18] [i_18] = ((unsigned int) 4072332037U);
                }
                for (unsigned long long int i_27 = 2; i_27 < 16; i_27 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) (short)16657);
                    /* LoopSeq 1 */
                    for (signed char i_28 = 0; i_28 < 18; i_28 += 2) 
                    {
                        arr_112 [i_18] = ((/* implicit */signed char) var_5);
                        arr_113 [i_28] [i_18] [i_22 + 3] [i_18] [i_18] [i_17] = (-(((unsigned int) (_Bool)1)));
                        var_36 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)23843))));
                        var_37 = ((/* implicit */unsigned long long int) var_8);
                        arr_114 [i_17] [(_Bool)1] [(_Bool)1] [i_22] [i_18] [i_18] [(_Bool)1] = ((/* implicit */int) var_0);
                    }
                    arr_115 [i_27 - 2] [(_Bool)1] [i_17] [i_17] [i_18] [i_18] |= ((/* implicit */_Bool) ((signed char) var_0));
                    var_38 = ((/* implicit */unsigned long long int) arr_87 [i_17] [i_17] [i_18] [i_18] [i_17] [1]);
                }
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                {
                    arr_119 [i_18] [1ULL] [(short)13] [i_18] = ((/* implicit */_Bool) var_1);
                    var_39 = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_104 [i_18]))))) ? (((/* implicit */unsigned long long int) 1047014556U)) : (0ULL));
                }
            }
            for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 1) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1047014556U)) ? (((/* implicit */int) arr_10 [i_17] [i_18] [i_30])) : (((/* implicit */int) (signed char)89))))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_30] [15ULL] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17253))) : (((arr_3 [13U] [13U] [13U]) ? (arr_117 [i_30] [i_18] [i_30]) : (((/* implicit */unsigned long long int) arr_11 [i_17] [i_18] [i_30]))))));
                var_42 = ((/* implicit */int) var_4);
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_125 [i_18] = ((/* implicit */unsigned long long int) var_4);
                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) arr_48 [i_17] [i_17] [(signed char)10]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_32 = 0; i_32 < 18; i_32 += 4) 
            {
                for (unsigned int i_33 = 0; i_33 < 18; i_33 += 3) 
                {
                    {
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && (((/* implicit */_Bool) ((int) var_7))))))));
                        arr_133 [i_17] [14U] [i_32] [i_32] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23151)) ? (var_5) : (0ULL)))) ? (((/* implicit */int) ((arr_122 [i_17] [i_17] [i_17] [(signed char)9]) < (var_7)))) : (-1226980441)));
                    }
                } 
            } 
        }
    }
}
