/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55651
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
    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_3)))))) - (max((var_11), (var_11)))));
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_4 [1LL] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))));
            arr_5 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 981789844U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)94)))));
            arr_6 [i_0] [i_0] [6LL] = ((/* implicit */unsigned char) arr_2 [0]);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))));
            arr_8 [(unsigned char)10] [10LL] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(6117573971991249616ULL)));
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] &= ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_7))));
                            arr_23 [2U] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_3] [i_4])) < (((/* implicit */int) var_12))));
                            arr_24 [i_0] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]);
                            arr_25 [i_0] [i_0] [2LL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_20 [i_0] [11ULL])) : (((/* implicit */int) arr_17 [i_0] [i_3] [i_0]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    arr_28 [i_0] [i_2] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_6])) | (((/* implicit */int) arr_13 [i_0] [i_0]))));
                    arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_0] [i_6] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)41381)) : (((/* implicit */int) arr_0 [i_6]))))));
                    arr_30 [i_0] [10U] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_2] [i_3])) % (((/* implicit */int) (signed char)-8))));
                }
            }
            for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_36 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) >= (((((/* implicit */_Bool) (signed char)-30)) ? (-5136935564394788150LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    arr_37 [i_0] [i_0] [i_7] [i_8] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) arr_32 [i_0] [i_0] [i_7 + 2])))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                    arr_39 [13LL] [i_0] [i_7] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) arr_35 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 1]))));
                    arr_40 [i_0] [i_0] [i_7 - 1] [i_0] = ((/* implicit */long long int) ((signed char) (unsigned char)94));
                }
                arr_41 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_7])) ? (981789832U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41458)))))) >= (arr_10 [i_0] [i_7 + 1])));
                /* LoopSeq 1 */
                for (int i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_50 [i_0] = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_9)) != (((/* implicit */int) (short)-24))))));
                        arr_51 [i_0] [i_0] [i_0] [i_9] [9LL] = ((/* implicit */unsigned int) (-(var_13)));
                    }
                    arr_52 [i_0] [i_2] [i_7 - 1] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_9]))));
                }
            }
            for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    for (long long int i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_13 + 1] [i_11 + 1]))));
                            arr_63 [(signed char)15] [(signed char)15] [i_11 + 1] [(unsigned short)16] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) << (((((((/* implicit */int) (signed char)-104)) + (125))) - (9)))));
                            arr_64 [i_0] [i_12] [i_11 + 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_13 + 2] [i_13] [i_13] [i_13 + 1] [i_13 + 4] [i_13 + 1])) ? (arr_46 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_15 [i_13 + 3])));
                            arr_66 [i_0] [i_2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)42665)) ? (((/* implicit */int) (unsigned short)24077)) : (((/* implicit */int) (unsigned char)206)))));
                        }
                    } 
                } 
                arr_67 [i_0] = ((long long int) arr_56 [i_11 - 1] [i_11 + 1] [i_11]);
            }
            for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (short i_16 = 1; i_16 < 16; i_16 += 3) 
                    {
                        {
                            arr_77 [i_0] [i_2] [i_0] [i_15] = ((/* implicit */signed char) var_15);
                            arr_78 [i_0] [(short)1] [i_14] [i_15] [i_0] = ((/* implicit */unsigned int) ((arr_19 [i_16 + 2] [i_16 - 1] [i_16] [i_16] [i_16 + 2] [i_16 + 2] [i_16 - 1]) != (arr_10 [i_0] [i_16 + 2])));
                            arr_79 [i_0] [(_Bool)1] [i_16] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
                            arr_80 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_16 + 2] [i_16 + 2])) ? (((/* implicit */long long int) ((arr_75 [i_0] [i_2] [i_14]) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_13 [i_15] [i_16]))))) : ((-(var_5)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_17 = 2; i_17 < 17; i_17 += 3) 
                {
                    arr_83 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */int) arr_32 [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_18 = 3; i_18 < 15; i_18 += 3) 
                    {
                        arr_88 [i_0] = ((/* implicit */long long int) arr_17 [i_17 - 2] [i_18 - 1] [i_0]);
                        arr_89 [i_0] [i_2] [i_14] [i_17 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_2]))) | (3027849765U)));
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        arr_93 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned short)52633)) : (((/* implicit */int) var_14))));
                        arr_94 [i_0] [i_0] = ((/* implicit */short) ((arr_46 [i_19] [i_19 - 1] [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_19]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41458)))));
                    }
                }
                for (unsigned short i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    arr_98 [i_0] [i_2] [i_0] [i_0] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_14] [i_20])) ^ (((((/* implicit */int) (signed char)83)) * (((/* implicit */int) arr_55 [i_0] [i_0] [i_2] [(short)6] [i_2]))))));
                    arr_99 [(signed char)15] [i_2] [i_14] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */long long int) var_11)) : (arr_90 [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_87 [i_0] [2] [i_0] [i_14] [i_0] [i_0]))))) : (((/* implicit */int) arr_85 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        arr_102 [(unsigned short)12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_0] [i_2] [i_14] [i_14] [11U] [i_21])) ? (((/* implicit */int) ((short) arr_85 [i_0] [i_0] [i_0] [(short)9] [(unsigned short)17] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) < (3313177452U))))));
                        arr_103 [i_0] [i_2] [(unsigned short)12] [i_0] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_0])) && (((/* implicit */_Bool) arr_86 [i_0] [i_2] [i_0] [i_20] [i_21]))));
                    }
                }
            }
        }
        for (long long int i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_23 = 2; i_23 < 16; i_23 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    arr_112 [i_0] [i_0] [i_22] [i_23] [i_23] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) >> (((/* implicit */int) arr_108 [i_0] [i_22] [i_23]))))) ? (((int) -723514744720752844LL)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24078)) && (((/* implicit */_Bool) var_15)))))));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        arr_115 [i_24] [i_22] [15U] [i_0] [i_24] = ((/* implicit */long long int) arr_15 [i_0]);
                        arr_116 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) var_15)) | (arr_46 [i_23 + 1] [i_23] [i_23 - 2] [i_23 + 2] [i_23 + 1] [i_23 + 2])));
                    }
                    arr_117 [i_23] [i_23 + 2] [i_23 - 1] [i_23 + 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-10030))) + (arr_90 [i_0])))) ? (((/* implicit */int) arr_32 [i_23 - 2] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [11LL])) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_4)))));
                    arr_118 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)205)))) ? (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10030))) : (-6632004948178729666LL))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))) : (var_5)))));
                    /* LoopSeq 3 */
                    for (long long int i_26 = 3; i_26 < 16; i_26 += 4) 
                    {
                        arr_121 [i_26 - 3] [i_0] [i_23 - 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) arr_60 [i_26] [i_22] [i_23] [i_22] [(signed char)7])) < (((/* implicit */int) arr_69 [i_26 - 2] [i_24] [i_23] [i_22]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_23])))))));
                        arr_122 [(unsigned char)1] [i_22] [i_23] [i_0] [i_0] [i_26 + 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) arr_91 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))) | (((((/* implicit */_Bool) arr_69 [(_Bool)1] [i_24] [i_23] [i_22])) ? (var_0) : (arr_10 [i_0] [i_0])))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 18; i_27 += 1) 
                    {
                        arr_125 [i_0] [i_0] [i_22] [i_23 - 1] [i_23] [i_0] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_105 [i_22] [i_24] [i_27]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_86 [i_24] [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) arr_85 [(unsigned short)16] [i_0] [(unsigned short)16] [i_22] [i_23] [i_24] [i_0]))))) : ((-(var_1)))));
                        arr_126 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((var_0) == (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_127 [i_0] [i_22] [i_0] [i_24] [i_27] [i_27] = ((/* implicit */long long int) (+(arr_31 [i_0] [i_23 - 1] [i_0])));
                    }
                    for (unsigned int i_28 = 4; i_28 < 16; i_28 += 1) 
                    {
                        arr_131 [i_0] [i_22] [i_23] [i_24] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4477017624519702980LL)) ? (((/* implicit */int) arr_33 [i_23 - 2])) : (((/* implicit */int) arr_59 [i_23 - 1] [i_23] [i_23 + 1] [i_23 + 2] [i_28 + 2]))));
                        arr_132 [i_0] [i_22] [i_23 + 1] [i_22] [i_28] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_44 [i_23 - 2] [i_22] [i_22] [6U] [i_28 - 2] [i_24])) > (3313177452U)));
                        arr_133 [i_28 + 2] [i_0] [i_22] [i_22] [i_0] [16] = ((/* implicit */long long int) (unsigned short)1527);
                    }
                }
                arr_134 [i_0] [i_22] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_0] [i_22] [i_23 - 1] [i_0])) + (var_15)));
                arr_135 [i_22] [i_0] = ((/* implicit */signed char) ((((arr_56 [i_23 - 1] [i_23] [i_23 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_100 [i_23 + 1] [i_23 + 1] [i_23] [i_23] [i_23 - 1]))));
                arr_136 [i_0] [9LL] = ((/* implicit */signed char) arr_49 [i_23 + 1] [i_23 - 2] [i_23 - 1] [i_23] [i_23]);
                arr_137 [i_0] [i_22] [i_22] = ((/* implicit */long long int) (+(arr_42 [i_23] [i_22] [i_0] [i_0] [i_0])));
            }
            arr_138 [i_0] [i_0] = ((/* implicit */signed char) (~(13346296132231462650ULL)));
            arr_139 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_109 [i_0] [i_0]));
        }
        arr_140 [i_0] = ((/* implicit */int) arr_9 [i_0]);
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        arr_143 [i_29] = ((/* implicit */int) max((2925427370U), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_141 [i_29] [i_29])))) >> (((((arr_142 [i_29]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_141 [i_29] [i_29]))))) - (153087624U))))))));
        arr_144 [i_29] = ((/* implicit */long long int) ((((((var_7) + (9223372036854775807LL))) << (((3013647072U) - (3013647072U))))) >= (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_142 [i_29]))))))))));
    }
}
