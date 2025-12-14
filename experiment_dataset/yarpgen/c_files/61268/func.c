/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61268
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
    var_10 = ((/* implicit */_Bool) var_3);
    var_11 &= ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48890))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64555)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned char)31))))) : ((+(var_7)))))));
            var_13 = ((/* implicit */unsigned int) arr_2 [i_1]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_14 += ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) arr_0 [i_2])), (((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    arr_17 [(unsigned short)0] [i_2] [i_3] [(unsigned short)0] = (unsigned short)56742;
                    var_15 = (-(arr_8 [i_4 + 1] [i_0 + 1]));
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_21 [i_0] [i_2] [i_3] [i_3] [i_2] &= ((/* implicit */unsigned short) arr_8 [(unsigned char)10] [(unsigned short)7]);
                    var_16 &= ((/* implicit */int) ((((3ULL) * (((/* implicit */unsigned long long int) var_0)))) / (arr_18 [i_0] [i_0] [i_0 + 1] [i_0])));
                    var_17 = ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_2])) ? (var_6) : (arr_3 [i_0 + 2] [i_2]));
                }
                arr_22 [i_3] [i_2] [i_0 - 2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0 + 2] [i_0 - 1] [i_2] [3U]))));
                var_18 = ((/* implicit */unsigned char) (+(arr_5 [i_0 + 1] [i_0 + 1])));
                var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_0 + 1] [i_0 + 2]) : (arr_8 [i_0] [i_0 + 1])));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                var_20 += (unsigned char)40;
                arr_25 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (18446744073709551613ULL) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) arr_11 [i_2] [3U] [i_2] [i_2]))))));
            }
            /* vectorizable */
            for (short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_14 [8U] [0LL] [i_2] [i_2] [i_7] [i_7]))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : (var_1)));
                            var_23 = ((/* implicit */unsigned char) ((unsigned short) 18446744073709551604ULL));
                            var_24 = ((/* implicit */short) ((arr_0 [i_0 - 2]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_24 [i_8 + 1]))));
                            arr_35 [i_7] [i_2] [3U] = ((/* implicit */unsigned short) var_7);
                        }
                    } 
                } 
                var_25 = ((((/* implicit */long long int) arr_20 [i_2] [i_2] [i_2] [i_0 - 2])) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1708763405U)) : (var_7))));
                var_26 -= ((/* implicit */unsigned short) ((unsigned long long int) arr_30 [i_0] [6U] [i_7] [i_7]));
            }
            var_27 += ((/* implicit */unsigned short) arr_15 [i_2] [i_0 + 1] [7ULL] [i_2] [(unsigned char)8] [i_0 + 1]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_40 [(unsigned short)10] [i_10] = ((/* implicit */unsigned short) (+(arr_26 [i_0] [i_0] [9LL])));
            var_28 += ((/* implicit */unsigned char) var_1);
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_11 = 4; i_11 < 10; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        arr_49 [i_0] [i_10] [i_11 + 1] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1708763405U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) : (var_5)));
                        arr_50 [i_10] [i_12] [i_12] [(_Bool)1] [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) arr_32 [i_10]))));
                        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_39 [i_0 + 1] [i_10] [i_10]))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */int) ((var_6) == (((unsigned int) (unsigned short)43505))));
                        arr_53 [i_0] [i_14] [i_10] [i_12 + 1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_10] [i_10] [i_14])) ? (((/* implicit */unsigned long long int) var_5)) : (18022748156491648769ULL)))) ? (((/* implicit */int) arr_46 [i_11 - 1] [i_14])) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_2)))))));
                        arr_54 [i_10] [i_10] [1ULL] [i_12] [1ULL] [i_10] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_10] [i_11 - 2] [i_12 - 1] [i_12 - 1])) ? (arr_33 [i_0 - 1] [(_Bool)1] [i_11] [3ULL] [5ULL]) : (arr_33 [i_0] [(signed char)4] [i_11] [i_12 - 1] [i_0])));
                        arr_55 [2LL] [2LL] [i_10] [i_11 - 1] [2U] [i_14] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? ((-(arr_34 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [3U] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [(short)7] [3] [i_10] [i_0]))) == (var_5)))))));
                        var_31 = ((/* implicit */unsigned short) ((arr_42 [i_0 - 1] [i_10] [i_11 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)));
                    }
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */_Bool) arr_51 [i_0 + 2] [i_10] [(unsigned short)4] [i_12] [i_15] [i_15] [i_10]);
                        var_33 += ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (18446744073709551592ULL))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((arr_12 [i_15] [i_12] [6U] [6U]) - (15449344958002079848ULL))))))));
                        var_34 = ((/* implicit */int) (+(3ULL)));
                        var_35 &= ((/* implicit */unsigned int) var_3);
                        arr_58 [i_15] [1] [i_15] [i_15] [(_Bool)1] [(unsigned short)9] [i_10] = ((/* implicit */long long int) ((short) ((unsigned char) 2586203915U)));
                    }
                    var_36 *= ((/* implicit */unsigned int) (~(4939586318404530848ULL)));
                    var_37 |= ((/* implicit */unsigned char) var_0);
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_32 [2U]))));
                    var_39 += ((/* implicit */_Bool) 13507157755305020760ULL);
                }
                var_40 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7)))))) & ((-(4939586318404530848ULL)))));
            }
        }
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (unsigned char i_18 = 4; i_18 < 9; i_18 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            var_41 *= ((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned long long int) ((int) var_3)))));
                            arr_72 [i_0] [i_0] [i_19] [i_18] [i_19] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) 2586203921U)) ? (((/* implicit */unsigned long long int) arr_36 [i_19])) : (((((/* implicit */_Bool) 16464248523106993899ULL)) ? (arr_33 [i_0] [(unsigned char)8] [(unsigned short)1] [i_18] [i_19]) : (((/* implicit */unsigned long long int) arr_3 [i_17] [i_18]))))));
                            var_43 ^= ((/* implicit */_Bool) (~(arr_36 [i_17])));
                        }
                        /* vectorizable */
                        for (long long int i_20 = 2; i_20 < 8; i_20 += 1) /* same iter space */
                        {
                            arr_75 [i_0] [i_16] [9U] [i_18] [9U] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)110)) >= (((/* implicit */int) (_Bool)1)))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
                            var_45 = ((/* implicit */unsigned char) arr_61 [(unsigned char)2] [(unsigned char)2]);
                            arr_76 [i_0] [(unsigned short)5] [i_0] [i_18 + 2] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_18 - 3] [i_18 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1495273949U)))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))));
                        }
                        for (long long int i_21 = 2; i_21 < 8; i_21 += 1) /* same iter space */
                        {
                            arr_80 [i_0] [(unsigned char)2] [i_17] [i_17] [i_21] = ((/* implicit */unsigned char) var_9);
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)90)) / (((/* implicit */int) (unsigned char)22))));
                        }
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (1197946879) : (((/* implicit */int) (short)-1500)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((arr_2 [i_18 + 2]) <= (((/* implicit */unsigned long long int) var_5))))) : (((/* implicit */int) arr_23 [i_16]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_22 = 1; i_22 < 10; i_22 += 2) 
        {
            for (unsigned char i_23 = 2; i_23 < 10; i_23 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned char) (-(var_0)));
                        var_49 = ((/* implicit */unsigned char) arr_20 [i_23] [i_22 + 1] [(signed char)0] [(unsigned short)4]);
                    }
                    arr_87 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (7ULL) : (((/* implicit */unsigned long long int) 44045805))));
                    var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [(_Bool)1] [(unsigned short)1] [i_0] [i_0] [i_0 - 1]))))) >= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))))));
                }
            } 
        } 
        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_73 [i_0] [(unsigned char)3] [i_0 + 2])), (arr_5 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 9223372036854775807LL)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))))))))));
        var_52 = ((/* implicit */unsigned int) arr_0 [9LL]);
    }
}
