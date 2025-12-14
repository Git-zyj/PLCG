/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77885
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
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_10) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_6), (var_4)))) - (((((/* implicit */int) (unsigned short)41639)) * (((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)87))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (var_7)))))));
    var_18 &= ((/* implicit */signed char) ((((min((var_5), (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_0) : (var_0)))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_13), (var_13)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_19 += ((/* implicit */_Bool) max((((/* implicit */int) ((((arr_5 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1] [(short)7] [i_0]))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_0 [8] [(short)3])))))))), ((+(arr_6 [3ULL] [i_2 - 1] [i_2 - 2] [i_2 + 1])))));
                    var_20 = ((/* implicit */short) (((+((+(((/* implicit */int) arr_7 [i_2] [i_2])))))) <= (((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))) + (((int) arr_4 [i_0] [i_0] [i_0]))))));
                }
                for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (signed char)-80))))) && (((/* implicit */_Bool) max((((/* implicit */int) ((2147483647) == (((/* implicit */int) (signed char)-1))))), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [(short)14] [i_3])))))))));
                    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(signed char)1] [i_3 + 1] [i_3])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_4 [i_1] [i_3 + 1] [i_3])))) : (((/* implicit */int) arr_4 [i_0] [i_3 + 1] [i_3]))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_13 [(signed char)13] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)-16), (((/* implicit */signed char) (_Bool)1)))))));
                        arr_14 [(_Bool)1] [i_3] |= ((/* implicit */short) (+(((((/* implicit */int) arr_3 [i_0] [i_3] [i_4])) >> (((((/* implicit */int) arr_0 [i_1] [i_4])) - (20141)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (+(((/* implicit */int) (signed char)119))));
                        var_24 ^= arr_16 [i_5] [i_3] [i_1] [i_0];
                        arr_18 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [6ULL] [i_3 + 1]))) < (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1]))))) + (((((((/* implicit */int) arr_2 [i_0] [i_1])) + (((/* implicit */int) arr_2 [(short)7] [i_3])))) + ((-(arr_16 [i_0] [i_5] [i_3] [(_Bool)1])))))));
                    }
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_3] [(signed char)8] = ((/* implicit */short) max((((/* implicit */int) min(((unsigned char)198), (((/* implicit */unsigned char) (signed char)-13))))), ((-(arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                        var_25 += ((/* implicit */signed char) (unsigned char)255);
                    }
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    var_26 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_9 [(signed char)10] [i_1] [(signed char)10])) <= (((/* implicit */int) (signed char)12)))));
                    arr_26 [i_1] [i_7] = ((/* implicit */short) ((((arr_23 [i_0] [i_1] [i_1] [i_7]) / (((/* implicit */int) arr_3 [i_0] [i_1] [(short)7])))) * (((/* implicit */int) ((_Bool) (signed char)0)))));
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    var_27 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_4 [i_0] [i_1] [i_8])))), (((((/* implicit */_Bool) arr_4 [i_8] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_8]))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_1] [i_8])) << (((((/* implicit */int) arr_10 [i_0] [(unsigned short)15] [i_8] [i_0] [(signed char)8] [i_1])) - (22727))))) >> ((((-(arr_6 [i_0] [i_1] [i_8] [i_8]))) + (694502367)))))) ? (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_24 [i_0] [i_1])))), ((+(((/* implicit */int) (signed char)87)))))) : (((arr_2 [i_0] [i_1]) ? (arr_15 [i_0] [i_1] [i_1] [i_8]) : (((/* implicit */int) max(((short)8191), ((short)-16934))))))));
                }
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) arr_20 [i_0] [12] [i_1] [(short)12] [i_9]))), ((+(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_9] [i_9] [i_9])) * ((+(((((/* implicit */int) arr_30 [i_0] [i_1] [i_9])) & (((/* implicit */int) arr_19 [i_0] [(signed char)1] [i_9] [i_9] [i_1]))))))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    var_31 *= ((((/* implicit */_Bool) arr_16 [(signed char)12] [i_1] [i_10] [i_10])) ? (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_10] [i_10] [i_0] [i_0])) : (arr_16 [i_0] [i_0] [i_0] [i_0]));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_10] [i_1] [i_1])) ? ((+(((/* implicit */int) (unsigned char)195)))) : (((/* implicit */int) arr_10 [i_0] [(short)14] [i_1] [i_1] [i_10] [i_10]))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (short)0);
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        for (signed char i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_33 += (-(((/* implicit */int) arr_34 [i_1])));
                                arr_43 [0U] [i_1] = ((/* implicit */long long int) arr_42 [i_0] [i_1] [i_11] [i_12] [(short)13] [i_0]);
                                arr_44 [i_0] [i_1] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) arr_20 [i_0] [i_13] [i_11] [i_11] [i_13]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_53 [i_0] [i_0] [i_14] [i_0] [(short)8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_14] [i_15] [i_16] [i_16])) >> (((((/* implicit */int) arr_10 [i_0] [(short)10] [i_1] [i_14] [i_15] [i_16 - 1])) - (22705)))));
                                arr_54 [i_0] [i_1] [(short)13] [i_14] [i_15] [i_16] [i_14] = ((/* implicit */short) (((+(((/* implicit */int) arr_33 [i_0] [i_1])))) >= (((/* implicit */int) arr_17 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16] [(unsigned char)4]))));
                                arr_55 [i_0] [i_1] [i_15] [12] [i_16] [i_15] |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_35 [i_0] [i_1] [(signed char)13] [i_16])) ? (((/* implicit */int) arr_3 [i_1] [i_14] [i_15])) : (arr_39 [i_0] [i_1] [i_14] [(short)1] [(_Bool)1] [i_15] [i_1])))));
                                arr_56 [i_0] [i_1] [i_1] [i_15] [i_14] = ((/* implicit */short) (+(((/* implicit */int) arr_41 [i_0] [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_34 ^= ((/* implicit */short) ((((/* implicit */int) (short)-8)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                                var_35 = (i_14 % 2 == zero) ? (((/* implicit */unsigned char) ((((arr_5 [i_18] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_50 [i_14] [i_1] [i_14] [i_1] [i_14])) - (22679)))))) : (((/* implicit */unsigned char) ((((arr_5 [i_18] [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_50 [i_14] [i_1] [i_14] [i_1] [i_14])) - (22679))) - (30353))))));
                                var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)-8191)) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14] [i_17])))));
                                var_37 = arr_37 [(short)14] [i_14];
                            }
                        } 
                    } 
                    var_38 |= ((/* implicit */unsigned short) ((((((arr_15 [i_0] [i_1] [i_14] [i_14]) + (((/* implicit */int) arr_59 [(signed char)4] [i_1] [i_1] [i_1] [i_1] [i_1])))) + (2147483647))) >> (((((/* implicit */int) arr_48 [i_0] [i_0] [i_1] [(signed char)7] [i_1] [i_14])) - (36717)))));
                }
            }
        } 
    } 
}
