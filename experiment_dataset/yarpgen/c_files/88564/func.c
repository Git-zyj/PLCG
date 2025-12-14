/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88564
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */signed char) (-(var_5)));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) 1048575))))) ? (min((((/* implicit */long long int) var_4)), (288230367561777152LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)0), (((/* implicit */short) arr_13 [i_4] [i_1] [i_2 + 1] [i_3] [i_4] [i_1]))))))))) ? (1810955307780812227ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_6))))))));
                            var_12 = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) max((arr_12 [(short)3] [10U] [i_3] [i_4]), (((/* implicit */short) arr_13 [1U] [1U] [i_0] [i_3] [i_4] [i_1]))))))));
                            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_8 [i_0 + 1] [i_0 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0 + 1] [i_0 + 1] [i_1]) > (arr_8 [i_0 + 1] [i_0 + 1] [i_1]))))) : ((-(arr_8 [i_0 + 1] [i_0 + 1] [i_1])))));
                            var_13 *= max((var_5), (((/* implicit */unsigned int) var_2)));
                        }
                        for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) -1386629286)) - (-6944722628296720428LL)));
                            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) != (((long long int) (signed char)81)))))));
                        }
                    }
                    arr_18 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_10))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (signed char)-110))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_6] [i_6] [i_0 - 1]))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_25 [i_0] [i_6] [i_6] [6LL] [i_6] [i_8] &= ((/* implicit */unsigned short) var_4);
                    arr_26 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) ((arr_8 [(unsigned short)12] [i_6] [(unsigned short)12]) >> ((((+(((/* implicit */int) var_2)))) - (1911)))));
                    var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (-1386629286) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38091)))))));
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_6 + 3] [i_0 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-55))));
            }
        }
        for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_20 |= ((/* implicit */signed char) (((!((_Bool)1))) ? ((+(arr_0 [i_0] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_10)))))));
                arr_33 [i_10] [i_10] [i_9] [i_10] = ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (unsigned char)147)));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2093452960)))) ? ((+(((/* implicit */int) arr_17 [i_9] [i_9] [i_10] [i_11])))) : (((/* implicit */int) (signed char)-97))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_9))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        arr_38 [i_10] [(unsigned char)5] [(unsigned short)7] [i_10] [i_11] [(short)3] = ((/* implicit */signed char) 18446744073709551615ULL);
                        var_23 = ((/* implicit */unsigned int) ((((-1) + (2147483647))) >> (((7788665728657537216LL) - (7788665728657537208LL)))));
                    }
                    for (unsigned short i_13 = 4; i_13 < 9; i_13 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) (short)32747);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1237))) > (arr_21 [i_9] [i_11] [i_13 - 3]))) ? (arr_6 [i_9] [i_9] [10ULL] [i_11] [i_13] [i_11]) : ((~(1386629269))))))));
                        var_26 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_9))))));
                        arr_43 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_10] [9ULL]))))) ? (arr_19 [i_13 + 2] [i_9] [(_Bool)1]) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_17 [i_0] [i_9] [i_10] [i_11 + 2])) : (((/* implicit */int) (signed char)-35))))));
                    }
                }
                arr_44 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_9] [i_9] [(signed char)3]))))) != (((/* implicit */int) arr_28 [i_0 - 1]))));
            }
            var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_9] [i_9] [i_0]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)-18))))))))));
            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)18)) ? (arr_39 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) var_2))))), ((-(((((/* implicit */_Bool) (unsigned short)58272)) ? (arr_36 [i_9] [i_9] [1ULL] [(unsigned short)8] [i_0]) : (((/* implicit */unsigned int) 2147483647))))))));
            arr_45 [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-18)) || (((/* implicit */_Bool) 8LL))))) > (((/* implicit */int) (signed char)-14))));
            var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24))));
        }
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 13; i_15 += 2) 
            {
                for (long long int i_16 = 4; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))))) ? (arr_21 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_28 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775800LL))))) / (((/* implicit */long long int) ((((((((/* implicit */int) arr_1 [i_0] [(unsigned short)11])) | (((/* implicit */int) var_0)))) + (2147483647))) << (((((-667458408) + (667458411))) - (3))))))));
                        var_31 = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-10961)) + (2147483647))) << (((2147483647) - (2147483647))))) >> (((((/* implicit */int) min((((/* implicit */short) arr_37 [i_16 + 1] [0LL] [i_15] [i_0 - 1] [(_Bool)1] [i_15] [i_16])), ((short)-1041)))) + (1063)))));
                        arr_55 [i_0] [i_0] [i_0] [8] = ((/* implicit */unsigned long long int) (((+((+(((/* implicit */int) var_7)))))) | (((/* implicit */int) var_7))));
                        var_32 = ((/* implicit */signed char) ((max((((/* implicit */int) ((unsigned char) (unsigned short)58265))), ((~(((/* implicit */int) var_1)))))) ^ (((/* implicit */int) var_3))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 13; i_17 += 2) 
                        {
                            var_33 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)103))))) && (((/* implicit */_Bool) arr_28 [i_0 + 1]))));
                            var_34 = ((/* implicit */signed char) arr_37 [i_0] [i_0 + 1] [i_14] [i_14] [1ULL] [i_0] [i_17]);
                        }
                        for (int i_18 = 2; i_18 < 12; i_18 += 2) 
                        {
                            arr_62 [i_0] [i_0 + 1] [i_0] [i_15] [i_15] [i_16] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1543883878)) ? ((~((+(((/* implicit */int) (unsigned char)226)))))) : (1386629285)));
                            arr_63 [i_0] [i_14] [i_15] [i_15] [i_15] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((-1982693870), (((/* implicit */int) var_0))))))) || (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_14] [i_15])) && (((/* implicit */_Bool) var_2))))), ((-(-1386629286))))))));
                            var_35 = ((/* implicit */signed char) var_5);
                            arr_64 [i_18] [i_14] = -1;
                            var_36 &= ((/* implicit */int) (((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)65526))))))) != (((/* implicit */int) var_4))));
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), ((-(max((arr_0 [(unsigned char)11] [(unsigned char)11]), (((/* implicit */long long int) arr_2 [i_14] [i_14])))))))))));
        }
    }
}
