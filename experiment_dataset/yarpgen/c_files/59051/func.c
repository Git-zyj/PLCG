/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59051
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)7))))) ^ (((unsigned int) var_1))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_10) ^ (((/* implicit */int) var_2))))), (((unsigned int) var_0)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)22298)) == (((/* implicit */int) (unsigned char)114)))))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) (((+(((/* implicit */int) arr_7 [i_4 - 1] [i_2])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1])))))))))));
                            arr_14 [i_3] [i_3 - 1] [(unsigned char)0] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_4]))))));
                            arr_15 [i_0] [14ULL] [14ULL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -941323019))))))));
                            var_19 ^= ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_14)))))) + (arr_10 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_11 [i_1] [i_4 - 2] [i_4 - 3] [11ULL] [i_4])))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_3 - 1])))))) + ((((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (arr_9 [i_3] [i_4]))) : (((/* implicit */unsigned long long int) ((long long int) -626781036)))))));
                        }
                        var_21 = ((/* implicit */long long int) -999976438);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2 - 1]))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)191)) >> (((((/* implicit */int) (short)32767)) - (32758))))) * (arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1] [9LL] [i_2 - 1]))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_7] [i_5] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) arr_20 [(unsigned short)12] [i_5] [(unsigned char)4] [(unsigned short)12] [(unsigned char)1])));
                            arr_28 [i_5] [12ULL] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_5])) < (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                            var_24 &= ((/* implicit */unsigned short) -7831220688273779473LL);
                        }
                        var_25 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_2] [i_5])) ? (var_3) : (var_3)))) > (((unsigned long long int) 134217727LL))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned char) max((4174162412U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_0] [i_2 - 1]))) : (max((var_3), (((/* implicit */unsigned int) var_5)))))), (var_11))))));
                        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_10 [i_1])))) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0]))) : (arr_10 [i_8])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 1) 
                        {
                            var_29 *= ((/* implicit */_Bool) arr_7 [i_10 + 1] [i_2 - 1]);
                            var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1] [i_10 + 1] [i_10])) * (((/* implicit */int) arr_8 [i_1] [i_2 - 1] [i_2 - 1] [i_10 + 1] [i_10]))));
                            arr_36 [i_0] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((4174162412U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_9] [i_9])))))) <= (arr_17 [i_0] [i_0] [i_2 - 1] [i_0] [i_10] [i_10])));
                            arr_37 [i_0] [13] [i_9 + 2] [i_10 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_10] [i_10 + 1] [(unsigned char)12] [i_9 + 3] [i_1])) ? (arr_19 [i_10 + 2] [i_10 + 1] [i_9] [i_9] [i_9]) : (((/* implicit */int) var_13))));
                            arr_38 [i_0] [i_1] [i_2] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3904348408664118792LL)) ? (((/* implicit */int) arr_25 [i_11] [i_2 - 1] [i_2 - 1] [i_1] [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_2 - 1] [i_2] [i_9] [i_9])))))));
                            arr_42 [i_0] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 - 1])))))) * (arr_20 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_9 + 3] [i_11 + 2])));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)29166)) == (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) 
                        {
                            var_33 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_6))));
                            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_9))))));
                            arr_45 [i_12] [12ULL] [i_0] = ((/* implicit */short) ((unsigned char) arr_20 [i_9] [i_9 - 1] [i_2 - 1] [i_1] [i_1]));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3380)) ? (17585998838793287194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))));
                        }
                        arr_46 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 2) /* same iter space */
                        {
                            var_36 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_5)))))));
                            var_37 = ((/* implicit */unsigned char) ((arr_44 [i_13] [i_9 - 1] [i_0] [i_1] [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)223)) * (((/* implicit */int) (unsigned char)153)))))));
                            var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_17 [i_0] [0U] [i_2] [i_2 - 1] [(unsigned char)8] [i_13 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                            var_39 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) 626781035)) <= (1091070595U))))));
                        }
                        for (unsigned char i_14 = 2; i_14 < 13; i_14 += 2) /* same iter space */
                        {
                            arr_52 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) 12057323701520754888ULL)))));
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_2 - 1] [(unsigned char)13] [i_9 + 2] [i_14 - 1])) ? (((/* implicit */int) arr_0 [i_14 - 2] [i_14 - 2])) : (((/* implicit */int) arr_24 [i_2 - 1] [i_9] [i_9 + 1] [i_14 - 2]))));
                        }
                        for (int i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            var_41 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)4966)) + (((/* implicit */int) var_5))))) : ((~(var_3)))));
                            arr_55 [i_9] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_23 [i_1]) / (((/* implicit */long long int) ((unsigned int) var_2)))));
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((arr_16 [i_0] [i_2] [i_9] [0]) - (arr_16 [i_9] [i_1] [i_1] [i_1]))))));
                            var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) (+((+(4294967295U))))))));
                        }
                    }
                    var_44 = ((/* implicit */unsigned int) min((var_44), (arr_3 [i_0] [i_0])));
                    arr_56 [i_2] [(unsigned char)13] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_44 [i_2] [i_1] [i_1] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                    arr_57 [i_1] [i_1] [i_1] [(unsigned char)5] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                }
                for (long long int i_16 = 4; i_16 < 14; i_16 += 2) 
                {
                    arr_60 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ (max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_48 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_48 [i_1] [i_1] [i_0])))), (((/* implicit */int) arr_8 [(unsigned char)8] [i_16 - 3] [i_16] [i_16 + 1] [i_16 - 3]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 4; i_17 < 14; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            {
                                var_45 |= ((/* implicit */unsigned char) ((short) ((max((var_3), (((/* implicit */unsigned int) (short)3072)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_16] [i_17] [i_1] [i_18] [i_17 - 4])) * (((/* implicit */int) (_Bool)0))))))));
                                var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_16 [i_1] [i_1] [i_17 - 3] [i_18]) / (((/* implicit */int) arr_24 [i_0] [i_1] [i_17] [i_18])))), (((/* implicit */int) ((((/* implicit */int) var_15)) < (arr_50 [i_16 + 1] [(unsigned char)8] [i_16 + 1] [i_1] [i_0]))))))) ? (var_14) : (((/* implicit */unsigned long long int) max((max((var_3), (((/* implicit */unsigned int) (unsigned char)16)))), (((/* implicit */unsigned int) arr_24 [i_17] [i_17] [i_17] [i_17 + 1])))))));
                                arr_66 [i_17] [(unsigned char)0] [i_16 + 1] [i_0] [i_17] = ((/* implicit */unsigned int) var_8);
                                var_47 = ((/* implicit */long long int) max((var_47), (var_0)));
                                var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_18] [i_17] [i_1] [i_1])) || (((/* implicit */_Bool) var_4))))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    var_49 = ((/* implicit */long long int) (unsigned char)255);
                    var_50 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))) ? (((max((arr_54 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_19] [i_19] [(unsigned char)5] [i_19] [i_19])))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (arr_21 [11U] [i_19] [i_1] [i_1] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
                var_51 = ((/* implicit */unsigned char) min((arr_48 [i_0] [i_0] [(short)2]), (((/* implicit */short) var_8))));
                arr_70 [3U] = ((/* implicit */unsigned short) 3738290767U);
            }
        } 
    } 
}
