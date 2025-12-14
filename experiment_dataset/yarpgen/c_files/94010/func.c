/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94010
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((-1510842060138869576LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)21))))))) : (max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)27415)) : (var_12))))))));
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (201326592) : (-952933161))) : (((((/* implicit */int) arr_0 [(short)9] [i_1])) | (((/* implicit */int) (short)18179))))));
                var_17 = ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-1)) ^ (201326592))));
                var_18 = ((/* implicit */short) ((arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                var_19 = ((/* implicit */signed char) (((-(((/* implicit */int) var_1)))) & (var_12)));
            }
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_20 = ((/* implicit */short) min((717189048U), (((/* implicit */unsigned int) (_Bool)0))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        {
                            arr_17 [i_0] [12U] [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (1365100838) : (arr_3 [i_0])))));
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_0] [i_4 - 3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 16; i_6 += 3) 
                {
                    for (short i_7 = 3; i_7 < 16; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)16836))));
                            var_23 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_6 - 1]);
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])))))))), (134215680U)));
        }
        for (int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) arr_9 [i_0] [(short)5] [i_0] [i_0]);
            var_26 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_8] [i_0]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 3) 
            {
                arr_27 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-201326592) : (arr_9 [i_9] [i_9] [i_9 + 1] [i_9])));
                arr_28 [12ULL] [12ULL] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 3] [i_9 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 2] [i_9 + 3]))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_10))));
                var_28 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) == (arr_24 [i_0]))) ? (arr_13 [i_0] [i_0] [i_0 - 3] [i_0 + 1] [i_0 - 2]) : (var_14)));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)23432)) ? (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_8] [i_0]))) : (((/* implicit */int) var_9))));
            }
            for (short i_10 = 1; i_10 < 14; i_10 += 2) 
            {
                var_30 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) 1555078657U)))));
                var_31 = ((/* implicit */unsigned int) (+((+(max((var_5), (((/* implicit */unsigned long long int) var_7))))))));
            }
            /* LoopSeq 4 */
            for (int i_11 = 1; i_11 < 16; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    var_32 = ((/* implicit */short) min((((long long int) max((var_3), (((/* implicit */unsigned short) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2523860730U)) ? (-1365100839) : (((/* implicit */int) (signed char)-1)))))));
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_7)))))) & (arr_33 [i_0] [14LL] [14LL] [i_0]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_34 [12] [12] [i_13]))));
                        var_35 = ((/* implicit */long long int) (((!(((((/* implicit */int) (unsigned char)64)) == (-1365100842))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [(unsigned char)7] [i_12 - 2])) ? (((/* implicit */long long int) var_2)) : (arr_38 [i_0] [i_0] [i_12 + 2] [i_13]))))))) : (((((/* implicit */_Bool) max((-542926856161709632LL), (arr_33 [i_8] [i_13] [i_11] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) (short)-20108))))))));
                    }
                    var_36 = ((/* implicit */unsigned int) var_9);
                    var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_20 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [6LL] [i_0 - 3]) != (((/* implicit */long long int) ((/* implicit */int) (short)7743)))))), (arr_40 [i_12] [i_11 + 1] [i_8] [i_0 - 3])));
                }
                for (short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_11] [i_8] [i_0])) ? (arr_38 [i_0] [i_0] [i_0] [i_0]) : (var_14)));
                    arr_44 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) arr_38 [i_0] [i_0] [i_0] [(short)4]);
                    var_39 = ((/* implicit */unsigned char) (~(var_13)));
                }
                var_40 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))), ((~(min((var_14), (((/* implicit */long long int) -201326613))))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 16; i_15 += 2) 
                {
                    for (unsigned short i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_45 [i_8] [i_16 + 1])) ? (arr_45 [i_0 + 1] [i_8]) : (arr_45 [i_0 + 1] [i_11 + 1]))), (((((/* implicit */_Bool) arr_45 [i_15 - 2] [i_11 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_45 [i_0 - 2] [i_15 - 3])))));
                            var_42 = ((/* implicit */long long int) (unsigned char)227);
                            arr_51 [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_41 [0LL] [i_15 - 1] [i_15] [i_0] [0LL])), (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_0] [i_15 - 3] [i_15 - 2] [i_0] [i_15 - 3])) ? (((/* implicit */int) arr_41 [i_0 + 1] [i_15 + 1] [i_16] [i_0] [i_16])) : (((/* implicit */int) (unsigned short)8852)))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 1; i_17 < 16; i_17 += 2) /* same iter space */
            {
                arr_55 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_13)), (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_30 [i_8] [i_0 - 1]))))))))));
                var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((1365100838) - (((/* implicit */int) (unsigned char)33))))) / (min((((/* implicit */unsigned int) (unsigned char)22)), (var_0)))))) ? (((unsigned long long int) max((var_7), ((short)5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_24 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_8]))) : (var_14))))))));
            }
            for (int i_18 = 1; i_18 < 16; i_18 += 2) /* same iter space */
            {
                arr_58 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_56 [i_0 + 1]))))) ? (arr_40 [i_0 + 1] [(unsigned short)12] [i_18] [i_18]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                var_44 = ((/* implicit */unsigned int) var_2);
            }
            for (int i_19 = 1; i_19 < 16; i_19 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    var_45 = ((/* implicit */signed char) (-(arr_4 [i_0] [i_0] [i_0])));
                    var_46 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)255)))) - (((/* implicit */int) var_7))));
                }
                arr_63 [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    for (short i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        {
                            var_47 = (-(402653184));
                            arr_68 [i_0] = ((short) ((((/* implicit */_Bool) arr_37 [i_0 - 3] [i_19 + 1] [i_19 + 1] [4LL] [i_22])) ? (arr_48 [i_0] [i_19 + 1] [i_22] [i_22]) : (arr_48 [i_0] [i_19 + 1] [i_22] [i_22])));
                            var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_1))), (((((/* implicit */_Bool) arr_39 [i_0 - 1] [i_21] [i_19 - 1] [(short)4] [i_21] [(short)6])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))) ? (((((/* implicit */int) (short)18483)) - (((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) arr_2 [i_21]))));
                            arr_69 [i_22] [i_0] [i_19 + 1] [i_0] [i_0] = ((/* implicit */short) min((min((arr_35 [i_0]), (((/* implicit */int) var_6)))), ((+(((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_8] [i_19] [i_21] [i_19])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)425))))))));
                        }
                    } 
                } 
            }
        }
        var_49 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_2)), (arr_30 [i_0 - 1] [i_0 - 2]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_30 [i_0 - 3] [i_0 + 1]))))));
        /* LoopNest 2 */
        for (unsigned int i_23 = 1; i_23 < 13; i_23 += 3) 
        {
            for (unsigned int i_24 = 0; i_24 < 17; i_24 += 2) 
            {
                {
                    var_50 = ((/* implicit */int) var_10);
                    arr_76 [i_0] [i_0] [i_23] [i_24] = ((short) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_56 [i_0 - 3]))));
                }
            } 
        } 
        var_51 = arr_53 [i_0] [i_0] [i_0 - 1];
    }
    for (unsigned char i_25 = 1; i_25 < 16; i_25 += 3) 
    {
        var_52 = ((/* implicit */short) (~(((((((var_12) + (2147483647))) << (((var_0) - (504922126U))))) | (((/* implicit */int) ((((/* implicit */int) arr_79 [i_25 + 1] [i_25])) == (((/* implicit */int) var_1)))))))));
        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (short)30276)))) : (((((/* implicit */int) arr_79 [(unsigned short)17] [i_25])) / (((/* implicit */int) (short)-32759))))))) ? (((/* implicit */unsigned long long int) arr_78 [i_25] [i_25 - 1])) : (max((((/* implicit */unsigned long long int) 8830962933060048506LL)), (((unsigned long long int) arr_77 [i_25]))))));
    }
    /* LoopSeq 2 */
    for (signed char i_26 = 0; i_26 < 16; i_26 += 4) 
    {
        var_54 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_40 [i_26] [i_26] [i_26] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (var_14))) >> (((((/* implicit */int) arr_7 [i_26] [i_26] [i_26])) - (28013)))));
        arr_82 [i_26] = ((/* implicit */long long int) var_4);
        var_55 = ((/* implicit */unsigned short) arr_38 [i_26] [i_26] [i_26] [6U]);
        var_56 = ((/* implicit */short) ((((((/* implicit */_Bool) 3584U)) || (((/* implicit */_Bool) (short)-32759)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_26] [i_26] [i_26]))) : (var_8)));
    }
    for (short i_27 = 4; i_27 < 10; i_27 += 1) 
    {
        var_57 = ((/* implicit */unsigned int) ((arr_13 [13LL] [i_27] [i_27] [i_27] [i_27 - 2]) | (((/* implicit */long long int) var_0))));
        arr_87 [i_27] [8LL] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_83 [i_27] [i_27]))));
    }
}
