/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72087
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
    var_11 = ((/* implicit */_Bool) (unsigned char)77);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_12 = ((/* implicit */signed char) 9044918675407737964LL);
            arr_8 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) == (arr_4 [i_1]))))));
        }
        for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) ((short) arr_3 [i_0] [i_3 + 3]))))))));
                        var_14 = min((((/* implicit */long long int) min(((unsigned short)1), ((unsigned short)50335)))), (min((max((((/* implicit */long long int) var_9)), (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1944165764)) ? (1090871972U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))))));
                        arr_16 [i_0] [i_2 - 2] [i_3] [i_0] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65534))))) / ((~(103079215104ULL))))) >> (((18446743970630336523ULL) - (18446743970630336480ULL)))));
                    }
                } 
            } 
            var_15 = arr_2 [3U] [4ULL];
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-32)))))));
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                arr_19 [i_0] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65533)) >> (((((/* implicit */int) (unsigned short)65535)) - (65529))))))))), (max(((+(103079215104ULL))), (((/* implicit */unsigned long long int) ((int) var_7)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    var_17 = ((/* implicit */long long int) min((((/* implicit */int) max(((unsigned short)65534), ((unsigned short)65529)))), (((((/* implicit */int) (_Bool)1)) / (16)))));
                    var_18 = ((/* implicit */signed char) (+(arr_11 [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 2])));
                    arr_22 [i_2] [i_5] [i_5] [i_5] [i_2] [i_0] = (+(((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned short)65521)) - (65517))))));
                }
                var_19 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65524)))), (min((((/* implicit */int) var_1)), (var_3)))))));
            }
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)32105), ((unsigned short)24294))))))), (min((((((/* implicit */_Bool) arr_18 [i_0])) ? (12593773692592486933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1809223585U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_7] [i_2] [i_2] [i_0])))))))));
                arr_26 [i_0] [i_0] [i_0] = var_5;
                arr_27 [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) (unsigned short)37242))))), (((((var_0) | (var_4))) - (((unsigned long long int) arr_17 [i_0] [i_2 + 1] [i_2 + 1]))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        {
                            arr_34 [12ULL] [i_2] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((short) arr_1 [i_2 + 1]));
                            var_21 = ((/* implicit */short) (unsigned short)11);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned short)27227))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) : (2485743711U)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((int) (signed char)96)))));
                arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) arr_1 [i_2])));
            }
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_45 [i_13] [11LL] [i_11] = ((/* implicit */signed char) min((((unsigned int) ((((/* implicit */_Bool) (unsigned short)15356)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))), (min(((~(2485743703U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_2 - 1] [i_2 - 1] [i_12] [i_13])))))))));
                            var_24 = ((/* implicit */_Bool) ((long long int) min((((((/* implicit */int) arr_15 [i_0] [i_0] [i_11] [i_0] [(short)4] [i_0])) - (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1)))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_0))) != (var_8)))) == (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)511))) && (((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) var_6)) - (20026)))))))))));
                        }
                    } 
                } 
                arr_46 [(unsigned char)3] [i_2 - 1] [i_11] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_14 [i_0] [i_2] [0ULL] [i_11]))), (min((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (short)0))))), (max((18446743970630336511ULL), (((/* implicit */unsigned long long int) arr_7 [i_11]))))))));
            }
        }
        for (unsigned short i_14 = 3; i_14 < 10; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-15)), (min((min((((/* implicit */unsigned long long int) arr_4 [12LL])), (18446743970630336511ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_29 [i_15] [i_0])))))));
                            arr_58 [i_0] [i_14] [(_Bool)1] [i_16] [i_14] = ((/* implicit */unsigned short) min((8985484686670461670ULL), (8985484686670461670ULL)));
                        }
                    } 
                } 
                arr_59 [i_14] [i_15] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_50 [i_14] [i_14] [i_14])), ((((((~(((/* implicit */int) (unsigned short)3)))) + (2147483647))) >> (((33554432U) - (33554406U)))))));
            }
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 2; i_20 < 12; i_20 += 1) 
                    {
                        {
                            arr_66 [i_14] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9))));
                            var_27 = (((!(((/* implicit */_Bool) var_8)))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)18)))) : (((/* implicit */int) var_1)));
                            var_28 |= ((/* implicit */long long int) var_0);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_14] [i_18] [i_18]))))) / ((~(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_18])) ? (((/* implicit */unsigned long long int) 4261412866U)) : (var_7)))) ? (min((-26LL), (((/* implicit */long long int) (short)-15616)))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [12] [i_20 - 2] [i_18] [i_14 - 2] [i_18]))))) : ((+(min((((/* implicit */long long int) arr_48 [i_14])), (var_5)))))));
                        }
                    } 
                } 
            } 
            var_30 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)0)), (var_9))), (((/* implicit */int) ((short) var_6)))))), (((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) | (((((/* implicit */_Bool) (unsigned short)41249)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [(unsigned char)7] [i_14]))) : (-4771555713003783701LL)))))));
            var_31 ^= ((/* implicit */signed char) (-((+((+(((/* implicit */int) (_Bool)0))))))));
        }
        var_32 |= min((9461259387039089934ULL), (18446743970630336505ULL));
        var_33 = ((/* implicit */long long int) (~(((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) 
        {
            /* LoopNest 2 */
            for (short i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    {
                        arr_76 [i_22] [i_0] [i_0] [i_22] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) -6135869670966316686LL)) >= (var_7))));
                        arr_77 [i_23] [i_21] [i_22] = ((/* implicit */unsigned int) (unsigned char)230);
                        arr_78 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) 18446743970630336511ULL);
                        arr_79 [i_0] [i_21] [i_22] [i_22] = (!(((/* implicit */_Bool) arr_14 [i_23] [i_22] [i_21] [i_0])));
                        var_34 = (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((9461259387039089935ULL) - (9461259387039089907ULL)))))) : ((+(var_7))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_24 = 0; i_24 < 13; i_24 += 1) 
            {
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4261412863U))));
                            var_36 ^= ((/* implicit */int) ((unsigned long long int) (_Bool)0));
                            var_37 ^= (~(var_8));
                            arr_86 [i_0] [i_0] [i_0] [i_26] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_27 = 0; i_27 < 13; i_27 += 1) 
        {
            var_38 = ((/* implicit */short) (~(((((/* implicit */int) min((((/* implicit */unsigned short) arr_56 [i_0] [i_27] [i_27] [i_27] [i_0])), ((unsigned short)24294)))) + (((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned short)64))))))));
            /* LoopSeq 2 */
            for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
            {
                arr_91 [i_0] [i_0] [8LL] [i_0] |= ((((/* implicit */int) (unsigned char)23)) * (((((/* implicit */int) var_1)) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_56 [i_0] [i_0] [i_28] [i_0] [i_0])))))));
                arr_92 [i_28] [(unsigned short)2] [i_0] = ((/* implicit */int) min((33554432U), (287733454U)));
                var_39 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_23 [i_28] [i_27] [i_27] [i_0])))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned short)41234))))))), ((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)64)), ((unsigned short)679))))))));
            }
            for (signed char i_29 = 1; i_29 < 12; i_29 += 4) 
            {
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 13; i_30 += 3) 
                {
                    for (long long int i_31 = 0; i_31 < 13; i_31 += 1) 
                    {
                        {
                            arr_102 [i_0] [i_30] [i_0] [i_30] [(unsigned short)12] [i_29 + 1] = ((/* implicit */int) arr_63 [i_0] [i_27] [i_30] [i_31]);
                            var_40 = ((/* implicit */unsigned long long int) arr_44 [i_0] [i_27] [i_29 - 1] [i_29 - 1] [i_30] [i_29 - 1]);
                        }
                    } 
                } 
                var_41 ^= ((/* implicit */unsigned short) arr_93 [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_32 = 0; i_32 < 13; i_32 += 1) 
                {
                    for (unsigned long long int i_33 = 2; i_33 < 11; i_33 += 3) 
                    {
                        {
                            arr_108 [i_0] |= ((/* implicit */short) var_5);
                            var_42 = ((/* implicit */long long int) ((_Bool) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24275))))));
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)41249)) : (((/* implicit */int) (unsigned char)151))))), (292295894U))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_34 = 0; i_34 < 13; i_34 += 3) 
            {
                for (int i_35 = 4; i_35 < 10; i_35 += 4) 
                {
                    {
                        var_44 = max(((((+(var_8))) * (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_34] [(short)3])), (arr_25 [i_0] [i_27] [i_34] [i_35 - 4]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_2)) / (((/* implicit */int) var_1))))))));
                        /* LoopSeq 4 */
                        for (short i_36 = 0; i_36 < 13; i_36 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (short)-32764))));
                            var_46 = ((/* implicit */_Bool) arr_97 [i_0] [i_34] [i_35] [i_36]);
                        }
                        for (unsigned short i_37 = 0; i_37 < 13; i_37 += 1) 
                        {
                            arr_120 [i_0] [i_34] [i_34] [i_34] [i_35] [i_37] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) arr_94 [6ULL]))), (max((arr_94 [i_37]), (((/* implicit */unsigned long long int) arr_3 [i_35] [i_34]))))));
                            var_47 ^= ((unsigned short) ((signed char) min(((unsigned short)65522), ((unsigned short)65535))));
                            var_48 ^= ((/* implicit */_Bool) (signed char)-81);
                            var_49 ^= arr_28 [i_35] [i_35] [(unsigned short)2] [i_35 - 1];
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)7)))))))) / (((/* implicit */int) (short)32736))));
                        }
                        /* vectorizable */
                        for (long long int i_38 = 0; i_38 < 13; i_38 += 1) 
                        {
                            var_51 = ((((/* implicit */int) ((unsigned short) -2305843009213693952LL))) ^ (((((/* implicit */_Bool) 6342840079443304841ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)65522)))));
                            arr_123 [i_0] [i_0] [i_35] [10U] [i_38] |= (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                            arr_124 [i_0] [i_0] [i_0] [i_35] [i_34] [i_35 - 1] [i_38] = ((/* implicit */unsigned short) (-(var_8)));
                            var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_35] [i_35] [i_34] [i_35]))));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_1 [i_35]))) == (((((/* implicit */_Bool) arr_89 [i_27] [i_34] [i_35] [i_38])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_38] [i_34] [i_27] [i_0])))))));
                        }
                        for (int i_39 = 1; i_39 < 12; i_39 += 3) 
                        {
                            var_54 = ((/* implicit */_Bool) var_8);
                            arr_128 [i_0] [i_34] [i_27] [i_34] [i_34] [i_34] [i_39] = ((/* implicit */signed char) var_7);
                            var_55 ^= ((/* implicit */_Bool) ((((max((16380U), (((/* implicit */unsigned int) (unsigned short)9)))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45005))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_69 [i_0] [i_35] [i_35] [i_35]))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_60 [i_0] [i_27] [i_35] [i_35]))))), (max((((/* implicit */unsigned int) arr_121 [i_0] [i_0] [8] [i_0] [i_0] [i_0])), (4294967295U)))))));
                        }
                        var_56 *= ((/* implicit */short) ((unsigned short) (!(((var_10) >= (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                    }
                } 
            } 
        }
        var_57 = ((/* implicit */short) min(((~(((/* implicit */int) arr_81 [i_0] [i_0] [(_Bool)1] [i_0])))), (((/* implicit */int) ((((arr_5 [i_0]) & (19ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8)))))))))));
    }
}
