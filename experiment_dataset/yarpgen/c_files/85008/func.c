/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85008
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (((arr_0 [i_0]) >> (((5423210053483640989ULL) - (5423210053483640946ULL))))))) < (((/* implicit */unsigned long long int) ((-6393166079828213883LL) / (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */int) ((_Bool) (unsigned char)87));
            var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_4 [i_0]))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(arr_6 [(unsigned short)14] [i_1 + 2] [(short)11])));
                        var_20 = ((/* implicit */unsigned char) (_Bool)1);
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 3])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])))))));
                        arr_15 [(_Bool)1] [i_1] [i_4] [(_Bool)1] [i_3] [i_4] [i_4] = ((/* implicit */signed char) arr_5 [i_2] [i_3]);
                    }
                    for (int i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)46352))))));
                        arr_18 [i_0] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))) < (var_16)));
                        var_23 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)249)) && (((/* implicit */_Bool) 13023534020225910613ULL)))))));
                        arr_19 [i_0] [i_1] [i_0] [17ULL] [i_5] = ((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 3] [i_5] [i_5 - 3] [i_1 - 1] [i_5 + 3]);
                    }
                    var_24 = ((/* implicit */int) max((var_24), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)7)))) >> ((((+(arr_2 [i_0]))) - (17063761569101882396ULL)))))));
                    arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((arr_4 [i_1 + 3]) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((17700021733222650702ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)205)) ^ (((/* implicit */int) (unsigned char)249))));
                }
                for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned short)65535)))) < (((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2] [i_0] [i_0]) : (arr_14 [i_0] [i_1 - 1] [i_1 - 1])))));
                    arr_24 [i_6] [i_0] [i_1 + 2] [i_0] = ((/* implicit */signed char) (-(arr_14 [i_0] [i_0] [i_0])));
                }
                for (unsigned short i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 6393166079828213866LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (arr_25 [i_7] [i_7]))))))));
                        var_28 *= ((/* implicit */unsigned char) ((signed char) arr_13 [i_8] [i_2] [i_2] [i_8 - 1] [i_2] [i_7 - 3]));
                        arr_30 [i_0] [i_0] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                        arr_31 [i_7] [i_1] [i_2] [i_2] [i_7] [i_8 + 1] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_8 + 1] [i_7 - 1])) == (((/* implicit */int) var_4))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_36 [i_0] [i_2] [i_2] [i_7 - 2] [i_9] [i_7] [i_7 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) arr_26 [i_0] [i_9] [i_0] [i_7] [i_7] [i_9]))))) == (((((/* implicit */_Bool) 1730470457)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_29 ^= ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        arr_37 [i_7] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                        var_30 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                        arr_38 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) -1730470457))) >> (((((/* implicit */int) arr_27 [(unsigned char)6] [i_1] [i_1 + 1] [i_1 - 1] [(unsigned char)2] [i_1] [i_1 + 1])) - (128)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_43 [10] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_1 - 1] [i_7 + 1] [i_7 + 1]))));
                        arr_44 [5ULL] [i_7] [i_7] [i_2] [i_1] [i_7] [i_0] = ((/* implicit */int) ((_Bool) arr_17 [i_1 + 1] [i_7 - 2] [i_7 + 1]));
                    }
                    for (unsigned int i_11 = 2; i_11 < 17; i_11 += 4) 
                    {
                        arr_47 [i_11 - 2] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_33 [i_1 + 1] [i_1 + 1] [i_2] [i_11 - 1]))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) || (((/* implicit */_Bool) arr_1 [i_1 - 1]))));
                        arr_48 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_0] [i_2] [i_7] [i_11 + 2])) ? (((/* implicit */int) arr_46 [i_0] [i_1] [i_7 + 1] [i_11])) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0]))));
                        arr_49 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) arr_42 [i_11] [i_7] [i_7]);
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    var_33 = ((/* implicit */unsigned short) arr_33 [i_1 + 2] [(short)11] [i_1] [i_1]);
                }
                arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) var_1))) ^ (((arr_17 [(unsigned short)5] [i_1] [i_1]) >> (((arr_2 [i_0]) - (17063761569101882397ULL)))))));
                var_34 ^= ((((/* implicit */int) arr_3 [i_0] [i_2])) >> (((/* implicit */int) ((unsigned char) arr_9 [i_1]))));
            }
            for (short i_12 = 2; i_12 < 18; i_12 += 1) 
            {
                var_35 = ((arr_29 [i_12 - 1] [i_1 + 3] [i_12] [i_1]) << (((((((/* implicit */int) (signed char)13)) << (((13966694419174951451ULL) - (13966694419174951450ULL))))) - (26))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_7))))) == (var_10)));
                arr_54 [i_0] [i_1 + 1] [i_1] [i_12] = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_1 + 2]));
                arr_55 [i_0] [i_1 + 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_12 [i_0]))));
            }
            var_37 = ((/* implicit */unsigned int) ((arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1]) / (((/* implicit */int) (unsigned char)2))));
        }
        var_38 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32401)) ? (((/* implicit */int) (unsigned short)16393)) : (((/* implicit */int) (unsigned short)45511))))) * (2496228852U)));
    }
    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
    {
        arr_58 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (arr_29 [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_13] [(_Bool)1] [6])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))) : (((((((/* implicit */int) arr_9 [i_13])) == (((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_9))))) : (min((((/* implicit */unsigned long long int) (signed char)-1)), (arr_10 [i_13])))))));
        var_39 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_13] [i_13]))) - (7767373502570838070LL))), (((/* implicit */long long int) (signed char)-13))));
        /* LoopSeq 2 */
        for (signed char i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned short) var_4))), (min((var_14), (((/* implicit */long long int) arr_52 [i_13] [i_13] [i_13]))))))) ^ (arr_10 [i_14])));
            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) * (((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13])) ? (arr_17 [i_13] [i_13] [i_13]) : (arr_17 [i_13] [i_14] [i_13]))))))));
            arr_62 [i_13] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(3417513629U)))) >= (((max((((/* implicit */unsigned long long int) arr_12 [i_13])), (arr_17 [i_13] [i_13] [i_13]))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))));
            var_42 = ((/* implicit */short) (-(((/* implicit */int) arr_39 [i_13] [i_14] [i_14] [i_14] [(short)14]))));
        }
        for (short i_15 = 0; i_15 < 19; i_15 += 4) 
        {
            var_43 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) var_15))), (max((arr_65 [i_13] [i_15]), (var_7)))));
            var_44 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-24096)) ? (-536615030) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)63))))))), (-6393166079828213883LL)));
            var_45 = ((/* implicit */unsigned long long int) var_10);
        }
        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))) | (291415946963731565ULL))))));
    }
    var_47 = ((/* implicit */int) min((((/* implicit */short) (unsigned char)5)), ((short)15795)));
    var_48 = ((/* implicit */unsigned long long int) var_1);
}
