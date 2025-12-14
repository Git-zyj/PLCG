/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58603
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
    var_16 |= ((/* implicit */unsigned char) var_9);
    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)156))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0 - 2])) | (((/* implicit */int) arr_1 [i_0 - 3])))), (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) min(((unsigned char)99), (arr_0 [(unsigned char)1]))))))));
        var_19 = ((/* implicit */short) arr_0 [i_0 - 3]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)9202)))))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1]))) * (var_3)))))));
        var_20 = ((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 3]));
        var_21 = ((/* implicit */long long int) min((((/* implicit */int) ((12582900887823971665ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_1)))))))), (((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-77))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = (+(((/* implicit */int) ((arr_4 [i_1 + 1]) <= (arr_4 [i_1 - 2])))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned char) arr_9 [i_1] [i_1 - 1] [i_3]);
                var_23 = ((/* implicit */unsigned long long int) var_0);
                var_24 &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(unsigned char)2] [(unsigned char)2]))))) ? ((+(arr_9 [i_1] [14ULL] [15ULL]))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))))));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                arr_14 [i_2] [3LL] [8LL] = ((/* implicit */unsigned char) arr_7 [i_4] [(unsigned char)6]);
                var_25 = ((/* implicit */unsigned short) arr_9 [i_4] [i_2] [i_1]);
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) > (arr_9 [i_1] [(signed char)9] [i_1]))))) - (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1 - 1]))) : (arr_8 [i_1] [i_2] [i_1]));
                var_27 = ((/* implicit */_Bool) min(((((-(((/* implicit */int) (unsigned char)174)))) * (((/* implicit */int) arr_12 [i_1 - 2] [i_2] [(unsigned char)0])))), (((/* implicit */int) min((arr_10 [i_1]), (arr_10 [i_4]))))));
                var_28 = ((/* implicit */long long int) arr_7 [i_1] [3]);
            }
            var_29 += ((/* implicit */_Bool) arr_10 [i_1]);
        }
        for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((signed char) ((arr_7 [i_1 + 1] [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) var_7)))))) : (var_13)))))));
            var_31 = var_0;
            var_32 = ((/* implicit */int) max((((((/* implicit */_Bool) var_7)) ? (arr_15 [i_1 - 2] [i_5 - 1] [i_5]) : (((/* implicit */long long int) arr_3 [i_1 + 1] [i_5 - 1])))), (((/* implicit */long long int) ((unsigned short) arr_13 [i_5] [i_5 + 3])))));
            var_33 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)139)) <= (((/* implicit */int) (unsigned char)74))));
            var_34 = ((/* implicit */long long int) min((((unsigned int) var_13)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)242)) : (((((/* implicit */int) (short)25098)) ^ (((/* implicit */int) (unsigned short)11378)))))))));
        }
        arr_17 [4] [i_1] = ((/* implicit */short) arr_7 [i_1] [i_1]);
        var_35 ^= ((/* implicit */long long int) ((int) var_5));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_36 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [(unsigned char)2] [i_6]))));
                    var_37 = ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) arr_7 [i_1 - 1] [i_1])))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1])));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_21 [i_7] [i_7] [i_7]), (arr_21 [i_7] [i_6] [i_7])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_18 [i_1 - 2])) : (var_4)))))) ? (((((/* implicit */int) arr_11 [i_1 + 1] [i_1 - 1])) | (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1])))) : ((+(((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        arr_26 [i_7] [(signed char)11] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (var_3) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_4)))));
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) (~(var_3)));
                            var_40 = var_9;
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_41 *= ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [(short)3]);
                            var_42 = ((((/* implicit */_Bool) (unsigned short)8528)) ? (-1014039773) : (((/* implicit */int) (unsigned char)215)));
                            arr_35 [i_1] [i_6] [i_7] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (unsigned char)32))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7] [i_1 + 1]))) : (1041611182U)));
                        }
                        var_43 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1 - 2] [13]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_44 = ((/* implicit */_Bool) var_2);
                        arr_39 [i_1 - 2] [i_1] [i_7] [i_1] = ((/* implicit */signed char) (_Bool)0);
                        var_45 *= ((/* implicit */signed char) ((var_7) - (((/* implicit */int) arr_31 [i_1 + 1] [i_1 + 1] [14]))));
                        var_46 = ((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [(signed char)15]);
                    }
                    arr_40 [i_7] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 1])), ((~(1014039772)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_12])) ? (arr_42 [i_12] [i_12]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_12] [i_12])) : (((/* implicit */int) arr_44 [22] [i_12]))))));
        var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        arr_45 [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) arr_42 [i_12] [i_12]));
    }
    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
    {
        arr_48 [11] = ((/* implicit */unsigned short) ((unsigned char) ((arr_22 [i_13] [i_13] [i_13] [i_13]) & (((/* implicit */unsigned long long int) 488857479U)))));
        arr_49 [i_13] &= arr_23 [i_13] [i_13] [i_13] [(unsigned short)10];
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (13667839188527079985ULL)))) ? ((-(((/* implicit */int) arr_13 [i_13] [i_13])))) : (min((((/* implicit */int) arr_11 [(_Bool)1] [10U])), (var_9)))));
    }
}
