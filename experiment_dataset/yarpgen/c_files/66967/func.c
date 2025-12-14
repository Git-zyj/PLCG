/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66967
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
            {
                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (signed char)-52))));
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_11))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(270203147535106050ULL)))) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28435)))))));
                            var_24 *= ((/* implicit */unsigned long long int) var_15);
                            var_25 *= ((((arr_5 [i_4] [0U] [0U]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_4] [i_4] [i_0]))))) >> (((((/* implicit */int) (short)-5149)) + (5193))));
                        }
                    } 
                } 
                var_26 |= ((/* implicit */short) (-(((/* implicit */int) (short)-1841))));
            }
            for (short i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
            {
                arr_13 [i_5] [i_0] = arr_5 [i_5] [i_1] [i_0 - 3];
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) (unsigned char)167);
                            arr_20 [i_1] [i_1] [10U] [i_6] [i_0] |= ((/* implicit */short) ((arr_3 [i_7] [i_1]) << (((((/* implicit */int) (signed char)-52)) + (57)))));
                            var_27 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-22445)) ? (((/* implicit */int) arr_6 [(short)6] [i_1] [i_5] [i_5])) : (((/* implicit */int) var_12)))) * (((/* implicit */int) arr_7 [i_1] [i_6 - 1] [(short)0] [i_0 + 3] [i_1] [i_5 + 3]))));
                            var_28 = ((/* implicit */long long int) ((unsigned long long int) (-(3077120242752979703ULL))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-52)) ? (3520999427U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5178)))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) (((-(4294967295U))) | (((162822596U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0 + 3])))))));
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
                {
                    arr_23 [i_1] [i_0] = ((/* implicit */short) arr_16 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] [i_8]);
                    var_31 |= ((/* implicit */unsigned long long int) (unsigned char)143);
                    var_32 = ((/* implicit */unsigned char) ((unsigned short) (short)-30554));
                }
                for (signed char i_9 = 1; i_9 < 14; i_9 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0 + 3] [i_0 + 3]))));
                    var_34 -= arr_12 [i_9 - 1];
                    arr_26 [i_0] [i_0 - 3] [i_5] [i_0] [i_5] [i_9] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_9 + 1]))));
                }
            }
            for (short i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 - 3] [i_1] [i_1] [(short)10])) >> (((var_10) - (8480768479124850368ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 2) 
                    {
                        {
                            var_36 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)1841))));
                            arr_34 [4ULL] [i_1] [i_1] [i_0] [i_10] [i_11] [4ULL] = ((/* implicit */signed char) (unsigned char)163);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    for (long long int i_14 = 2; i_14 < 12; i_14 += 1) 
                    {
                        {
                            var_37 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)127)) ? (2052861991U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-489))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2968905023U)) ? (((/* implicit */int) (short)10220)) : (((/* implicit */int) (short)22748)))))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), ((~((~(arr_15 [i_1] [i_1])))))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_0))));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */short) arr_37 [i_0] [i_0] [i_1]);
        }
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 1; i_17 < 14; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 2) 
                        {
                            {
                                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_18] [i_18 + 1] [i_16] [i_15 - 2])))))));
                                var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) arr_15 [i_16] [i_17 + 1]))));
                                var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1712062525U))))) == (((/* implicit */int) ((unsigned char) (short)-1845)))));
                                var_44 = var_4;
                                arr_52 [i_0] [(unsigned char)0] [i_15] [i_16] [i_0] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)512))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (short)1841))));
                    var_46 = ((/* implicit */unsigned long long int) ((((var_17) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */int) arr_43 [(unsigned short)4] [(unsigned short)4] [i_0 - 2])) < (((/* implicit */int) arr_37 [i_0 - 3] [i_0 + 1] [(unsigned short)13]))))) - (1)))));
                    /* LoopSeq 2 */
                    for (signed char i_19 = 3; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        arr_57 [i_0] [4ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_8 [i_19 - 1] [i_0] [i_0] [i_0 + 2])))));
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_0] [i_15 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_16] [i_16] [i_16] [i_16]))) : (508569474U)));
                    }
                    for (signed char i_20 = 3; i_20 < 14; i_20 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) ((unsigned long long int) var_4));
                        arr_60 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_35 [i_0] [i_0 + 1] [i_16] [i_0]))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
    {
        arr_63 [i_21] = ((/* implicit */unsigned short) ((unsigned int) min((arr_62 [i_21]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 614077136U))))))));
        var_49 |= ((/* implicit */signed char) (unsigned char)153);
        var_50 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 9162315461440886406ULL)))) != (((unsigned int) arr_62 [i_21]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 12; i_22 += 1) 
    {
        for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            {
                arr_70 [i_22] [i_23] [i_23] = ((((/* implicit */_Bool) max((arr_69 [(unsigned char)11] [i_23]), (((/* implicit */short) arr_43 [i_22] [i_22] [i_22]))))) ? (((arr_3 [i_23] [i_23]) % (arr_3 [i_23] [i_23]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_41 [i_23] [i_22]), (arr_41 [i_22] [i_22]))))));
                var_51 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_23] [i_23] [i_23] [i_23])) || (((/* implicit */_Bool) 20299914062607185LL))))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_22] [i_22] [i_22] [i_22] [i_23] [i_23]))) : (1961892495U)))) ? (arr_16 [i_22] [i_22] [i_22] [i_23] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) < (arr_27 [i_23])))))))));
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)29908)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [11ULL] [i_22] [i_22] [i_22]))) : (((((/* implicit */_Bool) 6027790178962219632LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047))) : (arr_44 [i_22] [i_22] [i_22] [i_23])))));
            }
        } 
    } 
}
