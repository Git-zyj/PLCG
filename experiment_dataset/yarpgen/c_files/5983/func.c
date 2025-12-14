/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5983
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((unsigned int) 1692458514)));
                var_19 = ((/* implicit */unsigned long long int) max(((~((+(((/* implicit */int) var_15)))))), (((/* implicit */int) ((unsigned short) var_17)))));
                var_20 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 9; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                                var_23 = ((/* implicit */int) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_4]))))))));
                                var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_4] [i_8 - 1])) + (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) < (var_16))))))));
                                var_26 = ((/* implicit */int) min(((-(min((((/* implicit */unsigned long long int) var_11)), (arr_15 [i_3 - 2] [i_4] [i_7] [i_8 - 1]))))), (((/* implicit */unsigned long long int) ((unsigned int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                                var_27 -= ((/* implicit */short) var_2);
                                arr_23 [i_2] [i_4] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_8 - 1] [i_7] [i_7] [i_2])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (11460325337570786922ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_17) : (((/* implicit */long long int) var_0))))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 18014398509481984LL)))))))));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */signed char) 1954532681122108198ULL);
                    var_29 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [(signed char)3])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) : (((unsigned long long int) (short)-5878)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 18; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 1; i_11 < 17; i_11 += 3) 
            {
                {
                    arr_31 [i_11] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) | (((/* implicit */int) arr_0 [i_9 - 1] [i_9 - 1]))))) ^ (((((/* implicit */_Bool) arr_29 [i_9 + 1] [i_10] [i_10] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9 - 3] [i_11 + 1] [i_11] [i_11 + 2]))) : ((-9223372036854775807LL - 1LL))))));
                    var_30 = ((/* implicit */unsigned long long int) arr_30 [i_9] [i_11] [i_11] [i_10]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_31 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                        var_32 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_9 - 3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            var_33 -= ((/* implicit */int) arr_26 [i_9 - 3]);
                            var_34 = ((/* implicit */unsigned char) (((~(1954532681122108198ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94)))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (!(((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                        }
                        for (unsigned int i_15 = 2; i_15 < 15; i_15 += 4) 
                        {
                            arr_43 [(signed char)7] [i_11] [i_13] [i_13] [i_13] = ((/* implicit */short) (-(((((/* implicit */int) arr_37 [i_10])) / (((/* implicit */int) (signed char)-112))))));
                            var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_15 + 3] [i_15 + 4] [i_13] [0] [i_15] [i_9])) ? (((/* implicit */int) arr_41 [i_9 - 3] [i_13] [i_15 - 1] [i_13] [i_15] [i_15] [i_10])) : (((/* implicit */int) arr_41 [18LL] [i_13] [i_15 - 2] [i_13] [10LL] [i_15] [i_11 - 1]))));
                        }
                        for (signed char i_16 = 3; i_16 < 17; i_16 += 4) 
                        {
                            var_37 = ((/* implicit */short) ((unsigned short) (signed char)-16));
                            var_38 = ((/* implicit */short) (-(var_14)));
                        }
                        arr_48 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_42 [i_11] [i_11 + 2] [i_11 + 2] [i_11] [i_11]) : (arr_42 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11] [i_11])));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_39 -= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9]))) / (var_16))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11] [15] [i_11] [i_11])))))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 2; i_18 < 18; i_18 += 3) 
                        {
                            arr_55 [i_9] [i_9] [i_11] [i_17] [i_9] = ((/* implicit */short) (~((~(((/* implicit */int) max((((/* implicit */signed char) arr_49 [i_11])), (arr_46 [i_18] [i_9 + 1] [i_18 + 1] [(signed char)18] [i_11] [i_10] [i_9 + 1]))))))));
                            var_41 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_18 - 1] [i_18] [6LL] [i_18] [i_18 + 1]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        for (short i_20 = 3; i_20 < 18; i_20 += 3) 
                        {
                            {
                                var_42 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18010106860310726857ULL)) ? (min((1283196367U), (((/* implicit */unsigned int) (short)-10103)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-(max((((/* implicit */long long int) arr_41 [i_9 - 1] [i_10] [i_10] [i_11] [i_11] [(unsigned char)14] [i_20 - 2])), (9223372036854775783LL)))))));
                                arr_61 [i_11] = max((max((arr_42 [(_Bool)1] [i_19 + 1] [i_19] [i_19] [i_11 + 1]), (max((1916706616U), (((/* implicit */unsigned int) (unsigned short)10729)))))), (((var_12) & (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))))))));
                                var_43 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_39 [i_9 - 3] [14LL] [i_9 - 3] [i_19] [14LL])) ? (arr_39 [i_9 - 1] [i_9 - 1] [i_20 + 1] [i_19] [i_20]) : (arr_39 [i_9 - 2] [i_11 + 1] [i_20 - 3] [i_19 + 1] [i_11]))));
                                var_44 -= ((/* implicit */long long int) arr_32 [i_9 - 2] [i_10] [i_10] [i_11] [i_19] [i_20 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
