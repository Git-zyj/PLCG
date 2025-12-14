/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58972
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
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */signed char) var_0)), (arr_3 [i_0] [i_1])))), (var_12)));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    var_20 = ((((/* implicit */_Bool) arr_2 [i_2])) ? ((+((+(var_12))))) : (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 3863005865U))))), (min((462142922), (((/* implicit */int) var_11))))))));
                    var_21 -= ((/* implicit */long long int) ((max((var_5), (((/* implicit */long long int) (-(462142917)))))) != (((/* implicit */long long int) ((/* implicit */int) (short)1420)))));
                    arr_7 [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */short) (unsigned short)15378);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (var_12)));
                        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) var_14)), ((short)32767)))) | (((((/* implicit */_Bool) arr_10 [(short)23] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [(short)23])) : (((/* implicit */int) (signed char)121))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
                        var_24 ^= ((/* implicit */short) ((462142918) / (((/* implicit */int) var_10))));
                        var_25 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        arr_18 [i_0] [12U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                        arr_19 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (short)-1441)) : ((+(((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)233))))))));
                        /* LoopSeq 4 */
                        for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                        {
                            var_26 -= ((/* implicit */signed char) var_10);
                            arr_22 [(signed char)6] [i_1] [i_0] [i_6] [(signed char)16] = ((((/* implicit */int) ((arr_2 [i_0 - 1]) < (1460462963)))) >= (((((/* implicit */int) var_1)) | (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_5 [i_3] [(unsigned char)17])))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((min((max((arr_13 [i_1] [14ULL] [14ULL] [(signed char)0]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_9))))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))))))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned short)2))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) min((944276489U), (((/* implicit */unsigned int) var_2))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                            var_30 *= ((/* implicit */short) var_17);
                            var_31 = ((/* implicit */signed char) (((+(((((/* implicit */int) (unsigned char)15)) / (462142914))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (var_3))))));
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8] = max((((/* implicit */int) var_11)), (max((462142917), (((/* implicit */int) var_4)))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                            arr_30 [(_Bool)1] [i_1] [i_0] [i_6] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
                            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)4095))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            var_34 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                            var_35 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [23LL]))) >= ((-9223372036854775807LL - 1LL))));
                            arr_34 [i_0 + 1] [i_0 + 1] [(unsigned short)6] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >> (((var_2) + (473749046)))));
                            var_36 -= ((/* implicit */unsigned char) var_16);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_5 [i_1] [i_11 - 2])) <= (((/* implicit */int) var_4))))));
                            arr_37 [19U] [19U] [19U] [i_6] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) max((arr_29 [i_0 - 1] [i_0] [i_0] [i_6] [i_6]), ((short)-4096)))))), (-462142889)));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) | ((+(((/* implicit */int) var_6)))))))));
                        var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) 3350690830U))));
                            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-8829)) == (((/* implicit */int) arr_20 [1ULL] [i_0] [(unsigned short)11]))))) & (((((((/* implicit */int) var_1)) < (((/* implicit */int) var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_13)))) : ((+(((/* implicit */int) var_11))))))));
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((2068496113655250807LL), (((/* implicit */long long int) (unsigned short)22545)))))))));
                        arr_45 [i_0] [i_0] = ((/* implicit */unsigned short) var_17);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_42 ^= ((/* implicit */short) (+((-(((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned char)81))))))));
                        var_43 = ((/* implicit */unsigned short) var_12);
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned short) (!((((((_Bool)1) ? (3350690806U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0] [i_0 + 1] [(unsigned short)13] [i_0] [i_0])))))));
                                var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)35)) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_52 [10ULL] [i_16] [i_1] [i_0] [i_0 - 1])), (var_5))))));
                                var_46 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_11))))) / ((+(3350055740637517029ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_40 [i_15] [i_17] [i_0 + 1] [i_17] [(_Bool)1]))))) : ((+(((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) arr_55 [i_0] [i_0 + 1] [i_1] [22] [(signed char)4] [i_17] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 2; i_18 < 23; i_18 += 3) 
                    {
                        arr_58 [i_0] [(short)7] [i_0 + 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((var_12) + (((/* implicit */long long int) ((((/* implicit */int) arr_52 [(short)13] [i_18 - 1] [i_0] [i_0 + 1] [(unsigned char)19])) + (((/* implicit */int) (_Bool)0)))))));
                        var_47 = ((/* implicit */_Bool) (signed char)-35);
                    }
                    /* vectorizable */
                    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) (signed char)-30);
                        var_49 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    }
                }
            }
        } 
    } 
    var_50 = ((/* implicit */signed char) var_14);
}
