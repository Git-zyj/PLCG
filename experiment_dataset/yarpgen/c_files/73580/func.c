/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73580
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
    var_13 &= ((/* implicit */unsigned char) var_2);
    var_14 = ((/* implicit */unsigned long long int) ((var_2) ^ (((/* implicit */int) ((unsigned char) -9051297657918886395LL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) ((arr_5 [(unsigned short)13] [i_1 - 1] [i_2 - 2] [i_3 - 2]) + (((/* implicit */long long int) -467466196))));
                                var_16 = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_1 - 1] [i_2 + 1] [i_4]) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_2]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned int) (unsigned short)64965);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_11 [i_0] [(unsigned char)7] [i_5] [i_5]))));
            var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(unsigned char)7] [(unsigned char)7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) : (arr_4 [i_0] [i_0] [i_0] [i_0 - 2])));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_5])) << (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0] [(_Bool)1])))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    var_22 -= ((/* implicit */unsigned short) ((_Bool) -1LL));
                    var_23 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_7 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [i_7])))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                    var_25 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [14] [i_6 - 1])) ? (((/* implicit */long long int) var_2)) : (arr_5 [i_0] [i_0 - 1] [i_0] [i_6 - 3])));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_10 [i_7] [i_7] [i_7] [i_7] [i_7]))));
                        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((var_1) + (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1])))));
                    }
                }
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_28 = ((((/* implicit */_Bool) 1459359669U)) ? (((/* implicit */int) (unsigned short)570)) : (((/* implicit */int) (unsigned short)570)));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(13599902833385593467ULL)))) ? (8052852907737811142LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64961)))))) ? (((/* implicit */int) arr_26 [i_9] [i_9])) : (((((/* implicit */_Bool) ((var_2) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) min((arr_25 [i_9]), ((unsigned char)83)))) : ((~(((/* implicit */int) arr_25 [i_9]))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 3; i_10 < 15; i_10 += 4) 
    {
        var_30 *= ((/* implicit */unsigned int) arr_11 [i_10] [i_10] [i_10] [i_10]);
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 17; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 16; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_31 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-75))))) || (((/* implicit */_Bool) arr_30 [i_10 - 2] [i_11]))));
                            arr_42 [i_10] [i_10] [i_10] [i_11] [i_10] &= ((/* implicit */unsigned int) arr_3 [i_10] [i_10] [i_10]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_15 = 3; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_32 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)570))))) || (((/* implicit */_Bool) (unsigned char)83)));
                arr_45 [i_15] [i_11] [i_15] = ((unsigned short) -378640540);
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)570))))) ? (((/* implicit */int) arr_35 [(unsigned char)14] [9] [i_11] [i_15])) : (((/* implicit */int) arr_10 [i_10] [1] [i_10] [i_11] [i_15]))));
            }
            for (long long int i_16 = 3; i_16 < 15; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 3; i_17 < 15; i_17 += 4) 
                {
                    for (unsigned short i_18 = 2; i_18 < 13; i_18 += 2) 
                    {
                        {
                            arr_54 [i_10 + 2] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_18 [i_10] [i_10] [i_10] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [6])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8052852907737811126LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)31))))) : (((((/* implicit */unsigned int) arr_43 [i_16])) + (var_11)))));
                            var_34 &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)74)) ^ (((/* implicit */int) (unsigned short)0))));
                            var_35 ^= ((/* implicit */long long int) arr_20 [i_10 - 1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_19 = 1; i_19 < 16; i_19 += 3) 
                {
                    for (unsigned char i_20 = 2; i_20 < 14; i_20 += 2) 
                    {
                        {
                            arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) 18446744073709551612ULL);
                            var_36 &= ((/* implicit */long long int) (_Bool)1);
                            arr_61 [i_10 - 1] [i_10] [i_11] [i_16] [i_19] [i_19] [i_20] |= ((/* implicit */int) arr_58 [i_10] [1LL] [i_10] [i_10 - 3] [i_10] [i_10] [i_10]);
                        }
                    } 
                } 
                arr_62 [i_10] [i_11] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_20 [i_11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_58 [i_10] [i_11] [i_11] [i_11] [i_11] [i_11] [i_16]) < (((/* implicit */unsigned long long int) arr_11 [i_10] [i_10] [17] [i_10])))))) : (arr_18 [i_10 - 2] [i_11] [i_16 - 1] [i_11])));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 7903849975758291638LL))) ? (arr_43 [i_10]) : (((/* implicit */int) (unsigned char)195))));
                var_38 += ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_10] [i_10] [(signed char)12])) && (((/* implicit */_Bool) arr_58 [i_10] [9U] [14] [14] [14] [i_16] [i_10]))))) : (((((/* implicit */_Bool) -7049492608547631410LL)) ? (((/* implicit */int) arr_36 [i_10] [i_11] [i_10] [i_11] [i_11] [i_11])) : (arr_43 [i_10])))));
            }
            for (long long int i_21 = 3; i_21 < 15; i_21 += 4) /* same iter space */
            {
                var_39 |= ((/* implicit */signed char) arr_26 [i_11] [i_11]);
                var_40 |= ((/* implicit */unsigned char) arr_53 [i_21] [i_21] [i_21] [16U]);
            }
        }
        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 1) 
        {
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_44 [i_22])) ^ (var_2))) : (((/* implicit */int) var_3))));
            arr_67 [(unsigned char)1] = ((/* implicit */_Bool) arr_14 [i_10] [i_10] [i_22]);
        }
        /* LoopSeq 3 */
        for (long long int i_23 = 0; i_23 < 17; i_23 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -4645417929970892370LL)))) ? (((((/* implicit */unsigned int) 378640550)) + (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))))));
            var_43 ^= ((((/* implicit */_Bool) arr_2 [i_10 + 2] [i_10 - 2])) ? (arr_2 [i_10 + 2] [i_10 - 2]) : (arr_2 [i_10 - 2] [i_10 - 3]));
            var_44 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [(unsigned short)14])) ? (arr_18 [i_10] [i_10] [i_10 + 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [(signed char)2] [i_10] [i_10] [i_10] [(signed char)2] [i_10] [i_23])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)));
        }
        for (long long int i_24 = 0; i_24 < 17; i_24 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_74 [i_10] [i_10 - 3] [i_24])) - (((/* implicit */int) arr_74 [i_10] [i_10 + 1] [i_24]))));
                var_46 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_55 [i_10] [i_10] [i_10] [i_24] [i_25] [(unsigned char)11]))));
                /* LoopNest 2 */
                for (unsigned char i_26 = 1; i_26 < 13; i_26 += 1) 
                {
                    for (unsigned short i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1024)) ? (var_4) : (((/* implicit */int) arr_10 [i_10] [i_24] [i_25] [i_25] [i_27]))))) ? (((arr_68 [(unsigned char)13] [(unsigned char)13] [i_27]) ? (((/* implicit */int) (unsigned short)64965)) : (((/* implicit */int) arr_73 [(signed char)6])))) : (((/* implicit */int) arr_63 [i_25] [i_25] [i_27]))));
                            var_48 += ((/* implicit */unsigned short) arr_11 [i_25] [i_25] [i_25] [(_Bool)1]);
                            var_49 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)83))));
                        }
                    } 
                } 
            }
            for (unsigned int i_28 = 0; i_28 < 17; i_28 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_29 = 0; i_29 < 17; i_29 += 1) 
                {
                    for (unsigned int i_30 = 1; i_30 < 15; i_30 += 2) 
                    {
                        {
                            var_50 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))) < ((-9223372036854775807LL - 1LL))));
                            var_51 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_10] [i_24] [3LL] [i_29])) ? (-4645417929970892377LL) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [(unsigned short)12] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64977)) && (((/* implicit */_Bool) -4645417929970892370LL)))))) : (((((/* implicit */_Bool) -4618486671444071897LL)) ? (arr_20 [i_29]) : (((/* implicit */unsigned int) arr_29 [i_28]))))));
                        }
                    } 
                } 
                var_52 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [2U])) ? ((-(((/* implicit */int) (unsigned short)64977)))) : (((((/* implicit */_Bool) arr_15 [i_28])) ? (((/* implicit */int) arr_27 [2U] [i_28])) : (((/* implicit */int) arr_8 [i_10] [i_24] [i_28] [i_24]))))));
                /* LoopNest 2 */
                for (signed char i_31 = 0; i_31 < 17; i_31 += 2) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_53 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_10] [6] [i_31] [6] [i_32]))));
                            var_54 = ((/* implicit */unsigned short) ((long long int) (unsigned char)79));
                        }
                    } 
                } 
            }
            for (unsigned int i_33 = 0; i_33 < 17; i_33 += 3) /* same iter space */
            {
                var_55 ^= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)243))));
                var_56 = ((/* implicit */unsigned short) arr_26 [i_10] [i_24]);
            }
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                var_57 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_82 [i_10] [i_24] [(unsigned short)11] [i_34] [i_34] [i_34])) ? (378640550) : (((/* implicit */int) arr_55 [i_10] [i_10] [i_24] [i_10] [(unsigned short)7] [(unsigned char)0])))));
                var_58 |= ((/* implicit */int) arr_9 [i_10] [17LL] [i_10 - 2]);
                var_59 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15222)) ? (((/* implicit */int) ((unsigned char) arr_70 [i_10] [i_10]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10] [i_24] [i_34])))))));
            }
            /* LoopNest 3 */
            for (unsigned char i_35 = 0; i_35 < 17; i_35 += 3) 
            {
                for (long long int i_36 = 0; i_36 < 17; i_36 += 4) 
                {
                    for (int i_37 = 0; i_37 < 17; i_37 += 4) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned short) ((unsigned char) arr_26 [i_10] [i_24]));
                            var_61 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) var_2)));
                            var_62 += ((/* implicit */_Bool) ((8845789813009022320ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                        }
                    } 
                } 
            } 
            arr_108 [(unsigned short)12] [i_24] |= ((/* implicit */int) arr_46 [i_10] [16U] [i_24] [i_24]);
        }
        for (long long int i_38 = 0; i_38 < 17; i_38 += 1) /* same iter space */
        {
            arr_112 [2] [i_38] |= ((/* implicit */long long int) ((_Bool) -21LL));
            var_63 = ((/* implicit */_Bool) min((var_63), ((!(((/* implicit */_Bool) arr_103 [16ULL] [i_10 - 2]))))));
            var_64 = ((/* implicit */int) arr_13 [i_10 - 1]);
            var_65 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)128)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_50 [13] [i_10 - 1] [(_Bool)1] [i_38])) ? (((/* implicit */unsigned int) arr_43 [i_10])) : (arr_76 [i_10] [13U] [i_10] [i_10])))));
        }
    }
    var_66 |= var_8;
    var_67 *= ((/* implicit */unsigned long long int) var_2);
}
