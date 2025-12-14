/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95702
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [10U] [i_3] [i_0] = ((/* implicit */int) ((signed char) (signed char)7));
                            var_10 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)0)) + ((+(((/* implicit */int) (signed char)35))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        var_12 = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 2 */
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((((/* implicit */int) (unsigned char)25)) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_5])))) : (((/* implicit */int) (signed char)98)))))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) (signed char)43)) - (35)))))) ? (9851483493257356936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5])))));
                        }
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)29))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((-(((/* implicit */int) (unsigned short)56549)))) + (((/* implicit */int) var_9)))))));
                            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_16 [i_4] [i_4] [i_7]))));
                            var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_7 + 1] [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_7]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4 + 2] [i_1] [i_4] [i_5] [i_5 - 1] [i_7 + 2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4 + 2] [i_1] [i_4] [i_5 + 1])))));
                        }
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-16055)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (short)29719))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (short)-21))));
                    }
                    for (short i_8 = 1; i_8 < 19; i_8 += 3) 
                    {
                        arr_25 [i_4] = ((/* implicit */long long int) (short)-16041);
                        var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) var_2))))));
                        arr_26 [(unsigned short)0] [(unsigned short)0] [i_0] &= ((/* implicit */unsigned char) var_0);
                    }
                }
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    var_23 = ((/* implicit */signed char) max(((-(((/* implicit */int) min(((signed char)71), ((signed char)127)))))), (((/* implicit */int) (signed char)127))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_33 [(unsigned char)18] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((short) arr_12 [i_0] [i_1] [i_9])));
                        arr_34 [i_0] [i_1] [i_9] [i_9] [i_10] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                        var_24 = ((/* implicit */unsigned short) 8270719446660587327LL);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)0] [1ULL] [i_9] [i_10] [i_0] [i_9])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_9 - 1] [i_0 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_11 [i_9 - 1] [i_1] [i_9] [i_9 - 1])))) : ((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)0)), (arr_6 [i_0]))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_9 + 1])), (var_4)));
                        arr_37 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) max((17502271961657709930ULL), (((/* implicit */unsigned long long int) (signed char)-127))));
                    }
                    var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1] [i_0 - 2] [i_9 + 1])))) || (((/* implicit */_Bool) ((arr_12 [i_9] [(unsigned short)18] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                    var_28 ^= ((/* implicit */signed char) min((max((var_4), (((/* implicit */long long int) arr_27 [i_9 + 1] [i_9 - 1] [i_0 + 1])))), (((((var_4) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */int) arr_18 [i_0] [(short)4] [i_9] [i_0 + 1])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_9] [i_1] [i_0] [(signed char)2])))) - (17130)))))));
                    arr_38 [i_0] [i_1] [i_9] &= ((/* implicit */unsigned short) (((+(arr_27 [i_0 - 1] [i_0] [(unsigned short)19]))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))));
                }
                for (short i_12 = 1; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [(short)0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) arr_41 [i_12]))))) ? (((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [i_12])) - (15337))))) : (((/* implicit */int) ((short) var_8))))))));
                    var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)(-32767 - 1)))))) ^ (var_4)))));
                    arr_42 [i_0] [i_12] = ((/* implicit */_Bool) arr_22 [(unsigned short)2] [i_0] [i_0] [i_1] [i_1] [(unsigned short)2] [i_12 - 1]);
                }
                for (short i_13 = 1; i_13 < 16; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 2; i_14 < 19; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) (((-(arr_23 [i_0] [i_0] [i_13]))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13] [i_13] [i_13]))) >= (arr_30 [14LL] [i_1])))))));
                            var_32 = ((/* implicit */signed char) ((((-17LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))) - (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
                        }
                        arr_51 [i_0] [i_1] [(unsigned char)2] [i_13] [6ULL] = ((/* implicit */signed char) arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] [i_13 + 2] [i_1]);
                        var_33 = ((/* implicit */_Bool) var_0);
                        var_34 = ((/* implicit */short) var_2);
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_14 - 2]), (arr_2 [13U] [i_14 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))) : ((-(((((/* implicit */int) (unsigned short)25)) + (((/* implicit */int) (short)-29714))))))));
                    }
                    var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-32767))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (short i_17 = 1; i_17 < 19; i_17 += 1) 
                        {
                            {
                                var_37 &= ((/* implicit */short) (signed char)-22);
                                arr_58 [i_16] [i_1] &= ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_28 [i_0 + 1] [i_0] [i_0 + 1] [i_0])))));
                                arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) var_4));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned char) (((+((+(((/* implicit */int) (signed char)127)))))) * (((/* implicit */int) (signed char)118))));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) var_4))));
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)0))))) : (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-9175), ((short)16040)))))))));
}
