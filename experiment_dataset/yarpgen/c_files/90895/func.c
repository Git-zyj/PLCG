/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90895
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
    var_17 *= ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_0 - 1]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_0 [(signed char)10])) : (((/* implicit */int) arr_5 [i_0] [i_2])))) + (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [6])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) var_12);
                            arr_13 [i_4 - 3] [i_0] [i_3 + 2] [i_2] [i_1] [i_0] [i_0] = ((short) ((((/* implicit */_Bool) 0)) ? (15127630549758424052ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            var_20 = max((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_5 - 2])), (max((((/* implicit */long long int) arr_12 [i_0])), (5758716331166485200LL))));
                            arr_16 [i_5] [i_5 - 1] [i_0] = ((/* implicit */unsigned char) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))));
                        }
                        arr_17 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) var_15);
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_7] [i_6 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (0LL) : (8137517840904831466LL)));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_1] [i_0] [i_6 + 1]);
                    }
                    arr_27 [i_2] [i_0] [i_0 + 2] = ((/* implicit */short) arr_4 [i_0 - 1] [i_0]);
                    arr_28 [i_0 - 1] [i_0] [i_2] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_11))));
                }
                for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    var_23 = var_15;
                    var_24 = ((/* implicit */long long int) var_3);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((unsigned short) (unsigned char)81));
                                arr_36 [i_0 + 2] [i_1] [i_1] [i_8] [i_0] [i_10 + 1] = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (short)29274)))));
                                var_26 = ((/* implicit */unsigned int) arr_32 [i_0] [i_0 + 1] [i_0 + 2]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_13] [i_12] [i_12] [i_11 + 1] [i_1] [i_0])) ? (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_12 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_28 += ((/* implicit */unsigned int) arr_23 [i_0] [i_1] [i_11] [i_12 - 2] [i_13]);
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_13] [i_12] [i_13] [i_12] [i_12])) || (((/* implicit */_Bool) arr_38 [i_0] [i_0 - 1] [i_1] [i_12 + 2]))));
                            arr_43 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_12] [i_13] = ((/* implicit */_Bool) arr_8 [i_0] [i_11] [i_0]);
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            arr_46 [i_14] [i_14] [i_0] [i_0] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_12 - 2] [i_0] [i_0] [i_0 + 1])) <= (((/* implicit */int) arr_10 [i_12 + 2] [i_0] [i_0] [i_0 + 1]))));
                            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_12] [i_11] [i_1])) && (((/* implicit */_Bool) arr_23 [i_0 - 1] [i_1] [i_11 + 1] [i_12 + 2] [i_14]))));
                            arr_47 [i_0] [i_1] [i_11] [i_11 - 4] [i_12] [i_0] = ((/* implicit */short) ((2054680351U) >> (((/* implicit */int) (signed char)0))));
                            var_31 = ((/* implicit */long long int) ((arr_4 [i_0 - 1] [i_0]) & (((/* implicit */unsigned int) arr_15 [i_12 - 2] [i_1] [i_11] [i_12 + 1] [i_14]))));
                        }
                        for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 3) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1]))));
                            arr_50 [i_0 - 1] [i_1] [i_11] [i_12] [i_15] [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_11 - 3] [i_12] [i_11 + 1] [i_11])) ? (((/* implicit */int) arr_32 [i_0] [i_1] [i_15 - 1])) : (((/* implicit */int) arr_45 [i_15 + 4] [i_15 + 1] [i_15] [i_12] [i_15 + 1]))));
                        }
                        for (signed char i_16 = 2; i_16 < 19; i_16 += 3) 
                        {
                            arr_55 [i_0 + 1] [i_11] [i_11 - 1] [i_0] [i_16 - 2] [i_1] [i_0] = ((/* implicit */unsigned char) var_0);
                            var_33 ^= ((/* implicit */unsigned long long int) var_5);
                            var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 - 1] [i_0] [i_11] [i_12 + 1] [i_16]))) ^ (((arr_1 [i_16]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))))));
                            var_35 = var_12;
                            arr_56 [i_0 - 1] [i_12] [i_12] &= ((/* implicit */unsigned char) ((arr_24 [i_0] [i_1] [i_11 + 1] [i_12 - 1] [i_16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_16 + 1] [i_12 + 2] [i_0 + 1]))) : (var_6)));
                        }
                        arr_57 [i_0] = ((/* implicit */unsigned int) arr_10 [i_11 - 1] [i_11 - 1] [i_0] [i_11 + 1]);
                        arr_58 [i_12] &= ((/* implicit */short) arr_51 [i_0 + 1] [i_1] [i_11 - 1] [i_12 - 1] [i_11 - 3] [i_12 - 2]);
                    }
                    for (long long int i_17 = 4; i_17 < 19; i_17 += 2) 
                    {
                        var_36 &= ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
                        var_37 = ((/* implicit */long long int) arr_1 [i_0 - 1]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned int) 15127630549758424055ULL);
                            arr_69 [i_0] [i_1] [i_0] [i_18] [i_19] = ((/* implicit */signed char) ((((arr_14 [i_19] [i_1] [i_18] [i_18] [i_18] [i_1] [i_19]) + (9223372036854775807LL))) << (((((arr_14 [i_0 - 1] [i_1] [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_18] [i_19]) + (3077045733986209029LL))) - (25LL)))));
                        }
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 4) /* same iter space */
                        {
                            var_39 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_0 + 1] [i_20] [i_18] [i_20]))));
                            var_40 = ((/* implicit */long long int) arr_23 [i_0 + 2] [i_1] [i_11] [i_18] [i_20]);
                            arr_72 [i_0] [i_20] [i_18] [i_11] [i_1] [i_0] = ((/* implicit */short) arr_54 [i_1] [i_0]);
                            var_41 = ((/* implicit */unsigned char) var_8);
                        }
                        for (signed char i_21 = 0; i_21 < 20; i_21 += 4) /* same iter space */
                        {
                            arr_75 [i_0] [i_1] [i_11 - 3] [i_0] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0])) ? (var_6) : (((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_11 - 4] [i_18] [i_0])) ? (((/* implicit */unsigned long long int) arr_67 [i_0 - 1] [i_1] [i_0] [i_18] [i_21])) : (var_12)))));
                            var_42 ^= ((2301501729513508772ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))));
                        }
                        arr_76 [i_0 + 1] [i_0 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) (unsigned char)80)) ? (2301501729513508772ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (unsigned char)129)) : (-1870031982))))));
                        var_43 = ((/* implicit */unsigned int) ((arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) && (arr_11 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
                    }
                    for (unsigned int i_22 = 2; i_22 < 19; i_22 += 3) 
                    {
                        var_44 += ((/* implicit */unsigned int) (_Bool)1);
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_11 - 3] [i_22 - 1] [i_0])) == (((/* implicit */int) arr_41 [i_11 - 3] [i_22 - 1] [i_22] [i_22 + 1] [i_0]))));
                    }
                }
            }
        } 
    } 
}
