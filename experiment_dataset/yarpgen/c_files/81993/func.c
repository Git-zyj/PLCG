/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81993
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) var_4);
                            var_18 = ((/* implicit */unsigned int) var_1);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(signed char)9] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 1] [i_2 + 3] [i_1 + 2]))))))));
                        }
                    } 
                } 
                arr_11 [7LL] [i_1] [i_0] = ((/* implicit */int) arr_8 [(signed char)16] [i_1] [i_2] [i_1]);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_7 [i_1 - 1] [i_1] [i_1])) | (arr_10 [i_1] [i_2 + 1])));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1] [i_2 + 2])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)-74))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) arr_7 [i_2] [i_1] [i_2 + 1]);
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_10 [i_5] [i_1]))));
                    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_9 [i_0])))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) (unsigned short)1))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) arr_14 [i_1] [i_0] [i_2 - 1] [i_6]);
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_2 - 1] [(unsigned short)7]);
                }
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_1] [i_1 - 2] [15U] [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_1] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_2 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 - 2] [i_2 + 3] [i_1]))) : (12ULL)));
                        arr_27 [(unsigned short)2] [i_0] [i_1 - 2] [i_2] [i_1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)65511))))) ? ((+(5440671823087528161LL))) : (arr_10 [i_1] [i_2 - 1])));
                        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)0))));
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    var_28 *= ((unsigned short) (!(((/* implicit */_Bool) var_12))));
                    var_29 *= ((/* implicit */signed char) ((arr_4 [20LL] [i_1 - 1] [i_1 + 1] [20LL]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)16] [i_2] [(unsigned short)16])))));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(1172599227U))))));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_9))));
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_33 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */long long int) arr_22 [i_0] [i_1 - 3] [i_0] [i_10] [i_9]);
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_0 [i_0]))));
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_37 [i_0] [i_0] [i_9] [i_10] [(unsigned char)0] [i_0] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)20601))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_7 [10] [i_9] [i_9]))));
                        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [(_Bool)1] [i_11 + 1] [i_11]))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 4; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        var_35 -= var_1;
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -7882664334748865876LL)) ? (arr_39 [i_1] [i_1] [i_12 - 3] [i_10] [i_12]) : (arr_39 [i_1] [i_1 + 1] [i_12 - 4] [i_1 + 1] [i_12])));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 4; i_13 < 20; i_13 += 1) /* same iter space */
                    {
                        var_37 *= ((/* implicit */unsigned int) (-(var_7)));
                        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
                        var_39 = ((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_13 - 2] [i_13 - 2]))));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) arr_13 [i_0] [(unsigned char)4] [i_0] [i_0] [i_0]);
                        arr_49 [i_1] [i_1] [i_10] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_47 [i_0] [7U] [i_1] [i_0] [i_1 - 2] [i_10] [i_14])) ? (((/* implicit */unsigned int) arr_47 [1U] [(_Bool)1] [i_1] [i_1] [i_1 + 1] [15U] [i_10])) : (arr_39 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        var_41 = ((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_9] [i_10] [i_1]);
                    }
                    var_42 = ((/* implicit */signed char) var_1);
                }
                for (unsigned short i_15 = 2; i_15 < 19; i_15 += 4) 
                {
                    arr_52 [i_1] [i_1] [(signed char)11] [i_1] = ((/* implicit */unsigned short) arr_30 [i_9] [i_9] [i_9] [i_9]);
                    var_43 = ((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_15 + 2]);
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_44 -= ((/* implicit */signed char) (((~(((/* implicit */int) arr_34 [i_1 - 1] [i_1] [i_1] [i_15 - 2] [i_15 + 2])))) & (((((/* implicit */_Bool) arr_34 [i_1 - 1] [i_9] [i_15] [i_15 - 2] [i_16])) ? (((/* implicit */int) arr_34 [i_1 - 1] [i_9] [i_9] [i_15 - 2] [i_15])) : (((/* implicit */int) arr_34 [i_1 - 1] [i_1] [i_15 + 2] [i_15 - 2] [i_15]))))));
                        arr_56 [i_0] [i_1] [i_0] [i_15] [i_16] = ((/* implicit */signed char) (+((+(arr_1 [i_0] [i_9])))));
                        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((unsigned int) var_0)))));
                        var_46 -= ((/* implicit */unsigned short) (~((-(arr_9 [i_1 - 1])))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        {
                            arr_64 [i_0] [i_1] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1])), (29ULL)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) <= (arr_61 [i_9] [i_17] [i_18]))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_0] [i_1]))))) : (arr_62 [i_18] [i_17] [i_9] [i_1 + 2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_17])))));
                            var_47 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)63683))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (arr_3 [i_0]))))), (((/* implicit */unsigned int) ((unsigned short) arr_54 [i_1 + 1] [i_9])))));
                            arr_65 [i_0] [i_1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_0] [i_17] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_46 [i_1] [i_1 - 2] [i_18] [i_17] [i_18]))));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) arr_5 [i_1] [i_1 - 3] [i_9] [i_9])) / (arr_47 [i_0] [i_0] [i_1 - 3] [i_9] [i_9] [i_17] [i_18])))));
                        }
                    } 
                } 
                var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) (unsigned char)116))));
            }
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                arr_68 [i_0] [i_0] [i_19] [i_1] = arr_6 [i_1] [i_1 + 1] [i_19] [i_19];
                var_50 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_19] [i_19] [i_1] [i_0] [i_0])))))));
            }
            var_51 |= ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 760716913U)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [1]))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            for (unsigned int i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                {
                    var_52 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)48551))))) ? (((/* implicit */int) arr_5 [i_20] [4LL] [i_20] [i_21])) : (((/* implicit */int) (unsigned short)48224))));
                    arr_74 [i_21] = ((/* implicit */unsigned short) arr_54 [i_21] [(signed char)8]);
                }
            } 
        } 
        var_53 = ((/* implicit */signed char) (unsigned short)0);
    }
    for (signed char i_22 = 2; i_22 < 21; i_22 += 2) 
    {
        var_54 = arr_76 [i_22 + 1] [i_22 + 1];
        /* LoopNest 3 */
        for (unsigned short i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                for (unsigned short i_25 = 1; i_25 < 21; i_25 += 4) 
                {
                    {
                        arr_87 [i_22] [i_24] [i_23] [i_23] [i_22] [i_22] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) arr_83 [i_25 + 1] [i_22 + 1] [i_22 + 1] [i_22 - 1])) - (var_7)))));
                        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_86 [i_22] [i_23] [i_25 - 1] [i_22 + 1])) * (((long long int) arr_86 [i_24] [i_24] [i_25 + 1] [i_22 - 2])))))));
                    }
                } 
            } 
        } 
        arr_88 [i_22] [i_22] = ((/* implicit */short) (+(((/* implicit */int) arr_75 [i_22]))));
        arr_89 [i_22] |= ((/* implicit */long long int) ((((/* implicit */int) arr_85 [(signed char)0] [i_22] [i_22 - 1] [i_22] [(signed char)0] [i_22])) > (((/* implicit */int) ((signed char) arr_81 [i_22] [i_22 - 2] [i_22])))));
    }
}
