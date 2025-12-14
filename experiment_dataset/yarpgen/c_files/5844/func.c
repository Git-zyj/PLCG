/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5844
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 2])) >= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) var_13))))));
                arr_11 [i_2] [i_2] = ((/* implicit */signed char) arr_7 [i_0 - 1] [i_0 + 1] [i_0] [0U]);
            }
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_17 = ((/* implicit */short) min((var_17), ((short)32767)));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0 + 2] [i_0 - 1] [i_0 + 1]))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [7] [(short)9] [(short)9] [7]))) : (1462898304U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_0] [i_0 - 1] [i_0 + 2])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                {
                    arr_21 [3LL] [i_0] [i_3] [i_1] [i_1] [i_0] &= (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) ^ (var_14)))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), ((~(arr_8 [i_6] [i_1] [i_1] [i_0])))));
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_7] [i_3] [(unsigned char)0] [i_1] [(short)12] [i_0] = arr_7 [i_0 - 2] [i_3] [i_1] [i_0 - 2];
                    arr_25 [0U] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) arr_17 [i_7] [i_7] [i_3] [i_1] [i_0]);
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */short) (signed char)-124);
                        arr_28 [i_8] [i_8] [7] [i_1] [7] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)32767))) ? (((/* implicit */int) (short)14761)) : (((/* implicit */int) ((unsigned short) 33488896U)))));
                        arr_29 [i_8] [i_7] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_0] [i_7] [i_1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)181))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) % (2949885243U)))));
                        arr_30 [i_8] [i_7] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)13493)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) : (arr_8 [i_0 - 1] [i_1] [i_1] [i_0])));
                    }
                }
                for (long long int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned short) arr_17 [i_0] [i_9] [i_3] [i_1] [i_0]);
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_0 - 3] [i_0] [i_0]))));
                    arr_33 [i_3] [i_1] = ((/* implicit */short) arr_6 [i_9] [i_0 + 2]);
                    arr_34 [i_9] [i_3] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9] [i_0] [i_0] [(short)0] [(unsigned short)3] [i_0]))) * (1462898316U)))));
                }
            }
            for (short i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_24 = ((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0]);
                arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 2]))));
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_36 [i_1] [i_1])) * (((/* implicit */int) arr_22 [(short)5] [i_0] [i_1] [i_0])))) * (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0])) ? (17) : (((/* implicit */int) (short)(-32767 - 1)))))));
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                arr_40 [i_11] [i_1] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0]);
                var_26 ^= ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)200))) | (arr_1 [i_0]))));
            }
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_18 [i_0 + 2] [i_0 - 1] [i_0 - 3])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (unsigned int i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    {
                        arr_45 [i_12] [i_0] = ((/* implicit */unsigned int) ((short) arr_36 [(unsigned char)0] [i_0 - 3]));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_13 - 1] [i_0 + 1] [i_0 - 1])) ? (arr_10 [i_13 + 4] [i_0 - 2] [i_0 - 2]) : (arr_10 [i_13 - 1] [i_0 - 2] [i_0 - 2])));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 1; i_14 < 12; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)90))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) arr_15 [i_14] [i_13] [i_12] [i_1] [i_0])))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_14 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
                            var_31 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)-13489))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_14 + 1] [i_14 + 1] [i_13 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_42 [i_0 - 3] [i_14 + 1] [i_13 + 2] [i_0 - 3])) : (268435424)));
                        }
                        for (unsigned int i_15 = 4; i_15 < 10; i_15 += 1) 
                        {
                            arr_50 [5LL] [i_15] [i_0] [i_12] [i_15] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [7U] [7U] [i_15 + 3] [i_13 + 4])) / (((int) arr_48 [i_15] [i_13] [i_13] [i_12] [i_0] [i_0]))));
                            var_33 &= ((/* implicit */short) ((long long int) (short)13493));
                        }
                        var_34 = ((/* implicit */short) ((((/* implicit */int) arr_31 [i_1] [i_0] [i_1] [i_0])) - (((/* implicit */int) arr_31 [i_13] [i_12] [i_1] [i_0]))));
                    }
                } 
            } 
            arr_51 [(short)8] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)32767)))))));
            var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)1044))));
        }
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0 - 1])) ? (((/* implicit */int) arr_39 [i_0 - 1])) : (((/* implicit */int) arr_22 [(short)6] [(short)6] [i_0 + 1] [i_0 + 1])))))));
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-1LL))))));
    }
    var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) var_9)) ? (((var_3) | (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)13494)) <= (((/* implicit */int) (_Bool)1))))))))));
}
