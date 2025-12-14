/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71334
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
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = (+(min((((/* implicit */int) (signed char)(-127 - 1))), ((-2147483647 - 1)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 2])) : (((/* implicit */int) (signed char)-106)))) < (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)-64))))))))))));
        arr_5 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))) ? ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) arr_1 [i_0 + 1] [i_2 - 1]);
                        var_18 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8184)) || (((/* implicit */_Bool) arr_7 [i_2 - 1])))) ? ((((_Bool)1) ? (0) : (((/* implicit */int) arr_7 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 0LL)) || ((_Bool)0))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2 - 1] [(signed char)24])) : (arr_6 [i_1]))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0])) == (((/* implicit */int) (signed char)-122)))))));
                        arr_13 [i_0 + 1] [i_0 + 2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)8)) : (-8172)))) ? ((-(((/* implicit */int) (signed char)0)))) : ((-(((/* implicit */int) (_Bool)0))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 1])) < (((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 1]))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */signed char) (!(arr_11 [2LL] [2LL])));
            arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0ULL))));
            arr_16 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (0) : ((-2147483647 - 1))));
        }
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
        {
            arr_19 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0] [i_0] [i_0])))) | (((((/* implicit */_Bool) 2097144U)) ? (((/* implicit */int) arr_10 [i_0 - 1] [12U] [i_0 - 1] [i_4 + 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0] [(unsigned short)8]))))));
            arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1099511627775LL), (((/* implicit */long long int) 2147483647))))) ? ((-(((/* implicit */int) (unsigned char)8)))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_4 + 3]))))) ? (max((((/* implicit */long long int) (!((_Bool)0)))), (((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(_Bool)1] [i_0]))) : (18LL))))) : (((/* implicit */long long int) (((_Bool)1) ? (-1) : (((/* implicit */int) arr_7 [i_4 + 1])))))));
        }
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
        {
            arr_23 [i_0 + 2] [(unsigned char)14] |= ((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)127)))) ? (min((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-73)) == ((-2147483647 - 1))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(2147483647)))) ? (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)4064)))) : (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) max((arr_12 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0]), (arr_12 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 4) 
    {
        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            {
                arr_30 [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(2ULL)))) || (((/* implicit */_Bool) 0U))))) << (((2147483647) - (2147483623)))));
                /* LoopNest 3 */
                for (unsigned short i_8 = 3; i_8 < 12; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 14; i_10 += 4) 
                        {
                            {
                                arr_39 [i_6 - 1] [(_Bool)0] |= ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_34 [(_Bool)1] [i_7 + 1])) ? (((/* implicit */int) arr_2 [(short)6])) : (arr_28 [i_6]))), ((((_Bool)0) ? (((/* implicit */int) (short)-32756)) : (((/* implicit */int) (_Bool)0)))))) << (((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9]))))) : (((arr_38 [10] [i_8 + 3] [i_8 - 3] [i_8 - 3] [i_8]) ? (((/* implicit */int) arr_34 [0] [i_10 + 1])) : (((/* implicit */int) arr_1 [i_6] [i_6])))))) - (23368)))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-8)))) ? (((((/* implicit */_Bool) 0)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) 4292870160U)))) : (((/* implicit */unsigned long long int) arr_0 [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) arr_21 [i_6 + 2] [i_6 + 1] [i_6])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_34 [i_8] [i_9]))))))) : ((~((-(18446744073709551604ULL)))))));
                                var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */int) arr_9 [i_6] [i_7] [(short)16] [i_7])), ((-2147483647 - 1)))), (((((/* implicit */_Bool) arr_33 [i_9] [i_8 + 3])) ? (-1) : (((/* implicit */int) arr_17 [(unsigned char)16] [i_8 + 3] [i_9]))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_10] [i_8] [i_7])) - (((/* implicit */int) arr_26 [i_6 + 2]))))), (((arr_35 [i_6] [(short)12] [i_8] [i_8]) - (((/* implicit */long long int) ((/* implicit */int) arr_36 [0] [i_7 + 1]))))))) : (((/* implicit */long long int) (-(((arr_11 [(signed char)6] [(_Bool)1]) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_11 [i_7] [(short)8])))))))));
                                var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_6] [i_6 + 1] [i_6]))))) << (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)0)), (arr_21 [i_7 + 1] [i_9] [i_10])))) ? (28U) : (((/* implicit */unsigned int) max((arr_6 [i_6 + 1]), (((/* implicit */int) arr_26 [i_10 - 1])))))))));
                                arr_40 [i_6] [i_6] [i_8] [i_6] [i_6 - 1] = ((/* implicit */_Bool) ((max((arr_35 [i_7 - 1] [i_8] [i_10 + 2] [i_10 + 2]), (((/* implicit */long long int) 0)))) / (((((/* implicit */_Bool) 261632)) ? ((-9223372036854775807LL - 1LL)) : (arr_35 [i_7 + 2] [i_8] [i_10 - 1] [i_10 + 1])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_41 [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1])))) == (((/* implicit */int) max((arr_1 [i_7 + 1] [i_6 + 1]), (((/* implicit */short) arr_2 [i_11])))))));
                    var_26 = ((/* implicit */short) ((((((/* implicit */unsigned int) (+(4096)))) < (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2097144U))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) max((0), (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_11] [i_7 + 2] [15])) ? (((/* implicit */int) arr_37 [i_6] [i_7 + 1] [i_7] [i_11] [7ULL] [i_11] [i_6 + 2])) : (((/* implicit */int) arr_29 [i_6 + 2] [i_7 + 1] [i_6 + 2]))))) : (((((/* implicit */_Bool) 11ULL)) ? (28U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
                var_27 += ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [14] [14] [i_7])) ? (((/* implicit */int) arr_18 [(_Bool)1] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) max((((/* implicit */short) arr_22 [i_6] [(short)18] [i_7])), ((short)-32755)))) ? (((4294967295U) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 1] [12U] [i_6] [i_6 + 1]))))));
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (signed char)0))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 4) 
    {
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                {
                    arr_52 [i_12] = ((/* implicit */long long int) (_Bool)0);
                    var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)1)), (18446744073709551614ULL)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (((((/* implicit */_Bool) (signed char)-6)) ? (0) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
