/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98319
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
    var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -2680896125884447051LL)) ? (((-1978744166) - (((/* implicit */int) var_2)))) : ((-(189357620)))))));
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_4)), (var_5)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 4])))) ? (((((/* implicit */_Bool) ((unsigned char) (-2147483647 - 1)))) ? ((+(189357620))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((1978744166) >> ((((((-2147483647 - 1)) - (-2147483644))) + (9)))))));
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) < (((/* implicit */int) arr_1 [i_0 + 1])))) ? ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (arr_3 [i_0 - 4] [i_0 + 2]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) arr_1 [i_0 - 2])) + (arr_0 [i_0 - 4]))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -317041744921785450LL)) ? ((-(3162208457868560106ULL))) : (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)12))))))))))));
        var_21 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [(unsigned char)6]))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_8))))))) < (((/* implicit */long long int) (~(arr_0 [i_0 - 4]))))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((min((arr_4 [(unsigned char)4]), (((/* implicit */unsigned int) var_10)))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_2 [i_1] [2])))))))) + (arr_5 [5LL])));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_11 [i_1 + 1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) min(((unsigned short)30516), (((/* implicit */unsigned short) (signed char)56)))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_14))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 4; i_4 < 15; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_4])) != (var_5))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)30509)))))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
    {
        for (signed char i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            {
                arr_20 [i_5] [i_5] = ((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (_Bool)0))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        var_26 = (signed char)-122;
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [8LL] [i_6 + 1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (arr_19 [i_5])))) : (((/* implicit */int) arr_22 [i_5 + 2] [i_5]))));
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_30 [i_5 + 1] [i_6] [13U] [i_5] [i_5] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_5] [i_5] [i_7] [i_8] [i_9] [i_5])))))));
                            arr_31 [i_5] [i_7 + 2] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_5 + 1] [i_6 - 1] [i_5] [(short)22] [i_6] [i_9]))));
                            arr_32 [23LL] [i_5] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_18 [i_8] [i_6])) ? (var_5) : (((/* implicit */long long int) -2147483639))))));
                            var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) -189357621)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (signed char)-113))));
                            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_6] [i_8])) + (((/* implicit */int) var_11))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_5 + 1] [i_6] [i_7 + 2] [(unsigned char)21] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_5] [i_5] [i_10]))))) ? (((17804447208801196092ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))))))));
                            arr_38 [i_5] [1] [i_8] [i_7 + 3] [(unsigned short)6] [1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_10 + 2] [i_10] [i_10] [i_10 + 2] [i_10 + 2])) * (((/* implicit */int) arr_36 [i_10 + 3] [i_10 + 3] [i_10] [i_10 - 1] [i_10 + 2]))));
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) 3U)))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_5] [i_6 - 2] [i_6 - 2] [i_7] [i_8] [i_5] [i_11 + 3] = ((/* implicit */signed char) (-(((arr_27 [i_7] [i_7] [i_7 - 1] [(unsigned char)6] [(unsigned char)6]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
                            var_31 = ((/* implicit */long long int) ((unsigned long long int) var_5));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_11 + 4] [i_11 + 3] [i_11 + 1] [i_11 + 2] [i_11 + 1])) < (((/* implicit */int) var_9))));
                        }
                        var_33 &= ((/* implicit */unsigned char) ((int) (_Bool)1));
                    }
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned short) ((-1551639579) & (((((/* implicit */int) var_1)) & (((/* implicit */int) var_11))))));
                            var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_5] [i_5] [i_13 - 1]))));
                            var_36 = ((/* implicit */short) arr_48 [i_13]);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                        {
                            arr_51 [i_5] [i_6] [i_6 - 2] [i_6 - 2] [i_6] = ((((/* implicit */int) (unsigned char)225)) < (((/* implicit */int) (short)-5611)));
                            arr_52 [i_5] [i_7 + 2] [i_7 + 2] [i_7 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_36 [i_5 - 1] [i_6] [i_7 + 1] [i_14] [i_14])) : (((/* implicit */int) var_13))));
                            var_37 &= (!(((/* implicit */_Bool) var_7)));
                            arr_53 [(_Bool)1] [i_6] [i_7] [i_7] [i_5] [i_5 + 2] = ((/* implicit */unsigned short) -317041744921785435LL);
                            arr_54 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_5 + 2] [i_6] [i_5 + 2] [i_12] [i_5] [i_12] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7] [i_7 + 3] [i_5]))) : (((((/* implicit */_Bool) arr_29 [i_6 + 2] [i_7] [i_7] [i_7])) ? (arr_50 [i_5 - 1] [i_5 - 1] [i_7] [i_12] [i_5] [i_7] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        }
                        for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) & (-1LL)))) && (((/* implicit */_Bool) -572566603796697038LL))));
                            arr_57 [i_5] [i_5] [i_7] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-53))));
                            arr_58 [(_Bool)1] [i_5] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (-(524117474)));
                        }
                        arr_59 [i_5] [i_6] [i_7 - 1] = ((/* implicit */unsigned short) ((signed char) (~(-572566603796697035LL))));
                        arr_60 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_7] [i_7 + 2] [i_5] [i_7 + 1] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) var_8))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            {
                                arr_66 [i_5] [(short)22] [i_7 + 2] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */int) var_12)) == (((/* implicit */int) var_12))))));
                                var_39 = ((/* implicit */unsigned char) max((var_39), (var_6)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_18 = 1; i_18 < 21; i_18 += 2) /* same iter space */
                {
                    arr_70 [i_5 + 2] [i_5] [i_18] [(_Bool)1] = ((/* implicit */int) var_6);
                    var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
                    arr_71 [i_5] [i_6 - 2] [i_6] = ((/* implicit */short) (+(max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_0)))))));
                }
                arr_72 [i_5] [i_5 + 1] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(6813181895929547020LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((arr_25 [i_5] [i_5] [i_5]), (arr_50 [i_5 + 1] [i_6] [i_5] [i_5 + 1] [i_5] [i_5 + 2] [i_6]))))), (((/* implicit */long long int) arr_36 [i_6] [i_6 + 3] [i_6 + 3] [i_6] [i_6]))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned short) var_14);
}
