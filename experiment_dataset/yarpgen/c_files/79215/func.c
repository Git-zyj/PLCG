/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79215
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
    var_10 |= ((/* implicit */long long int) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_9);
                            arr_17 [i_4] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) 7ULL)));
                        }
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [(unsigned char)9] [i_5] = ((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_5] [i_3] [i_3]));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(18446744073709551614ULL)));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) arr_3 [i_0] [i_2] [i_5]);
                        }
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            arr_26 [i_0] [(_Bool)1] [11LL] [i_3] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) ((_Bool) arr_14 [i_0] [(signed char)17] [i_2] [i_3] [(signed char)12]))) : ((~(((/* implicit */int) arr_25 [i_0]))))));
                            arr_27 [i_1] [i_6 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 + 2] [i_6 + 1])) || (((/* implicit */_Bool) arr_23 [i_6 + 1] [i_6 - 1] [i_6]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            arr_31 [13U] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [(unsigned char)15] [i_0] [i_1] [i_2] [i_3] [i_7]))));
                            arr_32 [(signed char)13] [i_1] [i_1] = var_0;
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [(signed char)0] [i_1] [i_1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))))) ? (((/* implicit */int) ((1080863910568919040LL) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (arr_8 [i_1] [i_1] [i_1] [i_1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            arr_36 [i_2] |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-6))));
                            arr_37 [i_8 + 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) 10962706012836967288ULL);
                            arr_38 [17U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)102)) ? (131008U) : (arr_18 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1])));
                            arr_39 [(_Bool)1] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)45);
                        }
                    }
                } 
            } 
        } 
        arr_41 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            arr_45 [i_0] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)448))))) ? (arr_44 [i_0]) : (((long long int) -1LL))));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 3; i_10 < 16; i_10 += 3) /* same iter space */
            {
                arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_30 [i_9] [i_10 - 1] [i_10 - 3] [(unsigned char)15] [i_10 + 2]));
                arr_51 [i_0] [i_9] [i_10 - 1] [i_10] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (arr_23 [i_10 - 1] [i_10 + 2] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_14 [i_0] [i_9] [i_10] [16LL] [i_10 - 1]))))))));
            }
            for (unsigned int i_11 = 3; i_11 < 16; i_11 += 3) /* same iter space */
            {
                arr_54 [i_9] [i_9] [0U] = ((/* implicit */signed char) ((unsigned int) (signed char)60));
                /* LoopNest 2 */
                for (signed char i_12 = 2; i_12 < 15; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            arr_61 [i_0] [i_12] [i_11] = (-(((/* implicit */int) arr_57 [(short)8] [i_11 - 1] [i_11] [i_12 + 2] [i_13])));
                            arr_62 [i_12] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (8070450532247928832ULL));
                        }
                    } 
                } 
                arr_63 [11U] [4LL] = ((/* implicit */unsigned int) var_2);
            }
            for (unsigned char i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                arr_67 [i_0] &= ((/* implicit */unsigned char) ((arr_58 [i_0] [i_0] [i_9] [i_9] [i_14] [i_14]) || (((/* implicit */_Bool) arr_8 [i_0] [i_9] [i_9] [i_14]))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        {
                            arr_73 [i_0] [i_14] = ((/* implicit */long long int) ((arr_56 [i_0] [i_0] [i_0] [i_14]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [12U] [i_16] [(signed char)3] [i_16] [i_15])))));
                            arr_74 [i_14] [i_15] [i_14] [i_9] [i_14] = ((/* implicit */signed char) ((_Bool) (unsigned char)48));
                            arr_75 [i_14] [(signed char)17] [i_15] = ((/* implicit */int) (unsigned char)128);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_81 [(short)17] [i_9] [i_14] [i_17] [i_17] [i_17] [i_14] = ((/* implicit */short) (+(((/* implicit */int) (short)-16739))));
                            arr_82 [i_14] [i_9] [(unsigned short)4] [i_17] [i_14] = (~(((/* implicit */int) ((signed char) arr_57 [i_14] [10ULL] [i_14] [i_14] [i_14]))));
                        }
                    } 
                } 
                arr_83 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_14] [i_14] [i_9] [i_9] [i_9] [i_0])) ? (((/* implicit */long long int) arr_9 [(unsigned short)9])) : (-1LL)));
            }
            arr_84 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) (signed char)-92);
        }
        for (int i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_20 = 1; i_20 < 17; i_20 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 2) 
                    {
                        {
                            arr_96 [i_0] [15LL] [i_20] [(unsigned char)0] [i_22] [i_19] [i_21] = ((/* implicit */signed char) ((unsigned int) 100663296));
                            arr_97 [i_19] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_0] [i_19] [i_20 - 1] [i_20 + 1] [i_20] [i_19])) ? (arr_68 [i_0] [i_19] [i_20 - 1] [i_20 - 1] [i_20] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                        }
                    } 
                } 
                arr_98 [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_72 [i_20 - 1] [i_20 + 1] [i_20 + 1]))));
            }
            for (signed char i_23 = 1; i_23 < 17; i_23 += 3) /* same iter space */
            {
                arr_101 [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_60 [i_19] [i_19] [i_23 + 1] [i_23 - 1] [3U] [i_23 - 1]))));
                arr_102 [i_0] [i_19] [i_0] = ((/* implicit */short) (-(((unsigned int) var_8))));
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 2; i_24 < 14; i_24 += 4) 
                {
                    arr_105 [i_0] [i_23] [i_23] [i_19] = ((/* implicit */signed char) 4398046511103ULL);
                    arr_106 [i_0] [i_0] [i_0] [i_24] &= ((/* implicit */long long int) arr_25 [1]);
                    arr_107 [i_24] = ((/* implicit */signed char) arr_0 [i_19]);
                    arr_108 [i_0] [i_19] [i_23 + 1] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_24 + 4] [i_19] [i_19] [i_23 - 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_19]))) * (arr_0 [i_19])))));
                }
                arr_109 [i_0] [i_19] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)3))));
            }
            for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_27 = 0; i_27 < 18; i_27 += 4) 
                    {
                        arr_117 [i_19] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)31)) > (((/* implicit */int) ((unsigned char) arr_1 [(signed char)1])))));
                        arr_118 [i_0] [i_19] = arr_103 [i_0] [i_0] [i_0] [i_19];
                        arr_119 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_19] = ((/* implicit */unsigned short) arr_57 [i_27] [i_26] [i_25] [i_19] [i_0]);
                        arr_120 [i_19] = ((/* implicit */_Bool) arr_7 [(_Bool)1] [4ULL] [i_25] [i_0]);
                    }
                    arr_121 [i_19] [i_19] [i_25] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_64 [i_0] [i_25] [i_26])) | (((/* implicit */int) arr_14 [i_0] [i_19] [(unsigned char)6] [i_25] [i_26]))));
                    arr_122 [i_19] [i_19] [i_19] [12LL] = ((/* implicit */signed char) -8LL);
                    arr_123 [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) arr_10 [i_0] [i_19]))));
                }
                arr_124 [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) ((unsigned char) var_4));
                arr_125 [i_0] [i_19] [i_25] [i_0] = ((unsigned char) arr_59 [i_0] [i_19] [i_19] [i_25] [i_25] [i_25] [i_25]);
            }
            for (signed char i_28 = 2; i_28 < 15; i_28 += 4) 
            {
                arr_128 [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_48 [(_Bool)1] [i_28 - 2] [i_0]))) - (arr_88 [i_19] [i_28 - 2] [i_19])));
                arr_129 [i_19] [(signed char)10] [12LL] [i_28 + 3] = ((/* implicit */unsigned int) (_Bool)1);
                arr_130 [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_116 [i_28 + 1] [i_19] [i_28 - 2] [i_19] [i_0])));
                arr_131 [i_19] [i_0] [i_19] [i_28] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) arr_42 [i_28] [i_19] [i_0])) : (((/* implicit */int) var_4)))))));
                arr_132 [i_0] [i_19] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 8U)) && (((/* implicit */_Bool) 93617444)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_0] [i_19] [i_28 + 2])) || (((/* implicit */_Bool) arr_89 [i_19] [i_19]))))) : (((/* implicit */int) arr_64 [i_0] [i_19] [i_28 - 2]))));
            }
            arr_133 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_103 [i_0] [i_19] [i_19] [i_0])) ? (((/* implicit */int) arr_103 [i_0] [i_0] [i_19] [i_0])) : (((/* implicit */int) arr_103 [(unsigned short)4] [i_0] [i_19] [i_0]))));
            arr_134 [i_19] = ((/* implicit */long long int) (signed char)73);
            /* LoopSeq 1 */
            for (short i_29 = 2; i_29 < 14; i_29 += 2) 
            {
                arr_138 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_126 [i_19] [i_19] [i_29 + 3] [i_29 + 2])) ? (((/* implicit */int) arr_112 [i_19])) : (((((/* implicit */_Bool) (short)-2046)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))));
                arr_139 [i_29] [i_19] [i_29 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_8))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_30 = 0; i_30 < 16; i_30 += 2) 
    {
        arr_144 [i_30] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_30])) * (((/* implicit */int) arr_49 [i_30] [i_30] [i_30]))));
        arr_145 [i_30] [i_30] &= ((/* implicit */unsigned int) var_1);
        arr_146 [i_30] = ((/* implicit */_Bool) arr_113 [i_30] [i_30] [i_30] [i_30]);
        arr_147 [i_30] [i_30] = ((/* implicit */unsigned long long int) ((int) var_0));
    }
}
