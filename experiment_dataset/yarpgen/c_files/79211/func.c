/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79211
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_12 ^= ((/* implicit */signed char) ((-525708816) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_2] [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) var_11);
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 124715311U);
                        }
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */int) max((var_14), (var_5)));
                            arr_14 [i_5] [i_5] [i_3] [i_3] [2ULL] [7LL] = ((/* implicit */_Bool) arr_12 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3]);
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (short)31140);
                            var_15 *= ((-2147483640) >= (2147483640));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((36028797018963967LL) < (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (var_5) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) 498326832U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6])) || (((/* implicit */_Bool) 124715287U))))) : (((/* implicit */int) arr_13 [i_3 - 1] [i_1] [10])))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_21 [i_3] [5ULL] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (!((!(var_11)))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((long long int) arr_12 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_2])))));
                            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        arr_24 [i_1] [i_2] = ((((/* implicit */_Bool) 2147483634)) ? (-2147483640) : (((((/* implicit */_Bool) arr_22 [7LL] [i_1])) ? (((/* implicit */int) var_10)) : (var_9))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_8] [i_1] [i_2] [i_0]))));
                        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2] [i_1] [i_1] [i_2] [i_1] [i_8])) || (((/* implicit */_Bool) 2225515448U))));
                    }
                    var_21 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (var_1)))) >> ((((+(((/* implicit */int) var_3)))) + (122)))));
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)253))));
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 1; i_9 < 13; i_9 += 2) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 525708816))))), ((unsigned char)35)))) ? (((unsigned long long int) (~(-694223134)))) : (((/* implicit */unsigned long long int) (+(525708821))))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 4; i_12 < 13; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 12; i_13 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1709020372U)) ? (((/* implicit */unsigned int) -694223165)) : (8724902U)));
                                var_25 = ((/* implicit */int) (-(((((2325278383284744141LL) != (3335756959410321774LL))) ? (((/* implicit */long long int) min((var_4), (2147483643)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) -2147483617)) : (-2359677356336941533LL)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((unsigned int) min((((/* implicit */unsigned int) (_Bool)0)), (arr_35 [i_9])))) | (((/* implicit */unsigned int) ((arr_37 [i_9] [i_9] [i_9 + 2] [i_9]) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_33 [i_11] [i_11] [i_9])) ^ (((/* implicit */int) var_6)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 525708837)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_5)) : (2616581429U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)173)))))))) ? (var_9) : (max((((var_5) + (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_14 = 3; i_14 < 24; i_14 += 4) 
    {
        for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            {
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_40 [i_14 - 1] [i_14 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))) : (((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (unsigned char)124)) : (694223166)))));
                arr_43 [i_14] [i_14] [i_15] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_38 [i_14 - 2]))))), (arr_38 [i_14 + 1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            for (long long int i_18 = 2; i_18 < 10; i_18 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_51 [i_16] [i_17] [(_Bool)1]))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) > (var_7)))))))) + ((+(max((((/* implicit */long long int) 4294967295U)), (arr_53 [i_17]))))))))));
                    var_30 = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_34 [i_16] [i_17] [i_17])) || (((/* implicit */_Bool) 124715311U))))));
                    arr_54 [i_16] [i_17] [i_16] [i_16] |= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) < ((-9223372036854775807LL - 1LL)))));
                }
            } 
        } 
    } 
}
