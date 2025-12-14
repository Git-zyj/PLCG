/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79669
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-985767649)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1])))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)-9149), (((/* implicit */short) var_3)))))))) ? (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-16276)) + (2147483647))) >> (((6663595058879122292LL) - (6663595058879122276LL)))))), (584397232080111748ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 414701705519657462ULL)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (short)19088))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 414701705519657443ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)20)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(301392424U)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0 + 1] [i_1] [15LL] [(_Bool)1] = ((/* implicit */short) ((unsigned int) ((((-985767652) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0 - 2])) - (97))))));
                            var_21 = ((/* implicit */short) min((min((((/* implicit */unsigned short) (signed char)-24)), ((unsigned short)23417))), (((/* implicit */unsigned short) arr_3 [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 18; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) arr_11 [i_4] [i_5] [i_6] [(_Bool)1]);
                            var_23 -= ((/* implicit */short) ((((/* implicit */int) arr_21 [i_4] [i_5] [i_6] [i_6 + 1] [i_6])) ^ ((+(((/* implicit */int) arr_16 [i_6 + 2]))))));
                            /* LoopSeq 3 */
                            for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */long long int) 584397232080111752ULL);
                                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 692576920U)) ? (-1071547639) : (((/* implicit */int) (_Bool)1))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_21 [i_4] [i_4 - 1] [i_4] [i_4] [i_4]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_7] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]))))) ? (max((((/* implicit */unsigned long long int) ((arr_3 [i_4]) ? (((/* implicit */int) arr_18 [i_5] [i_7] [i_8])) : (((/* implicit */int) var_4))))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)26456)))), (((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 1] [i_4])))))));
                            }
                            for (signed char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [(short)2] [i_4])) : (var_1)))))));
                                arr_27 [i_4] [i_5] [i_5] [i_5] [0U] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_6 - 2] [i_4 + 1])) ? ((~(3651416773506598071LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_5] [i_7])))))) >= (((((/* implicit */_Bool) ((arr_23 [i_4] [i_4 + 1] [i_5] [(signed char)0] [i_7] [i_9] [(_Bool)1]) >> (((-7088202672393557411LL) + (7088202672393557431LL)))))) ? (((/* implicit */unsigned long long int) (~(199685929171728554LL)))) : ((-(7371608568430911008ULL)))))));
                            }
                            for (signed char i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
                            {
                                arr_30 [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)13)) & (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_2 [i_4])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [i_6 - 1]))) : (arr_4 [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 12150674324961341902ULL)) && (((/* implicit */_Bool) -7897386567558536113LL))))))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (signed char)40))));
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((8188513243754053553ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4 - 3] [i_4 - 3] [i_4] [18U]))))))));
                                var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3602390376U)) ? (8335279356243543612LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519)))))), (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_28 [i_4] [i_4] [(short)4])), ((signed char)-13)))) ? (((/* implicit */unsigned long long int) min((-612273213), (((/* implicit */int) (unsigned char)79))))) : (14774061644485497303ULL)))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) arr_8 [i_11] [i_11] [i_11]);
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_5] [i_4] [(short)12] [i_4 - 3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_11] [i_5] [i_11] [i_11] [i_13] [i_5]))));
                            var_34 = ((/* implicit */signed char) arr_16 [i_4 + 1]);
                        }
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                        {
                            var_35 = ((/* implicit */int) max((var_35), (var_2)));
                            var_36 = ((/* implicit */long long int) arr_26 [i_5] [i_11] [i_12] [i_14]);
                            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_31 [(signed char)1] [i_5] [i_4 + 1] [i_12]))));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [0U] [i_12] [18U] [i_4 - 3] [i_12])) ? (arr_25 [i_14] [i_5] [i_11] [(unsigned short)0] [18ULL] [i_4 - 3] [i_5]) : (arr_25 [(unsigned char)7] [i_5] [(signed char)17] [i_12] [i_14] [i_4 + 1] [i_14])));
                            var_39 = ((/* implicit */long long int) 3672682429224054313ULL);
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_15 = 1; i_15 < 16; i_15 += 2) 
                    {
                        var_40 -= ((/* implicit */long long int) ((((((/* implicit */long long int) -1704366635)) < (-2142036724636292515LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (short)2024)) : (((/* implicit */int) arr_29 [i_11] [i_4] [i_11] [i_15] [i_4] [i_11])))))));
                        var_41 &= ((/* implicit */unsigned int) (unsigned short)27112);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        arr_48 [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned short)9558))));
                        var_42 = ((/* implicit */unsigned long long int) min(((-(arr_15 [i_4 - 3] [i_5] [8LL]))), ((-(((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1]))))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(signed char)16] [0ULL] [i_18]))) & (114961129125056834ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27118))))))));
                                var_44 = ((/* implicit */unsigned long long int) (unsigned short)38418);
                            }
                        } 
                    } 
                } 
                var_45 = ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [(short)8] [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_31 [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 2]), (arr_31 [(unsigned short)8] [i_4 - 2] [i_4 - 3] [i_5]))))) : ((~(18446744073709551597ULL))));
            }
        } 
    } 
}
