/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76687
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
    var_11 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((arr_4 [i_0] [i_1] [i_2]) - (var_6))))) ? (((arr_6 [i_2] [i_0 - 3] [i_0] [i_0 - 3]) / (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-22)), (arr_2 [i_1])))) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_1])) : (arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_4 [i_0 + 3] [i_3] [i_3 - 1]);
                                var_13 = 67108832LL;
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned long long int) 67108832LL)) : (((10907781851099892148ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)70)) ? (arr_13 [10U] [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_5 [i_0 - 1]))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) 134201344)), (-5074510569628297824LL))))));
                        var_17 ^= ((/* implicit */_Bool) max((min((arr_15 [(signed char)12] [i_0] [(signed char)10] [i_5]), (((/* implicit */unsigned long long int) arr_13 [i_5 - 3] [i_5] [12ULL] [(unsigned char)10] [(unsigned char)10] [i_5] [i_5])))), (((/* implicit */unsigned long long int) ((long long int) arr_16 [i_5 - 1] [12LL] [i_5] [i_5])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_18 = arr_5 [i_5 + 1];
                            var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_18 [20U] [i_1] [(unsigned char)8] [i_1]))));
                        }
                        for (int i_7 = 3; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_20 &= ((/* implicit */unsigned char) max((((arr_1 [i_5 - 3]) ? (arr_14 [i_0] [18] [(unsigned char)14] [2LL]) : (((/* implicit */long long int) max((-1), (((/* implicit */int) (_Bool)0))))))), (max((((/* implicit */long long int) max((((/* implicit */int) arr_10 [i_0] [i_1] [0LL] [i_1] [i_5] [18U])), (arr_5 [i_2])))), (var_0)))));
                            arr_22 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_4);
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_20 [i_8]))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [1U] [i_0 - 2] [i_0 - 2] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [21LL] [i_1] [i_2] [21LL] [(unsigned char)10] [i_1])))) : (arr_15 [i_2] [i_1] [i_2] [i_9 + 1])));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_25 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]))));
                            arr_29 [i_0] [i_0] [i_0] [i_2] [(unsigned short)22] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 4] [i_2] [i_0 + 4] [i_0 + 4] [24LL])) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_2] [i_2] [i_8] [i_8]))));
                            arr_30 [(unsigned char)8] [i_1] [i_8] [i_8] [i_2] = ((/* implicit */int) 18446744073709551615ULL);
                        }
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) ((arr_2 [i_0]) << (((arr_5 [i_0 + 1]) - (101518949)))));
                            arr_33 [(unsigned short)24] [i_10] [i_2] [(unsigned char)19] [i_10] = ((/* implicit */long long int) arr_6 [i_2] [i_0 - 1] [i_0 - 3] [i_0 + 2]);
                            var_25 = ((/* implicit */unsigned short) arr_14 [i_0] [i_2] [11U] [i_10]);
                            arr_34 [i_10] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [(unsigned short)3] [i_0 - 2] [i_0 - 2]);
                        }
                        for (short i_11 = 2; i_11 < 24; i_11 += 2) 
                        {
                            var_26 = ((((/* implicit */_Bool) arr_28 [4] [i_11 + 1] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) arr_11 [i_0 + 3] [i_0 + 3])) : (arr_23 [i_2] [i_0 + 1]));
                            var_27 = ((arr_26 [i_0] [i_2] [i_1] [i_2] [i_1]) % (arr_26 [i_2] [i_2] [i_2] [i_8] [i_8]));
                            var_28 = ((/* implicit */long long int) var_9);
                            var_29 = ((/* implicit */_Bool) arr_26 [i_11] [i_2] [(signed char)7] [i_2] [i_0]);
                            var_30 += (unsigned short)65535;
                        }
                    }
                    arr_38 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_2] [6ULL] [i_1] [(unsigned char)24] [9]))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    var_31 = ((/* implicit */long long int) var_9);
                    arr_41 [1ULL] [i_12] [1ULL] = -2;
                }
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)115))));
                            arr_46 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [10ULL] [10ULL] [i_13] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_14] [i_14] [i_13])) : (1709135166)))) : (((((/* implicit */_Bool) arr_20 [8LL])) ? (arr_11 [i_0 + 2] [i_0]) : (arr_11 [i_0 + 3] [0ULL])))));
                        }
                    } 
                } 
                arr_47 [5U] [i_1] = ((/* implicit */unsigned int) max((((arr_43 [i_0] [i_0] [i_0] [6]) % (((/* implicit */unsigned long long int) var_6)))), ((+(140737488093184ULL)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_16 = 1; i_16 < 12; i_16 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    {
                        var_33 = ((/* implicit */int) arr_17 [i_15]);
                        var_34 -= ((/* implicit */unsigned long long int) var_10);
                        var_35 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_15] [i_16] [i_17] [i_17]))));
                    }
                } 
            } 
            arr_59 [i_15] [i_15] [i_16] = ((/* implicit */unsigned short) (signed char)64);
        }
        for (int i_19 = 1; i_19 < 12; i_19 += 1) /* same iter space */
        {
            var_36 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((2147483627), (((/* implicit */int) (unsigned char)7))))), (((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15] [(unsigned short)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_15] [(unsigned short)8]))) : (arr_48 [i_15])))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)244)), ((unsigned short)65535)))) << (((min((4294967295U), (((/* implicit */unsigned int) arr_16 [(_Bool)1] [i_15] [i_15] [i_15])))) - (84U))))) : (((((/* implicit */int) arr_9 [i_15] [i_15] [i_15] [i_15])) ^ (((((/* implicit */int) arr_1 [i_15])) << (((var_9) + (412641439)))))))));
            arr_62 [i_15] = ((/* implicit */_Bool) ((unsigned long long int) var_1));
            var_37 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) 968561880))))) ? (arr_42 [13U] [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            var_38 ^= ((/* implicit */long long int) arr_17 [i_19 + 1]);
            var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_19 + 2] [i_15] [i_15] [i_19 + 2])) | (((/* implicit */int) arr_19 [i_19] [i_15] [i_15] [i_19 + 2]))));
        }
        var_40 ^= ((/* implicit */long long int) arr_9 [i_15] [i_15] [i_15] [i_15]);
        var_41 = ((/* implicit */long long int) arr_24 [i_15] [i_15] [i_15]);
        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1))));
    }
    for (signed char i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        var_43 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -2147483627)), (arr_37 [i_20] [i_20] [i_20] [i_20] [i_20])))), (arr_23 [i_20] [i_20])));
        /* LoopSeq 3 */
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            arr_68 [i_21] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) (unsigned char)54)))) << (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_21])) : ((-(((/* implicit */int) arr_12 [i_20] [i_20] [i_20] [i_20] [i_20] [i_21] [i_21]))))))));
            var_44 ^= ((/* implicit */unsigned short) var_4);
            var_45 *= ((/* implicit */unsigned short) arr_23 [i_20] [i_20]);
            arr_69 [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18388)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        }
        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) 
        {
            var_46 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_22] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_14 [i_20] [i_22] [i_20] [i_22])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_20]))) : (134217727ULL)));
            var_47 |= ((((/* implicit */int) var_7)) == (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned char) arr_16 [12ULL] [i_22] [i_22] [(short)12])), (var_3))))));
            var_48 = 56;
        }
        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_20] [i_23] [i_20] [i_20] [i_23])) ? ((~(arr_31 [i_23] [i_20] [i_23] [i_20] [i_20]))) : (arr_31 [i_20] [(unsigned short)16] [i_23] [(unsigned short)4] [i_20])));
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)255))))) : (arr_75 [i_20] [i_23]))) >> (((arr_44 [i_23] [i_23] [i_23] [i_23]) - (12613734325401065592ULL))))))));
        }
        var_51 = ((/* implicit */int) var_0);
        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_5)) % (((/* implicit */int) var_5)))), (((/* implicit */int) arr_16 [2ULL] [i_20] [i_20] [i_20]))))) ? (((arr_44 [i_20] [i_20] [i_20] [i_20]) / (arr_44 [i_20] [i_20] [i_20] [i_20]))) : (((/* implicit */unsigned long long int) arr_14 [i_20] [i_20] [i_20] [i_20]))));
    }
    var_53 = ((/* implicit */_Bool) 1125891316908032ULL);
}
