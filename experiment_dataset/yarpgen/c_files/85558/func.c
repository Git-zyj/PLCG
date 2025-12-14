/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85558
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 += ((/* implicit */short) 3574989920U);
                arr_5 [i_1] [i_1] = (~((-(719977375U))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_11 |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(arr_2 [i_0] [i_0])))) & (((/* implicit */int) min((arr_2 [i_1] [i_3]), (arr_2 [i_4] [i_4]))))));
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_7 [i_1])) <= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_3]))) : (1556377603U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_12 &= ((/* implicit */unsigned long long int) ((arr_0 [i_5 - 3]) != ((~(arr_0 [i_5 - 3])))));
                                var_13 = ((/* implicit */long long int) 2147483647);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 1; i_7 < 22; i_7 += 1) 
                {
                    arr_25 [i_0] = ((/* implicit */unsigned int) var_7);
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        var_14 *= ((/* implicit */short) var_3);
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 4; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13820)) ? (((/* implicit */int) (short)7)) : (1657959622)));
                            var_16 = ((/* implicit */_Bool) -6941320788337977754LL);
                            arr_32 [i_0] [i_9] [(short)0] [i_7] [i_8 + 1] [i_9] &= ((/* implicit */short) ((int) (+(6941320788337977750LL))));
                            arr_33 [11U] [i_0] [i_1] [i_1] [i_7 + 1] [i_1] [i_8] = ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_2 [i_7 - 1] [i_7 + 1])));
                        }
                        for (unsigned short i_10 = 4; i_10 < 19; i_10 += 4) /* same iter space */
                        {
                            arr_38 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((210376478) == (((/* implicit */int) arr_14 [i_0] [i_1] [i_7 + 1] [i_8] [i_10]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_8] [i_1] [i_7] [i_8] [i_8])))))));
                            arr_39 [i_0] [i_10] [20U] [i_8] [i_10] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [(_Bool)1] [i_1] [i_1]))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) -210376478)) > (var_0)))))))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            arr_46 [i_1] [i_1] [(short)18] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                            arr_47 [i_0] [i_0] [i_1] [i_7] [i_0] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 1018039715079167445LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-36028797018963968LL)));
                            arr_48 [10] [(short)11] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(6941320788337977741LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [2U] [i_11] [i_12]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13820))) + (-5251934765702678763LL)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_18 += ((/* implicit */unsigned int) arr_27 [i_0] [i_1] [10] [i_11] [i_13]);
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_7 - 1] [i_11] [i_7 - 1] [i_7 - 1] [19U]))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) 1556377601U)) + (((unsigned long long int) arr_23 [i_0] [i_1] [i_0] [i_11])))))));
                            arr_51 [i_0] = ((/* implicit */short) (+(arr_45 [i_7 - 1] [i_7] [i_7] [i_7] [i_7])));
                            var_21 = ((/* implicit */int) arr_31 [i_0] [i_1] [i_0] [17ULL] [i_13]);
                        }
                    }
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7 - 1] [i_7 + 1])) * (((/* implicit */int) arr_18 [i_7 + 1] [i_7 + 1]))));
                        var_23 = ((/* implicit */short) ((unsigned char) arr_27 [i_7 + 1] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 22; i_15 += 1) 
    {
        for (long long int i_16 = 3; i_16 < 22; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (short i_18 = 1; i_18 < 23; i_18 += 2) 
                    {
                        {
                            arr_67 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_54 [i_17]))));
                            arr_68 [17] [i_15] = ((/* implicit */_Bool) arr_64 [i_15] [i_15] [i_17] [i_17] [i_17]);
                        }
                    } 
                } 
                arr_69 [(_Bool)1] |= ((/* implicit */short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_15]))) : (((((/* implicit */_Bool) var_9)) ? (3574989895U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [17U] [i_16 - 1] [12LL] [i_16])))))))));
                var_24 ^= ((/* implicit */unsigned char) (!(arr_58 [(signed char)10] [i_16] [i_16 + 1])));
                arr_70 [i_15] [i_16] [i_16 + 1] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_2)) ? (14536799222476846323ULL) : (16936632842520368826ULL))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                arr_71 [i_15] [i_15] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_16] [i_16] [i_16]))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) var_7))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
}
