/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57460
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
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)127);
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (131071LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) 3099569474252034389LL)) ? (((/* implicit */int) arr_0 [i_0])) : (var_4))) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */long long int) (+(arr_8 [i_1 - 1] [i_1 + 2])));
                            arr_18 [i_1 + 1] [i_1] [i_1 + 1] [i_4] = var_5;
                            arr_19 [i_1] [i_1] [i_3] [i_3] [(signed char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)63))))) : (var_4)));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) 9002557523295290659LL))));
                        }
                        var_16 -= ((/* implicit */unsigned int) (signed char)-73);
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_22 [13] [i_2 - 1] [i_3] [i_4] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-63)) ? (((((/* implicit */int) (signed char)-73)) - (arr_20 [i_1] [2LL] [2LL] [i_4] [10]))) : (((/* implicit */int) (signed char)73))));
                            var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63854)) - (((/* implicit */int) arr_5 [i_3] [i_4])))))));
                            arr_23 [16U] [16U] [i_3] [i_1] [i_6] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_6))))));
                        }
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_1] [i_3] [i_3] [i_4])) - (((/* implicit */int) arr_16 [i_1 + 3] [i_3] [i_1 + 3] [i_4]))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)73)) - (((/* implicit */int) (unsigned short)44445))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        arr_26 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) 78306502)) ? (-1306004255) : (((/* implicit */int) (short)-63)))) : ((~(((/* implicit */int) arr_25 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))))));
                        arr_27 [i_1 - 1] [13LL] [i_1] [i_7] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                    }
                    var_20 -= ((/* implicit */_Bool) ((unsigned int) (short)49));
                }
            } 
        } 
        arr_28 [i_1] [18LL] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)13440))))));
    }
    for (int i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
    {
        arr_33 [i_8 + 2] = ((/* implicit */int) min((((/* implicit */long long int) (~((~(((/* implicit */int) arr_16 [i_8] [12ULL] [12ULL] [i_8]))))))), (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) (+(arr_12 [i_8] [i_8] [i_8 + 2] [i_8 + 4] [i_8 - 1])))) : (max((((/* implicit */long long int) (short)8480)), (-5856217424809883125LL)))))));
        arr_34 [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 5856217424809883124LL)) ? (((((/* implicit */_Bool) -10608796)) ? (((/* implicit */int) (short)-50)) : (((/* implicit */int) arr_17 [i_8] [i_8 + 4] [i_8])))) : (((/* implicit */int) (unsigned char)71))))));
        /* LoopSeq 4 */
        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            arr_38 [16] [i_8] = ((/* implicit */signed char) (-(2598653652566706701ULL)));
            /* LoopSeq 3 */
            for (int i_10 = 2; i_10 < 19; i_10 += 3) 
            {
                arr_41 [i_8] [i_8] [i_9] [i_10 - 2] = ((/* implicit */signed char) (-((~((~(((/* implicit */int) (short)-45))))))));
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)62)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (signed char)-73))));
            }
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_24 [i_8] [i_8] [i_11] [i_11] [i_11])) ? (max((4294967295U), (2513281351U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16686))))))))));
                arr_44 [i_8] [7ULL] [i_11] = ((/* implicit */_Bool) -53987137397118692LL);
            }
            for (signed char i_12 = 3; i_12 < 18; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 3; i_13 < 17; i_13 += 4) 
                {
                    arr_53 [i_8] [i_9] [i_8] [i_13] [(unsigned short)14] [i_13] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_3)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_57 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1] = ((((((/* implicit */_Bool) (short)-45)) ? (5313323208321499284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15866))))) * (((/* implicit */unsigned long long int) 2717350362U)));
                        arr_58 [i_8] [i_8] [i_8 + 3] = ((short) ((_Bool) var_2));
                        var_23 = ((/* implicit */unsigned char) (((_Bool)1) ? (8105535571835840181ULL) : (((/* implicit */unsigned long long int) 30))));
                        arr_59 [i_14] [i_9] [i_9] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)228)))) ? ((~(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) arr_46 [i_8] [i_8]))))));
                        arr_60 [i_9] [i_9] [i_14] = ((/* implicit */int) arr_55 [i_8 + 3] [i_9] [(short)15] [(short)15] [(short)15] [(short)15] [(short)15]);
                    }
                    var_24 = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_9])) || (((/* implicit */_Bool) arr_15 [i_9]))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((arr_16 [i_13 + 2] [i_9] [i_9] [i_13 + 2]) ? (((/* implicit */int) (short)-16668)) : (arr_21 [i_13] [i_13] [i_13 - 2] [i_13 - 3] [i_13]))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_9] [i_13 + 2])) <= (arr_21 [18LL] [18LL] [i_13 - 1] [i_13 - 2] [18LL])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_15 = 2; i_15 < 19; i_15 += 2) 
                    {
                        arr_63 [(signed char)0] [8LL] [i_12 + 1] [i_13] [(unsigned char)6] [i_12 + 1] = ((/* implicit */unsigned int) (((+(1056964608U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_12))))));
                        arr_64 [i_12] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_49 [i_8 + 2]) : (arr_49 [i_12 - 3])));
                        var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) arr_25 [i_8 + 1] [i_8] [i_8] [i_8] [6ULL])) : (((/* implicit */int) (short)49))))));
                    }
                    for (long long int i_16 = 1; i_16 < 16; i_16 += 2) 
                    {
                        arr_67 [(unsigned short)5] [(unsigned short)5] [i_12] [(unsigned short)5] [i_12] = (-(min((((/* implicit */long long int) (~(arr_21 [i_8] [i_9] [i_12] [6] [i_16])))), ((~(-11LL))))));
                        arr_68 [i_9] [i_9] [i_9] [i_16] = ((/* implicit */unsigned short) ((int) var_6));
                        var_27 = arr_55 [i_8 + 2] [i_9] [i_12] [i_9] [i_12] [i_9] [i_12];
                    }
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((unsigned char) arr_50 [i_8 + 1]))))), (((/* implicit */int) ((unsigned short) (+(arr_14 [i_8] [i_17] [i_17] [i_13])))))));
                        var_29 = ((((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_17] [i_13 + 1] [i_12 - 3] [i_9] [i_8])) ? (((/* implicit */int) arr_42 [i_8] [i_8] [i_12] [i_13 - 2])) : (192)))) : (var_11))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_12 - 1] [i_12] [i_12] [i_12 - 2]))) & (arr_14 [i_8 + 1] [i_17] [i_12 + 2] [i_12])))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 4; i_19 < 19; i_19 += 3) 
                    {
                        var_30 += ((/* implicit */_Bool) min(((-(arr_62 [8LL] [(short)0] [i_8] [i_8 + 2] [i_19 + 1] [12LL]))), (arr_62 [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_19 - 3] [3])));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (((~(min((1512484885), (((/* implicit */int) (_Bool)0)))))) >= (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned short)56685)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)111)))) : (((/* implicit */int) (unsigned char)28)))))))));
                    }
                    for (long long int i_20 = 3; i_20 < 19; i_20 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */signed char) var_1);
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) ((signed char) -7284994722942586697LL))))))))));
                    }
                    for (long long int i_21 = 3; i_21 < 19; i_21 += 3) /* same iter space */
                    {
                        arr_84 [i_8] [i_9] [i_12 - 1] [15U] [15U] [i_21 - 3] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */int) arr_75 [i_8] [(short)4] [i_12 - 1] [(unsigned short)6] [i_21 - 3])) : (((/* implicit */int) arr_75 [i_8] [i_9] [i_12 - 1] [i_8] [i_9])))) - ((+(((/* implicit */int) var_10))))));
                        arr_85 [i_8] [i_8] [i_8 + 2] [i_8] [10U] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (~(arr_14 [12] [i_18] [i_18] [(_Bool)1])))), (arr_56 [i_8] [i_18] [i_12] [i_8] [(unsigned char)13] [i_8] [i_8]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_8] [i_21 + 1]))))), (arr_52 [i_8 + 2] [i_12 - 2])))))));
                    }
                    arr_86 [i_18] [i_12] [i_9] [i_9] [i_8] = ((/* implicit */int) (~((-(min((((/* implicit */unsigned int) -1720557383)), (65623334U)))))));
                    arr_87 [i_18] [(_Bool)1] [i_18] [i_12] [i_9] [i_8 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1358623312))));
                }
                arr_88 [i_8] [i_8] [i_8 + 2] &= ((/* implicit */signed char) (+(1358623312)));
            }
            var_34 -= (_Bool)0;
        }
        /* vectorizable */
        for (short i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            var_35 = ((/* implicit */long long int) var_10);
            arr_91 [i_8 - 1] [i_22] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-36))))) ? ((+(((/* implicit */int) (short)-50)))) : (((/* implicit */int) (signed char)-127))));
            arr_92 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 644240924)) : (-7284994722942586697LL)))) ? (((((/* implicit */_Bool) 1364412025)) ? (arr_6 [(short)1]) : (((/* implicit */int) (short)49)))) : ((~(((/* implicit */int) (_Bool)0))))));
            arr_93 [(short)2] = ((/* implicit */unsigned long long int) (+((~(var_9)))));
        }
        /* vectorizable */
        for (signed char i_23 = 2; i_23 < 18; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 20; i_24 += 1) 
            {
                for (int i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    {
                        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_78 [i_8] [i_8 + 4] [i_23 - 2])) && (((/* implicit */_Bool) arr_78 [i_8] [i_8 + 3] [i_23 - 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_26 = 0; i_26 < 20; i_26 += 4) 
                        {
                            arr_105 [i_23] [(_Bool)1] [i_24] [i_23 + 1] [i_23] = ((/* implicit */_Bool) arr_8 [i_26] [i_24]);
                            var_37 = ((/* implicit */unsigned int) arr_16 [i_8 + 3] [i_23] [i_8 + 2] [i_8 + 1]);
                            arr_106 [i_23] = ((/* implicit */long long int) ((unsigned char) arr_101 [(short)0] [i_23] [i_24] [i_25] [i_23 + 1] [i_24]));
                            var_38 = ((/* implicit */signed char) arr_52 [i_8] [i_23 - 2]);
                        }
                        var_39 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_4))))));
                        arr_107 [i_23] [i_23] [i_24] [4LL] = arr_47 [i_8] [i_23] [i_24] [i_24];
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_89 [i_8 + 1]))));
        }
        for (long long int i_27 = 2; i_27 < 19; i_27 += 3) 
        {
            arr_110 [i_8 - 1] [i_8 - 1] [i_8 - 1] = ((/* implicit */int) max((((/* implicit */long long int) (!(arr_76 [i_27 - 1] [i_8 + 3] [18ULL] [i_8 + 3])))), (((((/* implicit */_Bool) ((short) (unsigned char)220))) ? (((long long int) 1786745018U)) : (((/* implicit */long long int) ((arr_13 [i_8] [i_27] [i_8] [i_27 - 1] [i_27] [i_8]) ? (arr_74 [10ULL] [i_27] [i_8] [i_8] [i_8]) : (((/* implicit */int) (short)13078)))))))));
            arr_111 [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_103 [i_27] [i_27 - 2] [i_27 - 1] [i_27 - 2] [i_27] [i_27])))) ? (((/* implicit */int) ((unsigned char) 2044998946))) : (((arr_45 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 + 3]) | (arr_45 [i_8 + 3] [i_8 + 4] [i_8 + 3] [i_8 + 4])))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_28 = 1; i_28 < 18; i_28 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_29 = 0; i_29 < 20; i_29 += 3) 
            {
                var_41 += ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_79 [i_8] [i_8] [(_Bool)0])) + (2147483647))) << (((((((/* implicit */int) arr_79 [i_8] [i_8 + 3] [(unsigned char)10])) + (7753))) - (11))))))));
            }
            var_43 += ((/* implicit */short) var_2);
            arr_118 [i_28] [i_28] = ((/* implicit */signed char) arr_101 [i_28] [i_28 + 2] [i_28] [i_28 + 2] [i_28] [i_28 + 1]);
        }
    }
    for (int i_30 = 1; i_30 < 16; i_30 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */_Bool) min((var_44), ((!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_55 [(_Bool)1] [i_30 + 4] [i_30 + 1] [i_30] [(unsigned short)3] [16] [i_30])) ? (((/* implicit */long long int) var_4)) : (7284994722942586696LL))))))))));
        arr_121 [i_30] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_30 [i_30] [i_30 + 1])), ((-((+(arr_39 [i_30 + 3] [i_30 + 3] [i_30] [i_30 + 3])))))));
    }
}
