/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5919
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_20 = (-(arr_1 [i_0]));
        arr_3 [(unsigned short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_18)) : (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_4 [i_0 - 1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
        arr_5 [i_0] = ((/* implicit */short) 990198356);
    }
    var_21 = ((/* implicit */_Bool) ((var_4) << ((((((-(((/* implicit */int) var_10)))) + (20584))) - (55)))));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */long long int) arr_1 [i_1])))));
        var_23 = ((/* implicit */_Bool) ((((var_6) < (((/* implicit */unsigned long long int) var_0)))) ? (((((/* implicit */long long int) arr_7 [i_1])) + (var_13))) : (((/* implicit */long long int) 2974864716U))));
        var_24 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((unsigned char) var_5))))) * (((/* implicit */int) arr_2 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_2] [i_2]))) + (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_2] [i_2]) : (var_19)))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 6; i_3 += 4) 
        {
            arr_14 [i_3] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3]))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */int) ((((/* implicit */long long int) (((~(((/* implicit */int) var_16)))) & (((/* implicit */int) var_17))))) & ((((~(var_11))) | (((/* implicit */long long int) arr_19 [i_5] [i_3 + 1]))))));
                            arr_24 [i_5] [4LL] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_13)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_27 [i_2] [(signed char)2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_13 [i_3 + 3] [i_3] [i_4 + 1])));
                            arr_28 [i_2] [i_3] [i_4] [i_3] [i_3] [i_2] [i_7] |= ((/* implicit */unsigned int) (+(arr_21 [i_7])));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_3 - 2] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_3 + 3] [i_3] [i_5]))));
                        }
                        arr_29 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_16)))))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_8 [i_3 - 2]))))))));
                        arr_30 [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) var_4));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            arr_34 [i_5] [9U] [i_5] = ((/* implicit */unsigned int) ((var_1) | (var_1)));
                            arr_35 [i_8] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */long long int) var_19);
                            var_28 = (+(((((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */unsigned long long int) var_13)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4 - 3] [i_3] [i_3 - 2] [i_3 - 2] [i_8]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_3 + 2])) ? (((/* implicit */long long int) arr_21 [i_3 - 2])) : (var_13)));
                            arr_40 [i_5] [i_2] [i_3 - 2] [1U] [i_4] [i_5] [9] = ((/* implicit */_Bool) var_4);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_44 [i_2] [i_3 + 4] [i_4] [i_5] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -990198357)) ? (990198356) : (((/* implicit */int) (_Bool)0))))) ? (arr_13 [i_3 + 3] [i_3 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14099)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (_Bool)1))))) ? (-3211034630246307539LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_4 - 3] [i_3 + 2] [i_5]))))))));
                            arr_45 [i_2] [i_3] [i_4 + 1] [i_4 - 3] [7LL] [i_5] = ((/* implicit */unsigned char) var_4);
                        }
                    }
                } 
            } 
            var_30 = arr_6 [i_3 + 1];
        }
    }
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11169))) : (((unsigned long long int) var_7))))) ? (((((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_11] [i_13]))))) << (((var_8) - (8892122041877581001ULL))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(var_13)))) : (var_1)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 2; i_17 < 8; i_17 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((long long int) var_11));
                            arr_64 [i_11] [i_15] [(unsigned char)1] [i_14] [i_15] = ((/* implicit */_Bool) arr_37 [i_15]);
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1590058568)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))));
                            arr_65 [i_11] [i_15] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11]))) : (var_1))));
                            arr_66 [i_11] [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18014398509481983ULL)) ? (((/* implicit */int) (short)-71)) : (((/* implicit */int) (unsigned short)25))));
                        }
                        for (signed char i_18 = 2; i_18 < 8; i_18 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11] [5] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (9223372036854775807LL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_50 [i_11] [i_14] [i_15]))));
                            arr_70 [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -990198357)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21521))) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_46 [i_16] [i_11])) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (_Bool)1)))));
                            arr_71 [i_11] [i_14] [i_18 - 1] [i_14] [i_11] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_18)))) ? (var_6) : (((/* implicit */unsigned long long int) arr_49 [i_16] [i_11] [i_15]))));
                            var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_19)))) ? (var_12) : (((/* implicit */int) arr_67 [i_11] [i_18 + 1] [i_11]))));
                        }
                        arr_72 [i_11] [i_15] [i_15] [i_11] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))));
                    }
                    arr_73 [i_11] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_8 [i_11])))) ? (((17ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-80))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_11])))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 2; i_19 < 8; i_19 += 1) 
                    {
                        for (unsigned char i_20 = 1; i_20 < 8; i_20 += 1) 
                        {
                            {
                                arr_78 [(unsigned char)9] [i_14] [i_15] [i_14] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)30260))))) ? (((/* implicit */unsigned long long int) ((0U) >> ((((~(((/* implicit */int) var_16)))) + (28)))))) : (arr_69 [i_11] [i_14] [i_20 - 1] [i_19] [i_15])));
                                var_37 = ((signed char) arr_22 [i_11] [i_14] [i_15] [i_19] [i_15] [i_20]);
                                var_38 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((int) var_14)) : ((~(var_0))))));
                            }
                        } 
                    } 
                    arr_79 [i_15] [i_15] [i_15] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) : (((((/* implicit */_Bool) var_18)) ? (var_11) : (((/* implicit */long long int) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 8; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            {
                                arr_86 [i_11] [i_14] [i_14] [i_15] [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_11] [i_15] [i_15] [i_15] [i_22])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_14)) : ((-(((((/* implicit */int) var_14)) | (((/* implicit */int) var_17))))))));
                                arr_87 [i_11] [2ULL] [(unsigned char)8] [i_21 + 2] [0LL] |= ((/* implicit */long long int) -990198357);
                                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18014398509481983ULL)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */long long int) arr_43 [i_14] [i_21 + 1] [i_21 - 1] [i_21 + 1])) : (((((/* implicit */_Bool) arr_43 [i_14] [i_21 - 1] [i_21] [i_21 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-64))) : (var_11)))));
                                arr_88 [i_11] [i_11] [i_15] [i_15] [i_22] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (var_6) : (arr_55 [i_11])))));
    }
}
