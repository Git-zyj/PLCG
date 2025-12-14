/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96665
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
    var_11 = ((/* implicit */int) ((signed char) (signed char)(-127 - 1)));
    var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)(-127 - 1)))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (var_8))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)127))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1 + 2])), (var_3))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((short) min((var_0), (((/* implicit */unsigned long long int) ((var_5) << (((((((/* implicit */int) (signed char)-127)) + (134))) - (6)))))))));
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)-110)), (min((min((((/* implicit */unsigned short) arr_8 [i_2])), (arr_3 [i_2]))), (((/* implicit */unsigned short) (signed char)127))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 *= ((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2]);
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_3 - 1] [i_3])) ? (((arr_6 [i_4]) << (((((/* implicit */int) var_10)) - (24493))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) * (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))), ((-(((/* implicit */int) (signed char)127)))))))));
                    arr_15 [i_4] [4] [4] = ((/* implicit */short) arr_13 [i_2] [9ULL] [i_4] [i_3 + 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (signed char)-111)) : ((~(((/* implicit */int) (signed char)127))))))));
                                var_18 ^= ((signed char) (signed char)127);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)(-127 - 1)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) (signed char)104);
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                arr_31 [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_9] [i_7] [i_8] [i_8] [i_7]))));
                arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) var_8));
                arr_33 [i_8] [i_8] [(short)3] = ((/* implicit */_Bool) (signed char)-101);
            }
            for (int i_10 = 3; i_10 < 11; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_8] [11LL] [i_8] [11LL])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_24 [i_10 + 2] [i_10 - 2]))));
                        var_22 = ((/* implicit */short) arr_17 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 2]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        var_23 |= ((/* implicit */short) (-((~(((/* implicit */int) (signed char)-120))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_10] [i_13] [i_13])))))));
                    }
                    for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
                    {
                        arr_49 [i_8] [i_11] [i_10] [i_8] [i_8] = ((/* implicit */short) ((((((/* implicit */int) arr_14 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 + 1])) + (2147483647))) >> (((((/* implicit */int) (signed char)-119)) + (127)))));
                        var_25 = ((/* implicit */long long int) (~(arr_28 [i_14 + 2] [i_10 - 2])));
                    }
                    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_8] [i_8] [i_10 + 1] [i_11 + 1] [i_15])) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_10 + 1] [i_11 + 1] [i_15]))));
                        arr_52 [i_15] &= ((/* implicit */short) ((signed char) (signed char)119));
                        var_27 = ((/* implicit */unsigned long long int) var_8);
                    }
                    arr_53 [i_7] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (signed char)104);
                }
                for (int i_16 = 1; i_16 < 11; i_16 += 2) /* same iter space */
                {
                    arr_56 [i_7] [0LL] [i_7] [i_8] = ((/* implicit */unsigned char) var_9);
                    arr_57 [i_8] = ((/* implicit */short) (-(((/* implicit */int) (signed char)127))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_28 ^= ((/* implicit */long long int) ((unsigned long long int) arr_48 [i_10 - 1] [i_8] [i_10 - 1] [i_16 + 1]));
                        arr_60 [(signed char)4] [(unsigned short)3] [(unsigned short)3] [i_10] [i_10 - 3] [i_10] [i_8] = ((/* implicit */short) (signed char)127);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_10 - 2] [i_16 - 1] [i_10 + 2] [i_10 - 2] [i_10 - 2] [i_10 - 2])) || (((/* implicit */_Bool) arr_20 [i_16] [i_16 + 1] [i_10 - 3] [6LL] [i_10] [i_10 + 1]))));
                    }
                }
                arr_61 [i_8] [i_10] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (signed char)(-127 - 1))))));
            }
            arr_62 [i_7] [i_7] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-105)) + (2147483647))) >> (((arr_50 [i_8] [i_8] [i_8]) - (9203981933111420332LL)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-105)) + (2147483647))) >> (((((arr_50 [i_8] [i_8] [i_8]) - (9203981933111420332LL))) + (3914858035162157965LL))))));
            arr_63 [i_8] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (signed char)(-127 - 1))))));
            /* LoopSeq 3 */
            for (long long int i_18 = 2; i_18 < 11; i_18 += 1) 
            {
                var_30 = arr_40 [i_7] [i_7] [i_7] [i_18] [(unsigned short)8] [i_18];
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned char) (signed char)127)))));
            }
            for (short i_19 = 4; i_19 < 10; i_19 += 2) 
            {
                arr_69 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)115)) < (((/* implicit */int) arr_54 [i_8] [i_8] [i_19] [i_19 - 3]))));
                arr_70 [i_8] = ((short) ((arr_28 [i_7] [i_7]) / (((/* implicit */int) var_10))));
            }
            for (short i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_68 [i_7]))))));
                /* LoopNest 2 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    for (short i_22 = 4; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */int) max((var_33), (((int) (signed char)-127))));
                            arr_79 [i_8] [12LL] [i_20 + 1] [i_21 - 1] [i_22 + 3] = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)-119))));
                            arr_80 [i_8] [2LL] [i_8] [2LL] [i_21 - 1] [(signed char)10] = ((/* implicit */_Bool) ((unsigned short) arr_58 [i_21] [i_21 - 1] [i_8] [i_21 - 1] [i_21 - 1] [(signed char)11]));
                            arr_81 [i_7] [i_8] [i_20] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_13 [i_21 - 1] [i_20 + 3] [i_20 + 2] [i_20 + 4]))));
                            arr_82 [i_7] [i_22] [i_20] [i_21] [i_20] |= (+(arr_77 [i_7] [i_7] [i_21 - 1] [i_21 - 1] [i_22]));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned int) arr_55 [i_7] [i_8] [i_20] [i_8]);
            }
        }
        for (short i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 13; i_24 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    arr_90 [i_25] [i_24] [i_23] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)100))));
                    var_35 = ((/* implicit */_Bool) ((((arr_37 [i_25] [i_24] [i_23] [i_7]) * (arr_37 [i_25] [i_24] [i_23] [i_7]))) * (((/* implicit */unsigned long long int) min((max((arr_28 [i_7] [i_25]), (((/* implicit */int) (signed char)-120)))), (((((/* implicit */_Bool) arr_35 [i_7] [i_25] [(unsigned char)2])) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_54 [i_25] [i_23] [12LL] [i_25])))))))));
                }
                /* vectorizable */
                for (unsigned short i_26 = 2; i_26 < 12; i_26 += 2) 
                {
                    var_36 |= ((/* implicit */unsigned long long int) arr_26 [i_26]);
                    arr_93 [i_7] [i_7] [i_7] [i_23] [i_23] [i_26] = ((/* implicit */short) ((((unsigned int) arr_41 [i_26] [i_26 - 1] [i_24] [i_23] [(short)1])) >> (((((/* implicit */int) (signed char)122)) - (101)))));
                }
                arr_94 [i_7] [i_23] [i_7] [i_7] = arr_6 [i_7];
                var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_46 [i_7] [i_23] [i_7] [i_24] [i_24]))))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_27 = 2; i_27 < 9; i_27 += 4) 
            {
                for (short i_28 = 0; i_28 < 13; i_28 += 2) 
                {
                    {
                        var_38 = ((/* implicit */short) ((unsigned int) min(((signed char)127), (var_2))));
                        arr_99 [i_27] [7LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)119))));
                        arr_100 [i_28] [i_28] [i_27 - 2] [i_23] [i_7] = ((/* implicit */short) ((unsigned long long int) max(((signed char)-123), ((signed char)119))));
                        var_40 = ((/* implicit */_Bool) min(((signed char)127), ((signed char)-104)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_29 = 0; i_29 < 13; i_29 += 4) /* same iter space */
            {
                arr_103 [i_7] [i_23] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_58 [i_7] [i_7] [i_29] [i_7] [i_29] [i_29])) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) * (((((/* implicit */unsigned long long int) arr_58 [(short)10] [i_29] [i_29] [i_29] [i_23] [i_7])) * (var_0)))));
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) min(((signed char)123), ((signed char)-117)))), (max((((/* implicit */unsigned short) arr_73 [i_7] [i_29] [i_7] [i_7])), (arr_3 [i_29])))))) < (((((/* implicit */_Bool) arr_64 [i_29] [i_23])) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)-117)))))))));
            }
            /* vectorizable */
            for (short i_30 = 0; i_30 < 13; i_30 += 4) /* same iter space */
            {
                arr_106 [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)123))));
                var_42 ^= (((+(var_0))) << (((((/* implicit */int) (signed char)-120)) + (142))));
            }
            var_43 = ((/* implicit */_Bool) (signed char)-123);
        }
    }
    for (long long int i_31 = 0; i_31 < 12; i_31 += 2) 
    {
        var_44 = ((/* implicit */long long int) max((min((((/* implicit */short) arr_64 [i_31] [i_31])), (arr_47 [i_31]))), (((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_27 [i_31])), (var_4)))) < (((/* implicit */int) min((((/* implicit */short) arr_88 [i_31])), (arr_39 [(_Bool)1] [i_31] [i_31] [(_Bool)1] [i_31])))))))));
        /* LoopSeq 1 */
        for (short i_32 = 0; i_32 < 12; i_32 += 2) 
        {
            var_45 = (signed char)105;
            var_46 = ((/* implicit */unsigned int) arr_10 [i_32]);
        }
        arr_115 [i_31] [i_31] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((unsigned long long int) (signed char)(-127 - 1)))));
    }
    /* vectorizable */
    for (short i_33 = 0; i_33 < 23; i_33 += 2) 
    {
        var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_116 [i_33])))))));
        var_48 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)120)) ? ((+(((/* implicit */int) arr_116 [i_33])))) : (arr_117 [i_33])));
        var_49 &= ((/* implicit */short) (signed char)(-127 - 1));
    }
}
