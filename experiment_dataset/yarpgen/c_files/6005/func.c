/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6005
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2 - 2] = ((/* implicit */unsigned short) min(((~(arr_7 [i_0] [i_0]))), (((/* implicit */long long int) (((+((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [(signed char)13] [i_3] [i_2 - 2] [i_4]))))))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] &= ((/* implicit */unsigned int) var_6);
                                arr_14 [i_2 - 1] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) arr_4 [i_4]);
                            }
                        } 
                    } 
                    var_10 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_4 [i_0])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_21 [i_7] [i_5] [(unsigned short)5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2117790469)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_18 [i_7] [i_5] [i_0]))))))) ? (((((/* implicit */_Bool) 1499550683)) ? (-2147483640) : (((/* implicit */int) (unsigned short)46449)))) : (((/* implicit */int) ((signed char) arr_0 [i_6])))));
                        arr_22 [i_0] [i_7] [i_6] [i_7] = var_9;
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_11 = ((/* implicit */int) ((short) (~(((/* implicit */int) max((arr_6 [i_9]), (((/* implicit */short) arr_23 [i_8]))))))));
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_8])) + (arr_3 [i_9] [i_8])))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_9]))) + (-9223372036854775796LL)))) ? (8884497329459059354ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
            arr_27 [i_8 - 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_8 - 1] [i_9])) >> (((/* implicit */int) arr_20 [i_8] [i_8 + 1] [i_8] [i_8 + 1]))))) ? (((((/* implicit */_Bool) arr_17 [i_8 + 1] [i_9])) ? (((/* implicit */int) arr_20 [(unsigned char)9] [i_8 + 1] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_17 [i_8 + 1] [i_9])))) : ((-(((/* implicit */int) arr_20 [i_8] [i_8 - 1] [i_8] [i_8 + 1]))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
        {
            arr_30 [i_8] [i_10] = ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-13))))) ? (((((/* implicit */_Bool) arr_0 [i_8 + 1])) ? (((/* implicit */int) arr_0 [i_8 + 1])) : (((/* implicit */int) arr_0 [i_8 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2052706720U))))));
            var_13 = max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8 + 1] [i_8 + 1]))))) ? ((~(((/* implicit */int) arr_6 [(short)1])))) : (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8] [i_10] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))))))));
            arr_31 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_15 [i_10 + 3] [i_8 + 1] [i_8 - 1])))) ? ((~(arr_3 [i_10 + 3] [i_8 - 1]))) : (((/* implicit */int) ((unsigned char) arr_25 [i_8 - 1])))));
        }
        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_38 [i_8 + 1] [i_8] [i_11] = ((short) ((arr_4 [i_8 + 1]) ? (((/* implicit */int) arr_4 [i_8 - 1])) : (((/* implicit */int) arr_4 [i_8 - 1]))));
                /* LoopSeq 4 */
                for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2242260571U)) || (((/* implicit */_Bool) (+(2052706725U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8 - 1] [i_11]))) : (848092285U)));
                    var_15 = ((min(((~(var_9))), (((/* implicit */unsigned long long int) arr_24 [i_8])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_37 [i_13] [i_12 - 1] [i_11])), (arr_39 [i_12]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13] [i_12] [i_11] [i_8]))))))));
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                {
                    arr_45 [i_8] [i_8 + 1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 1] [10])) > (((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 1] [i_12]))));
                    var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_8])) + ((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_35 [i_8 - 1]))))));
                }
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                {
                    var_17 *= ((/* implicit */int) arr_9 [i_8] [i_8 - 1]);
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [i_8])), ((-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8] [i_12]))))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) ((int) arr_41 [i_8 + 1] [i_11] [i_11] [i_15] [i_11] [(unsigned char)5])))))) ? (((/* implicit */unsigned int) 2086351287)) : (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (1951307051U))))) : (min((1663851653U), (2052706724U)))))));
                }
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
                {
                    var_20 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_39 [i_8 - 1]))))));
                    var_21 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_37 [i_16] [i_12] [i_8])) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_29 [i_11] [i_8])) : (((/* implicit */int) (_Bool)1)))))))) != ((~((-(2052706724U))))));
                }
                var_22 += ((/* implicit */_Bool) arr_39 [i_8 + 1]);
            }
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2242260571U)) ? (2052706720U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (arr_33 [i_8 + 1] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [5LL] [8U]))))) + (max((arr_46 [i_8 + 1] [i_8 - 1] [i_11] [i_8]), (arr_46 [i_8] [i_8 + 1] [i_8 - 1] [i_8]))))))));
            arr_52 [i_8] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */short) arr_1 [i_8 - 1] [i_8 + 1])), (arr_6 [i_8]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    {
                        arr_57 [i_8] [i_11] [i_18] [i_18] [i_11] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_28 [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_32 [i_8] [i_11] [i_17]), (arr_1 [i_11] [i_11]))))))))));
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(31U))))));
                    }
                } 
            } 
            arr_58 [4U] [i_11] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8 - 1] [i_11])) ? (((((/* implicit */_Bool) 937663592)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8]))) >= (2602645832U)))) : (((/* implicit */int) arr_4 [i_11])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1692321446U)) ? (((/* implicit */int) arr_25 [i_11])) : (((/* implicit */int) (_Bool)0))))) >= (((((/* implicit */_Bool) arr_56 [i_11] [i_11] [i_8] [i_8 + 1])) ? (arr_2 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_8]))))))))));
        }
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
        {
            arr_61 [i_8] [i_19] [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1])) || (((/* implicit */_Bool) 9223372036854775807LL)))) ? (arr_28 [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)47946)) ? (((((/* implicit */_Bool) arr_47 [i_19] [i_19] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8 + 1] [i_19] [i_19] [i_19]))) : (2242260571U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [(unsigned char)5] [i_19] [i_8 + 1])))));
            arr_62 [i_19] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32744))) : (((((/* implicit */_Bool) 2052706724U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_8] [i_8 + 1] [i_8] [i_8] [i_19] [i_19]))) : (var_4)))));
        }
        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((arr_44 [i_8] [i_8 - 1] [i_8 + 1] [i_8]), (arr_44 [i_8] [i_8 - 1] [i_8] [i_8])))) : (((((/* implicit */_Bool) arr_44 [i_8] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */int) arr_44 [i_8] [i_8 - 1] [i_8] [i_8])) : (((/* implicit */int) arr_44 [i_8] [i_8 + 1] [i_8] [i_8 + 1]))))));
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) / (var_9)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))));
}
