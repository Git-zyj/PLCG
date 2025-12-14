/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88779
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_0 [6ULL] [6ULL])), ((short)-32762)))) == (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))) << (((((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) 122273152U)) : (arr_1 [i_1]))) + (((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (arr_3 [5] [5])))))) - (694500723LL)))));
            arr_5 [i_1] [i_0] &= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_3] [(short)3]))));
                arr_10 [7] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((315168153) != (((/* implicit */int) arr_6 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_16 = ((arr_16 [i_0] [i_2] [i_5 - 1] [i_4] [i_3] [i_3 + 2]) & (arr_16 [i_4] [i_2] [i_5 + 1] [i_4] [i_5] [i_3 + 1]));
                            arr_17 [i_5] [8LL] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_3] [i_0]))))) ? (((((/* implicit */int) var_8)) ^ (-315168154))) : (((/* implicit */int) arr_4 [i_5] [(signed char)0]))));
                            arr_18 [i_0] [i_2] [i_2] [i_0] [i_4] [i_4] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) 2661892431U)) * (-1LL)));
                            arr_19 [i_3] [i_3] [i_2] [i_0] = ((/* implicit */signed char) arr_16 [i_5] [i_5] [i_5] [8ULL] [i_5 - 1] [i_5 - 1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((-1LL) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 1]))))))));
                arr_20 [i_0] [i_0] = ((/* implicit */signed char) (((!(arr_0 [i_0] [i_0]))) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(_Bool)1] [i_0]))) : (arr_1 [i_0]))))));
            }
            var_18 = ((/* implicit */int) max((var_18), ((~(((((/* implicit */int) (short)(-32767 - 1))) - (-2147483645)))))));
        }
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 4; i_8 < 17; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_34 [i_8]))) & (((/* implicit */int) arr_27 [i_0] [i_6] [i_6] [i_0]))))) ? (min((((7387681226338401363ULL) / (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0]))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
                        var_21 = (-(-666029672));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_30 [5] [i_6] [i_7] [i_8 - 2]), (((/* implicit */unsigned int) 1011695558))))) ? (((/* implicit */int) arr_23 [i_6] [i_7] [2])) : (arr_21 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) min((((/* implicit */int) arr_27 [1] [1] [i_8] [i_9 - 1])), (var_6)))) ? (-181648539508372805LL) : (arr_12 [i_9 - 1] [i_9 - 2] [i_9 - 2] [(short)7] [i_8 + 1])))));
                        var_23 = ((/* implicit */unsigned int) min((1LL), (((/* implicit */long long int) (signed char)-1))));
                    }
                    var_24 = ((/* implicit */int) max((((/* implicit */long long int) arr_6 [i_8 - 4] [i_8 - 2])), (((((/* implicit */_Bool) max((arr_21 [i_6] [i_0]), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) -12LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_23 [i_0] [i_8] [i_7])))))))));
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7] [i_6]))) / (arr_29 [i_0] [i_0] [(short)11] [i_7] [i_7] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)65535))))) : ((+(((/* implicit */int) arr_26 [i_10] [i_10] [i_10])))))));
                    var_26 *= ((/* implicit */long long int) (+(((unsigned long long int) ((_Bool) var_8)))));
                    var_27 *= min((((/* implicit */int) (_Bool)1)), (arr_25 [i_0] [i_0] [i_6]));
                }
                var_28 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_6 [i_0] [i_0])))) / (((int) arr_34 [i_7]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    var_29 &= ((/* implicit */signed char) arr_37 [i_0] [i_0] [i_0] [i_11] [i_11]);
                    arr_42 [i_11] [1] [i_6] [1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_25 [i_0] [i_0] [i_0])))));
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (-(arr_38 [i_11] [i_6] [i_7] [i_6] [i_0]))))));
                }
                arr_43 [i_0] [13U] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_14 [(unsigned char)6] [i_7])));
            }
            for (signed char i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
            {
                var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((signed char)-1), (((/* implicit */signed char) arr_36 [i_0] [i_6] [(short)1]))))), (arr_35 [i_0] [i_6] [i_12])))) ? (min((((/* implicit */int) (!(arr_23 [2] [(unsigned short)1] [i_0])))), ((~(arr_21 [i_0] [i_6]))))) : (((/* implicit */int) arr_26 [(short)14] [i_6] [3U]))))));
                var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 14LL)) ? (20LL) : (max((((/* implicit */long long int) ((int) (_Bool)1))), (-1LL)))));
                var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_33 [i_0])), ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)65532)) : ((-2147483647 - 1)))) : (((/* implicit */int) (unsigned short)10))));
                var_34 *= arr_26 [5] [i_6] [i_12];
                arr_46 [i_0] [i_6] [i_12] [i_12] = ((/* implicit */signed char) min((((arr_16 [i_0] [i_6] [i_12] [i_12] [i_6] [i_12]) - (((((/* implicit */int) arr_33 [i_0])) + (((/* implicit */int) arr_9 [i_12] [i_12] [i_12] [i_12])))))), (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))));
            }
            arr_47 [(short)1] &= ((int) (unsigned short)5);
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_35 ^= ((/* implicit */unsigned int) var_7);
                var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)35754))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        {
                            arr_59 [i_16] [i_15] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) ((arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) >= (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_15] [i_6] [i_6])))))) >= (max((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]), (-507961426)))))), (((int) max((((/* implicit */unsigned int) arr_27 [i_0] [i_6] [13U] [(_Bool)1])), (4294967295U))))));
                            var_37 ^= ((/* implicit */int) ((((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0])) ^ (min((arr_1 [i_0]), (((/* implicit */long long int) arr_48 [i_0] [i_14] [i_14]))))));
                            arr_60 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                            var_38 = (+(((/* implicit */int) (unsigned short)21330)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_10)) <= (315168153)))), (((((/* implicit */_Bool) (short)32762)) ? (2147483629) : (((/* implicit */int) (_Bool)1))))))), (max((((unsigned int) arr_32 [i_17] [i_14] [i_0] [i_6] [i_0])), (((/* implicit */unsigned int) arr_0 [i_6] [i_0])))))))));
                    arr_63 [i_0] [i_6] = ((/* implicit */_Bool) arr_40 [i_0] [i_6] [i_6] [i_14] [i_17]);
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((min((arr_15 [i_14] [i_14] [i_6] [i_6] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_6] [i_14] [i_17] [i_6] [i_6] [i_14]))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67)))))) ? (((((/* implicit */long long int) arr_58 [i_0] [i_0] [6U] [i_0] [i_0] [i_0])) / (var_13))) : (((/* implicit */long long int) ((int) (_Bool)1))))) : (((/* implicit */long long int) (-(min((3793367886U), (arr_35 [i_17] [i_14] [i_0])))))))))));
                    var_41 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [(unsigned char)15])), (2U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) arr_44 [i_0] [i_6])))))) : (((((/* implicit */_Bool) 1776542660U)) ? (((/* implicit */unsigned long long int) arr_16 [i_17] [i_6] [i_6] [i_6] [3] [i_0])) : (arr_13 [2]))))), (((/* implicit */unsigned long long int) arr_0 [10] [i_6]))));
                    var_42 = max((((/* implicit */unsigned int) arr_2 [15U] [i_0])), (((2097151U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                }
                for (signed char i_18 = 3; i_18 < 16; i_18 += 4) 
                {
                    var_43 = ((/* implicit */signed char) ((int) max((((/* implicit */int) arr_24 [i_18] [i_18] [i_18])), (arr_67 [i_6] [i_6] [i_6] [5U] [i_18]))));
                    arr_68 [(signed char)1] [i_18] [i_6] [i_18] [i_0] = ((/* implicit */unsigned long long int) arr_34 [i_0]);
                }
                var_44 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((_Bool) 67108863)))));
            }
            arr_69 [i_0] [i_6] [i_0] &= ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_50 [i_0]))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) 1185367715)) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_19] [i_20])))))));
                var_46 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)35754)) | (arr_53 [i_0] [i_0])))));
                var_47 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_20] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_67 [16ULL] [i_0] [i_19] [16ULL] [i_20])))))));
                var_48 = ((/* implicit */int) max((var_48), ((-(((/* implicit */int) arr_56 [i_0] [i_19] [i_20] [i_0] [i_19]))))));
            }
            var_49 = ((/* implicit */long long int) arr_39 [(unsigned short)4] [i_19] [i_0] [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (unsigned char i_21 = 2; i_21 < 14; i_21 += 4) 
            {
                for (long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    for (unsigned int i_23 = 2; i_23 < 17; i_23 += 4) 
                    {
                        {
                            var_50 ^= ((/* implicit */int) (_Bool)1);
                            arr_86 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((144115188075855871ULL) + (((/* implicit */unsigned long long int) 0U))))) || (((/* implicit */_Bool) 18446744073709551615ULL))))));
                            arr_87 [i_0] [i_0] [i_0] [2U] [i_23] = ((((/* implicit */unsigned long long int) (-(14U)))) ^ (((arr_26 [i_23] [i_23 - 1] [i_21 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (144115188075855882ULL))));
                            var_51 = ((/* implicit */short) min((((/* implicit */unsigned int) (short)32767)), (2518424635U)));
                        }
                    } 
                } 
            } 
            arr_88 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_72 [i_0] [i_19] [i_19])) >= (((/* implicit */int) arr_72 [i_19] [7ULL] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_19] [i_0] [13LL] [i_0]))))) : ((~(arr_64 [i_19] [i_0])))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 2) 
    {
        for (signed char i_25 = 0; i_25 < 13; i_25 += 2) 
        {
            {
                var_52 = ((/* implicit */short) max((501599410U), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                var_53 = ((/* implicit */unsigned long long int) 2147483624);
            }
        } 
    } 
    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) var_9))));
}
