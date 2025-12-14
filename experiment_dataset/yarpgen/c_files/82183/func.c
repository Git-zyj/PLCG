/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82183
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42535)) ? (((/* implicit */int) (unsigned short)36398)) : (((/* implicit */int) (unsigned short)36398))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */int) ((signed char) arr_3 [i_1] [i_1 + 1]));
            arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 3]))));
        }
        for (long long int i_2 = 1; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_2] [i_2] [i_2 + 4]));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)29142)) ? (((/* implicit */int) (unsigned short)36401)) : (((/* implicit */int) (unsigned short)29144)))) != (((/* implicit */int) (unsigned char)54))));
        }
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) arr_5 [i_0]))) : (((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) var_1))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_3] [(unsigned short)13] [i_3])), (arr_21 [i_3] [i_4] [i_6] [i_6 + 2] [i_7]))))));
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)36401))))), (((((/* implicit */_Bool) (short)19883)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) : (-2700211341668618458LL)))));
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (short)-19883)) : (((/* implicit */int) (signed char)116))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -913798217)) ? (((/* implicit */int) (unsigned short)29112)) : (((/* implicit */int) (short)32764)))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36394)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)116))) : (4319475679838259479LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_4])))) : (((unsigned long long int) var_13))));
                    var_24 *= ((unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (_Bool)1))));
                    arr_23 [9LL] [(unsigned short)2] [i_5] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_12 [i_3])))) ? (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_5])))) : ((-(var_14)))));
                }
            } 
        } 
        arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) min((((arr_10 [i_3] [i_3] [i_3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_10 [18U] [i_3] [i_3])))), (((arr_10 [i_3] [i_3] [i_3]) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_3]))))));
    }
    for (signed char i_8 = 3; i_8 < 15; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (short i_9 = 2; i_9 < 17; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (+(arr_9 [i_8 + 3] [i_9] [22ULL]))))))))));
                        arr_33 [i_8] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) var_15))), ((~(arr_5 [i_10])))))) ? (((arr_9 [i_9 - 2] [i_10] [i_8]) >> (((arr_5 [i_10]) - (1725019868U))))) : ((+(((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8])))))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_35 [i_8] [i_8] [i_8] [i_8]))))))) ? (((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((unsigned short) var_16)))));
                        var_28 = ((/* implicit */signed char) ((short) ((arr_10 [i_8 + 1] [i_9 + 1] [i_9 - 1]) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_8)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-50)) != (((/* implicit */int) (unsigned char)45))))))));
                    }
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((unsigned int) arr_27 [10LL])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_9 - 1]))))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [4ULL]))) - (arr_26 [i_8 - 3])))))));
        arr_38 [i_8 + 2] [i_8] = ((/* implicit */unsigned long long int) var_14);
    }
    /* LoopSeq 2 */
    for (long long int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
    {
        var_31 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_40 [i_13]), (arr_40 [i_13])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [0U])) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) var_3))))), ((~(var_16))))) : ((-(((((/* implicit */_Bool) arr_8 [i_13] [i_13])) ? (var_16) : (((/* implicit */long long int) arr_5 [i_13]))))))));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            for (int i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                {
                    arr_46 [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) arr_39 [i_13]);
                    arr_47 [i_15 + 1] [i_13] [i_13] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_41 [i_15 - 1] [i_15 - 2] [i_15 - 2])), (((((/* implicit */_Bool) arr_9 [i_15 - 2] [i_15 - 1] [i_13])) ? (arr_9 [i_15 + 1] [i_15 - 2] [i_13]) : (arr_9 [i_15 - 2] [i_15 - 1] [i_13])))));
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            for (int i_17 = 1; i_17 < 21; i_17 += 3) 
            {
                {
                    var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(913798211)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_41 [i_13] [i_13] [i_13]))) ? (max((((/* implicit */unsigned int) var_3)), (arr_45 [6U] [6U] [6U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_14))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18446744073709551615ULL))))) : (((var_1) ? (arr_51 [i_13] [(short)14] [i_17]) : (arr_54 [i_16] [i_16])))))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29135)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (18446744073709551615ULL)));
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_17 + 2] [i_17 + 2] [i_17 + 1])), (arr_9 [i_13] [i_13] [i_16])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_16] [i_17 + 1] [i_16])) ? (((/* implicit */long long int) arr_49 [i_13] [i_19])) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_17 + 2] [i_17 + 2] [i_17 - 1]))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 642949158U)) : (18446744073709551612ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_45 [i_17] [i_17 + 2] [i_17 - 1]) != (arr_5 [i_13]))))))))));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (!(max((arr_10 [i_17 - 1] [i_17 - 1] [(short)20]), (arr_10 [i_17 - 1] [i_17 - 1] [i_19]))))))));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((unsigned int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), ((~(arr_45 [i_16] [i_16] [i_19]))))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) var_15)));
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_60 [4U] [4U] [4U] [4U] [i_21] [4U]), (((/* implicit */signed char) var_1))))) ? (((unsigned int) arr_43 [i_13] [i_13] [i_13])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_17 + 1] [i_17 - 1] [i_17 - 1] [i_21])))))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) arr_43 [i_13] [i_13] [i_13])))) : (((/* implicit */unsigned long long int) ((long long int) var_11))))))));
                                arr_64 [i_13] [(signed char)12] [i_13] [i_13] [i_16] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_54 [i_17 + 2] [i_13]))) ? (((((/* implicit */_Bool) arr_54 [i_17 - 1] [i_13])) ? (arr_54 [i_17 + 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) var_14))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_22 = 0; i_22 < 23; i_22 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)52962)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (15102748316666319980ULL))), (min((((/* implicit */unsigned long long int) (+(var_11)))), (var_8)))));
        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) min((min((((15229840056588372471ULL) & (var_7))), ((-(arr_57 [i_22]))))), (max((((/* implicit */unsigned long long int) min((arr_66 [i_22]), (((/* implicit */unsigned short) var_12))))), (arr_51 [i_22] [i_22] [i_22]))))))));
    }
    var_42 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (var_11) : (var_11)))));
}
