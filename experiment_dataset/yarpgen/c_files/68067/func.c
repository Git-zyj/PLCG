/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68067
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_3 [(unsigned short)14] [3LL] [i_1]);
            var_23 = ((/* implicit */signed char) (+(arr_4 [i_0] [i_0] [13U])));
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_24 ^= ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_1] [i_0])) ? ((+(((/* implicit */int) arr_8 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_2 [i_0])))))))));
            }
            for (signed char i_3 = 4; i_3 < 18; i_3 += 4) 
            {
                var_25 -= (!(((/* implicit */_Bool) arr_9 [11LL] [11LL])));
                var_26 = ((/* implicit */int) arr_2 [(_Bool)1]);
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_27 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_0]))))) : (arr_4 [i_0] [i_1] [i_4])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (arr_0 [i_1]) : (((/* implicit */long long int) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0 + 3] [i_0 + 3] [i_1] [i_0 + 3] [i_5] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(arr_6 [(signed char)7] [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5])) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_0]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */long long int) (!(arr_16 [1] [i_1] [i_4] [i_5] [i_6])));
                        arr_23 [i_5] [(unsigned char)4] [i_5] [i_4] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [12U] [i_1]);
                    }
                    arr_24 [i_0] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */short) arr_12 [i_0 + 2] [i_1] [i_0 + 2]);
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_1] [(signed char)9] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_3 [(unsigned char)3] [i_1] [i_4])))) ? (((/* implicit */int) arr_15 [i_4])) : ((~((~(((/* implicit */int) arr_21 [i_7]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) (+(arr_9 [i_0 + 3] [i_0 + 3])))) : (arr_13 [i_0 - 1] [i_1] [i_7] [i_1]))))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 - 2]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                    {
                        var_30 -= ((/* implicit */unsigned short) arr_20 [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [(short)0] [i_1])) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25784))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 2] [i_1] [(short)0] [i_1] [i_9])))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    arr_35 [0LL] [i_1] [(unsigned char)11] [i_10] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(arr_4 [i_10] [(_Bool)1] [9ULL])))) ? ((-(((/* implicit */int) arr_2 [i_10])))) : ((+(((/* implicit */int) arr_25 [i_0] [i_0] [i_4] [i_10]))))))));
                    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(_Bool)1] [i_1]))))) ? ((~(arr_14 [i_0] [i_1] [3U]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_0 - 1] [i_0] [i_1] [i_0] [i_4] [i_10])))))))) ? (((/* implicit */unsigned long long int) (-((-(arr_5 [i_4] [i_1] [i_0 - 2])))))) : (arr_1 [i_0 + 2])));
                    var_33 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        arr_40 [i_0] [i_1] [i_4] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_0])))))));
                        var_34 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_10] [i_11])) ? (((/* implicit */int) arr_29 [i_0] [i_1] [i_4] [i_10] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_10] [(unsigned char)11])))))))));
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) arr_18 [i_0] [i_10]);
                        var_35 &= ((/* implicit */int) arr_12 [(unsigned short)7] [i_4] [i_10]);
                    }
                    for (int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        arr_45 [i_12 + 2] [i_12] [i_12] [i_12] [i_12] [i_12 + 1] [16LL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))))))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_12] [i_1])) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_12] [i_4] [i_0])) ? (arr_38 [i_4] [i_1] [i_4] [i_4] [i_1] [i_12 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_10])))))) ? (((/* implicit */int) arr_39 [i_12] [i_12])) : (((((/* implicit */_Bool) arr_43 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_30 [i_1])) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_4] [i_10] [i_10] [i_12 + 2])))))))));
                        arr_46 [i_0 + 1] [i_1] [i_0 + 1] [i_10] [i_1] = ((/* implicit */_Bool) arr_3 [i_12] [i_10] [i_0]);
                        arr_47 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_4] [i_10] [i_12 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0]))) : (arr_14 [i_0] [i_1] [(_Bool)1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_4])))))))) ? ((-((~(arr_1 [i_10]))))) : (((/* implicit */unsigned long long int) arr_11 [2LL]))));
                    }
                }
                arr_48 [i_4] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_4] [i_4])) ? (arr_0 [i_0]) : (arr_0 [i_1])))))) ? (arr_11 [i_0]) : (((((/* implicit */_Bool) arr_36 [i_0] [(signed char)15] [(unsigned short)16] [(unsigned short)16] [i_4])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_0]))))) : (arr_0 [i_0])))));
                arr_49 [i_0] [i_0 + 2] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_25 [(short)6] [i_0] [i_0] [i_0])) ? ((~(arr_4 [i_0 - 2] [i_0 - 2] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_28 [(unsigned short)12] [(unsigned short)12] [i_0] [i_1] [i_0] [i_4] [7U])))))))));
            }
        }
    }
}
