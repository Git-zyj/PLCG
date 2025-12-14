/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61599
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
    var_18 = ((/* implicit */_Bool) max((-1), (((/* implicit */int) ((_Bool) min((((/* implicit */long long int) (_Bool)0)), (var_7)))))));
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((1056325555057078994ULL) == (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) (_Bool)1))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */_Bool) 2077238211);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned char)3] [i_0] = (-(((/* implicit */int) arr_1 [i_2])));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (arr_6 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)6] [(signed char)6] [i_2]))) ^ (17390418518652472639ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_1)) ? (var_14) : (18446744073709551615ULL)))));
                                arr_15 [i_0] [i_3] = ((/* implicit */short) arr_6 [i_4 + 1] [i_4 + 1]);
                                var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_4 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        arr_18 [5U] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_5 [(_Bool)0] [i_5]) & (17390418518652472620ULL))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5]))) - (arr_0 [i_5])))))) ? (1056325555057079013ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056325555057079002ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17609888832389890262ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_23 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_1 [i_5]);
            /* LoopNest 2 */
            for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 17609888832389890269ULL)) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : ((((_Bool)1) ? ((~(((/* implicit */int) arr_2 [i_6])))) : (((/* implicit */int) arr_14 [i_9 - 1] [0ULL] [i_9] [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_7 - 3]))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3381942393128707502LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16130))));
                        }
                        arr_33 [i_8] [(unsigned char)8] [i_6] [i_5] = arr_5 [i_8] [i_6];
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_39 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) 1056325555057078997ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = ((((/* implicit */_Bool) 4976207301236758895ULL)) ? (836855241319661353ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))));
                            arr_43 [i_12] [i_11] [7LL] [i_5] [i_5] [i_5] = ((arr_0 [i_10 + 1]) & (((/* implicit */unsigned long long int) var_17)));
                            arr_44 [i_12] = ((/* implicit */_Bool) arr_32 [i_10 - 1] [i_5]);
                            arr_45 [13ULL] [13ULL] [i_10 + 3] [i_10] [i_10] [i_10 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_10 + 3] [i_10] [i_10] [i_10 + 2])) > (((/* implicit */int) arr_25 [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_10 + 2]))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (1056325555057079005ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) (short)2664);
                            var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_13] [i_10] [i_10] [i_6] [i_5]))) & (((((/* implicit */_Bool) max((arr_17 [i_5]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) 17390418518652472607ULL)) ? (arr_27 [i_5] [17LL] [i_5]) : (16381154583706441078ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5] [(_Bool)1] [i_5] [i_5] [i_5])))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)131)) & (arr_41 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (min((((/* implicit */unsigned char) arr_37 [(unsigned char)10] [(unsigned short)0] [(unsigned short)0] [i_6] [(unsigned short)0])), (arr_4 [(signed char)10] [i_10] [i_5])))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */int) arr_36 [i_11] [i_10] [(unsigned char)14] [10LL])), (arr_41 [i_11] [i_11] [i_6])))))));
                            var_31 -= ((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_6] [i_11] [(unsigned short)13] [i_6] [i_5]);
                        }
                        var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_24 [i_10 + 3] [i_10 + 3]), (arr_24 [i_10 + 2] [i_10 + 1])))), (((var_12) / (((/* implicit */int) var_2))))));
                        arr_48 [i_10 + 3] [i_10 + 3] [i_6] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (~(1056325555057078986ULL))));
                    }
                } 
            } 
        }
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            arr_52 [i_14] [i_14] [i_14] = ((/* implicit */long long int) max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_2))));
            arr_53 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)7)) < (((/* implicit */int) arr_36 [i_14] [i_14] [i_5] [i_5])))))) * (((((/* implicit */_Bool) min((arr_38 [i_5] [i_5] [i_5] [0ULL] [0ULL] [i_5]), (((/* implicit */short) (_Bool)0))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)76)) && (((/* implicit */_Bool) arr_27 [i_14] [i_14] [i_5]))))))))));
            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_50 [i_14] [i_5])) ? (((/* implicit */int) arr_6 [i_14] [(unsigned char)16])) : (((/* implicit */int) (unsigned char)226)))))))))));
            /* LoopSeq 4 */
            for (int i_15 = 1; i_15 < 15; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_63 [(_Bool)1] [(signed char)9] [i_15] [i_16] [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)67)), (((arr_58 [i_5] [i_5] [5ULL] [i_15]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)-121))))) : (((arr_54 [i_16] [i_5] [7LL] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_34 = ((/* implicit */_Bool) var_17);
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) var_9);
                arr_64 [i_15] [i_15] [i_15] [i_5] = ((/* implicit */long long int) (_Bool)1);
                var_36 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_15 - 1] [i_15 + 3] [i_15 + 3]))));
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                {
                    arr_67 [i_15] [i_15] [i_15] [i_15] = arr_55 [i_5] [i_5] [i_15];
                    var_37 *= ((/* implicit */signed char) arr_11 [i_15] [i_15] [i_14] [i_14] [i_14] [i_5]);
                }
            }
            for (short i_19 = 1; i_19 < 15; i_19 += 1) /* same iter space */
            {
                arr_71 [i_19] [13LL] [i_5] [i_5] = (!(((/* implicit */_Bool) arr_10 [i_14])));
                var_38 = max((((/* implicit */long long int) (unsigned short)3514)), (-4662931238945653349LL));
            }
            for (short i_20 = 1; i_20 < 15; i_20 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((min((arr_56 [i_20 + 3] [i_5] [i_5] [i_5]), (var_6))) > (var_13)))) : (((/* implicit */int) (((~(10823725281714988433ULL))) <= (((/* implicit */unsigned long long int) (~(331059939U)))))))));
                arr_74 [i_20] = ((/* implicit */int) (unsigned char)235);
            }
            for (short i_21 = 1; i_21 < 15; i_21 += 1) /* same iter space */
            {
                arr_78 [i_5] [i_5] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_69 [i_14] [i_14] [i_5]))))) ? (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)163)))))) : (((/* implicit */int) arr_6 [i_21] [i_21 + 1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 1; i_23 < 17; i_23 += 2) 
                    {
                        var_40 = ((/* implicit */long long int) min((var_40), (((long long int) arr_61 [i_21] [i_21 + 2] [i_21] [i_21] [i_21] [i_21 + 2] [i_21 - 1]))));
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((10823725281714988433ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_14] [i_23] [i_22] [i_21] [i_14] [i_14])))))))))));
                    }
                    arr_83 [i_21] [i_21] [(unsigned char)0] [i_14] [i_21] [i_21] = ((/* implicit */unsigned char) arr_10 [i_21]);
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_21 - 1] [i_21 + 3])) ? (arr_5 [i_21 + 3] [i_21 + 2]) : (arr_5 [i_21 + 2] [i_21 - 1])));
                }
                /* vectorizable */
                for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) arr_0 [i_5]);
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (+(((/* implicit */int) arr_50 [i_24] [i_14])))))));
                        var_45 = ((/* implicit */unsigned char) arr_62 [i_14] [i_14] [i_14] [i_14] [i_5]);
                    }
                    var_46 = ((/* implicit */long long int) ((_Bool) var_4));
                }
                for (unsigned char i_26 = 0; i_26 < 18; i_26 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_27 = 2; i_27 < 15; i_27 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) 4662931238945653349LL);
                        arr_95 [i_14] [i_27 + 2] [12LL] [6U] [i_14] [i_14] [i_14] &= ((/* implicit */_Bool) ((unsigned char) min((arr_41 [(signed char)3] [i_27 + 2] [i_21 + 3]), (((/* implicit */int) (_Bool)1)))));
                    }
                    var_48 = ((/* implicit */short) arr_5 [i_14] [i_5]);
                    var_49 = ((/* implicit */long long int) var_2);
                }
            }
        }
    }
}
