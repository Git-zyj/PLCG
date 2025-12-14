/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99949
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_0 [5U])))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && ((!(((/* implicit */_Bool) (unsigned char)120)))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_12) ? (((/* implicit */int) ((signed char) (unsigned char)0))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (39)))))))), (15068048498623030777ULL))))));
        var_21 = ((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_14))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 8; i_1 += 4) 
    {
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)5] [i_1 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_5 [i_1] [i_1 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))))))) ? (min((((/* implicit */unsigned long long int) arr_3 [(signed char)3])), (min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (arr_4 [(signed char)1])));
        arr_6 [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 560927170)) ? (arr_11 [i_1 + 2] [i_1 + 2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3])) ? (var_9) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((var_17) > (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_4 - 2])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_4)))))))) : (min((281474968322048ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        arr_16 [i_1] [i_1] [10LL] = ((/* implicit */unsigned char) var_12);
                        arr_17 [i_1] [i_1] [0] = ((/* implicit */int) (((~((-9223372036854775807LL - 1LL)))) << (((((arr_4 [i_1]) << (((arr_7 [i_1 - 3] [i_1 + 4] [i_3]) - (18289229787593774738ULL))))) - (10402700211712425984ULL)))));
                        var_24 ^= ((/* implicit */signed char) var_7);
                        arr_18 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 1])) ? (((/* implicit */int) arr_12 [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1 - 1]))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_1] [(signed char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_4 - 2])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
        {
            for (unsigned int i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_32 [20ULL] [20ULL] [20ULL] [i_7] [i_7] [20ULL] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((unsigned int) arr_28 [15U] [i_6 - 1] [15U] [15U]))) : (arr_19 [i_5])));
                            arr_33 [i_8] [(signed char)18] [i_6 - 1] [i_6 - 1] [i_7 - 1] [i_8] [i_9] &= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_29 [i_7] [i_9]), (arr_29 [i_5] [i_5])))) ? (((long long int) arr_29 [i_6] [i_7 + 1])) : ((~(arr_29 [i_5] [i_8])))));
                            arr_34 [i_5] [i_5] [i_7 - 1] [i_5] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 - 2] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_30 [i_7 - 2] [i_7 + 2] [i_7 + 2] [23ULL] [i_7 - 2] [i_7]))))));
                        }
                        var_25 ^= ((/* implicit */int) max(((+(1ULL))), (((/* implicit */unsigned long long int) arr_29 [i_5] [i_8]))));
                        arr_35 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) min((((unsigned int) (~(var_5)))), (((/* implicit */unsigned int) arr_31 [i_7]))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_26 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) 462886165866076662LL))))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_6 + 1] [i_7 + 1] [i_10]))))))));
                        var_27 += ((/* implicit */signed char) (-((~(((/* implicit */int) ((arr_20 [i_5]) == (((/* implicit */long long int) arr_26 [i_10] [i_10] [i_10] [i_10])))))))));
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_7]))));
                    }
                    var_29 = ((/* implicit */unsigned short) arr_21 [2] [i_5]);
                    arr_38 [i_7] = ((/* implicit */unsigned int) arr_27 [i_5] [i_6 - 1] [i_7] [i_7 + 1] [i_5] [i_7]);
                }
            } 
        } 
        var_30 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((-(1664434650))))))));
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_37 [i_5])))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_20 [3ULL])) ? (((/* implicit */int) arr_21 [i_5] [i_5])) : (((/* implicit */int) arr_24 [i_5] [i_5] [4LL]))))))))));
        var_32 = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 22; i_12 += 2) 
        {
            for (unsigned char i_13 = 3; i_13 < 22; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_52 [i_11] [(_Bool)1] [i_13 - 2] [i_14] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11] [i_12] [i_12] [i_11] [i_15] [i_11])) && (((/* implicit */_Bool) (unsigned char)255)))))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [i_12 + 1] [i_12 - 1] [i_13 + 1] [(_Bool)0])) + (((/* implicit */int) arr_44 [i_12 + 2] [i_12 + 2] [i_13 - 3] [i_11]))));
                                arr_53 [i_11] [10ULL] [(signed char)6] [10ULL] [i_13] [i_14] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            {
                                arr_59 [i_11] [i_11] [i_13] [i_16] [(short)3] = ((/* implicit */short) arr_57 [i_11] [i_12 + 2] [i_13] [i_13] [i_12 + 2] [i_16] [i_12 + 2]);
                                var_34 = ((/* implicit */_Bool) arr_24 [i_16] [i_12] [i_12]);
                            }
                        } 
                    } 
                    arr_60 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (-7370412758619011820LL))))));
                    arr_61 [i_11] [i_12 + 1] [i_12 + 1] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? ((+(var_1))) : (arr_29 [(signed char)8] [(signed char)21])));
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) ((_Bool) (~(arr_45 [i_11] [i_11] [i_11] [i_11]))));
        var_37 = ((/* implicit */int) max((var_37), ((-(arr_48 [i_11])))));
    }
    var_38 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((462886165866076662LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */long long int) var_2)) : (max((var_1), (((/* implicit */long long int) var_11))))))));
    var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
}
