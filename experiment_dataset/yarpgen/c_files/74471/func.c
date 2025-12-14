/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74471
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8811218296128644436ULL), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */short) max((arr_1 [i_0]), ((+(arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((arr_4 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))))) > (max((564624866), (((/* implicit */int) arr_5 [i_1 + 1])))))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                arr_8 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) arr_7 [i_1 - 2] [i_2] [i_1 - 2])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3124)) - (-1610901247)))) ? (max((((/* implicit */unsigned int) (signed char)28)), (2767612510U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10441)) % (((/* implicit */int) (signed char)33)))))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 3]))) / (3701383597U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)184))))) : (-1LL))))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) == (((((/* implicit */_Bool) (unsigned short)61886)) ? (max((((/* implicit */unsigned long long int) (signed char)93)), (2213243829595138974ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))))))));
            }
            for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_13 [(unsigned char)9] [i_1] = ((/* implicit */int) ((unsigned char) (~(max((arr_6 [i_4]), (((/* implicit */long long int) 2037771567)))))));
                    arr_14 [i_3 + 2] = arr_11 [i_1] [i_3];
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 2] [i_1 + 1])) ? (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (short)13430)) : (((/* implicit */int) (signed char)-120)))) : ((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_2 [i_0]))))))) / (max((var_13), (((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_1 - 2] [i_1 - 1]))))));
                    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_4] [i_3] [(unsigned char)5] [i_1] [i_0]))));
                    arr_15 [i_0] [(unsigned short)3] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-55), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4]))))))))) > (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)56))))) ^ (arr_6 [i_0])))));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_6] [i_6] = ((/* implicit */int) arr_20 [i_0] [i_0] [i_6] [i_0] [i_0]);
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-37))))) < (((/* implicit */int) arr_7 [i_0] [i_0] [i_3 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) ^ (var_2)))) ? (((/* implicit */int) arr_19 [i_3 + 1] [i_3] [i_3 - 1] [i_1 - 3] [(unsigned short)16])) : (((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_17))))))));
                    }
                    var_27 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_5 [i_3])))) ? (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_5])))) : (((/* implicit */unsigned long long int) max((arr_6 [i_0]), (((/* implicit */long long int) var_7))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            arr_28 [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)71)), (arr_17 [i_3 + 1] [i_3] [i_3] [i_7 + 1]))))));
                            arr_29 [i_1] [15ULL] [i_3] [i_3 + 2] [i_8] [i_7] = ((/* implicit */unsigned long long int) max(((signed char)19), ((signed char)38)));
                            arr_30 [9] [9] [i_3] [i_3] [i_7] [i_8] = arr_4 [(short)16];
                        }
                    } 
                } 
                arr_31 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */signed char) arr_12 [i_0] [i_1 + 2] [i_3 + 2] [i_1 - 3] [i_3]);
            }
            for (int i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                arr_34 [i_1] [i_1 + 1] [i_9] = ((/* implicit */_Bool) ((max((((((/* implicit */int) var_5)) << (((((-536374796) + (536374818))) - (11))))), (((/* implicit */int) ((unsigned short) (unsigned char)69))))) & (((arr_4 [i_1]) ? (((((/* implicit */_Bool) -589795017)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_17 [i_0] [i_1 - 2] [i_9] [i_9])))) : (((((/* implicit */int) (unsigned char)72)) | (((/* implicit */int) (unsigned short)60699))))))));
                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1148896696)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_9] [(_Bool)1]) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_9])))))))) : (arr_1 [i_0])));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            arr_39 [i_0] [i_10] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-298), (((/* implicit */short) (unsigned char)26))))) ? (((/* implicit */int) (signed char)-37)) : (((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (unsigned short)26090)) : (((/* implicit */int) arr_12 [i_10] [(unsigned char)8] [i_0] [i_0] [2]))))))) ? (((int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (signed char)-73))))) : (((((/* implicit */_Bool) (signed char)-27)) ? (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_0)) - (28165))))) : (((/* implicit */int) arr_5 [i_10]))))));
            arr_40 [5LL] [i_10] [i_0] = ((/* implicit */unsigned long long int) max((((((arr_21 [i_10] [(unsigned char)16] [i_10] [(signed char)15] [i_10] [i_10] [5U]) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((unsigned char) 9223372036854775792LL))))), (((/* implicit */int) (!(((/* implicit */_Bool) 959935999U)))))));
            arr_41 [i_10] = (unsigned short)0;
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (short)4769);
            /* LoopSeq 1 */
            for (int i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                var_30 *= var_9;
                arr_47 [i_12] [i_12] = ((/* implicit */int) ((long long int) arr_5 [i_12 + 1]));
            }
            arr_48 [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_11] [i_11] [i_11]))));
        }
    }
}
