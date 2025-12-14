/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82502
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)71), (arr_0 [i_0 + 3] [i_0 + 3])))) | (((((/* implicit */_Bool) 2686753648U)) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) (signed char)-10))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max(((short)3568), (((/* implicit */short) ((((/* implicit */int) min(((unsigned short)60117), ((unsigned short)42915)))) == (((/* implicit */int) min(((unsigned short)21722), (((/* implicit */unsigned short) (unsigned char)0))))))))));
        arr_4 [i_0] [i_0 + 2] = (signed char)-1;
        arr_5 [i_0] [i_0] &= ((/* implicit */unsigned short) (signed char)61);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0 + 2])))) * (min((((/* implicit */unsigned int) (short)3575)), (1437124082U)))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)21722)), (2275398727U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)185)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (((((unsigned int) (signed char)-39)) << ((((-(130427621U))) - (4164539667U)))))));
                            arr_16 [(unsigned char)0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (unsigned short)30975);
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned short)21722), (((/* implicit */unsigned short) (_Bool)1)))))));
                            var_21 = ((/* implicit */unsigned short) (+(((max((2686753626U), (((/* implicit */unsigned int) (unsigned char)185)))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60117)) - (((/* implicit */int) (unsigned short)48078)))))))));
                            var_22 ^= ((/* implicit */short) min((((((/* implicit */int) (unsigned short)57659)) & (((/* implicit */int) (unsigned char)229)))), (((/* implicit */int) max(((unsigned char)226), ((unsigned char)185))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [(unsigned short)1] [i_6] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (unsigned short)5418))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_1] [i_3] [(signed char)15] [i_3] [i_3 + 1] [(signed char)15] [i_6])) ^ (max(((~(((/* implicit */int) (signed char)-116)))), (((/* implicit */int) (short)-28747)))))))));
                            arr_23 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) var_5);
                            arr_24 [4U] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) max(((short)-26686), (((/* implicit */short) (signed char)-111))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-116)), ((unsigned short)65533))))));
                        }
                    }
                    for (signed char i_7 = 3; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_2] [(unsigned char)0] [(unsigned char)6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_0 + 2] [i_7 - 2] [i_8] [i_8] [i_8] [i_8])) / (((/* implicit */int) (unsigned char)185))));
                            var_24 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)52)))) * (((((/* implicit */_Bool) (unsigned short)19421)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [(signed char)3] [i_1] [i_2] [i_1]))))));
                        }
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)7680))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max(((short)3568), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)29))))))));
                            arr_36 [7U] [i_1] [i_2] [i_2] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((unsigned short)43813), (((/* implicit */unsigned short) (short)0)))))));
                        }
                        for (unsigned char i_11 = 3; i_11 < 16; i_11 += 3) 
                        {
                            var_27 *= ((signed char) arr_0 [i_0 + 1] [i_0 + 2]);
                            var_28 *= ((/* implicit */unsigned short) max((((((((/* implicit */int) (unsigned char)225)) >> (((((/* implicit */int) (signed char)-124)) + (140))))) | (((/* implicit */int) (unsigned char)108)))), (((((/* implicit */_Bool) max(((short)3568), (((/* implicit */short) (signed char)18))))) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-125))))));
                        }
                        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)109)), (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))))));
                        var_30 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) var_4)))), ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
                        var_31 = ((/* implicit */_Bool) ((3484836074U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6650)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)27)))) ^ (((((/* implicit */_Bool) (short)-7582)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) var_2))))));
                            arr_43 [i_1] [i_2] [(signed char)4] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_13 + 1]))));
                            arr_44 [i_1] = (!(((/* implicit */_Bool) (unsigned short)29798)));
                            var_33 = arr_20 [i_1] [i_2] [3U] [i_13 + 3];
                        }
                        for (short i_14 = 4; i_14 < 14; i_14 += 3) 
                        {
                            arr_47 [i_0 + 3] [i_12] [i_2] [(unsigned char)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_21 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) (unsigned short)0))));
                            arr_48 [i_0] [i_12] [(unsigned char)0] [(unsigned char)6] [i_1] [(unsigned char)6] [(short)2] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                            var_34 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)65519))))) == ((~(((/* implicit */int) (unsigned char)0))))));
                            arr_49 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0))));
                        }
                        for (unsigned short i_15 = 3; i_15 < 16; i_15 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_15 - 1] [i_15 - 1] [i_0 - 1] [(unsigned short)2] [i_0 - 1] [i_0 + 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                            arr_52 [(unsigned char)0] [i_2] [i_12] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-111))));
                        }
                        for (unsigned short i_16 = 3; i_16 < 16; i_16 += 4) /* same iter space */
                        {
                            arr_55 [i_0] [(unsigned char)9] [i_2] [i_12] [i_16] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_16 - 1] [i_0 + 1])) + (((/* implicit */int) (unsigned short)59771))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (short)3568))));
                        }
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)43657)) ? (((/* implicit */int) (short)3573)) : (((/* implicit */int) (signed char)-111))))));
                    }
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned short) var_9);
}
