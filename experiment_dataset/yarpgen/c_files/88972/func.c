/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88972
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min(((unsigned char)146), (max((((/* implicit */unsigned char) arr_0 [i_0 - 1] [i_0 + 3])), ((unsigned char)145)))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (8690940071793272671LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 3] [i_1] [i_1] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) max((3401453608U), (((/* implicit */unsigned int) (unsigned char)146))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)31503), (((/* implicit */unsigned short) (unsigned char)146)))))) : (((arr_16 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                                var_13 &= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_6)), (893513687U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)146)))))));
                                var_14 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0 + 3])) * (((/* implicit */int) (_Bool)1)))))));
                                var_15 = ((/* implicit */_Bool) (-(max((893513687U), (((/* implicit */unsigned int) (unsigned char)110))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)109))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (short i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_1] [9U] [17LL] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (min((((/* implicit */int) (signed char)7)), (arr_9 [i_6] [i_1] [i_0 + 1] [i_6 - 2] [i_6] [i_5])))));
                                arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0 + 2] [i_2] [(signed char)11] [(signed char)11] [i_6 + 1] [(short)7] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_17 &= ((((/* implicit */_Bool) (short)17022)) ? (893513687U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17022))));
                                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_20 [(short)5] [i_2] [i_0 - 1] [(short)5] [i_8]), (arr_20 [i_0] [i_0] [i_0 - 1] [i_7] [i_0]))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0 + 3] [i_7] [i_8])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31398)))))) ? (((((/* implicit */_Bool) 3401453608U)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)1668)))) : (((((/* implicit */_Bool) var_3)) ? (arr_14 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 + 3]) : (((/* implicit */int) (short)23819))))));
                                arr_29 [i_0] = ((/* implicit */unsigned int) max((((32767LL) + (((/* implicit */long long int) ((/* implicit */int) (short)1668))))), (((/* implicit */long long int) (~(arr_14 [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_1] [i_8]))))));
                                var_20 += ((/* implicit */short) (-(-1LL)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    arr_32 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0]))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_37 [8] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11]);
                                var_21 = ((/* implicit */_Bool) var_8);
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (short)-17022)) ^ (var_1)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_40 [i_1] &= ((/* implicit */int) (unsigned char)2);
                        arr_41 [i_1] [i_1] [i_9] [i_1] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (893513687U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15871)))))));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (2031299008) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_12] [i_0 - 1]))));
                    }
                    for (long long int i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        arr_44 [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */short) ((((/* implicit */int) (short)15932)) ^ (((/* implicit */int) arr_11 [i_0 + 2] [i_1] [i_9] [i_13 - 1]))));
                        arr_45 [16] [i_1] [i_0] [16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54982)) || (((/* implicit */_Bool) arr_3 [i_13 - 1] [i_0 + 2]))));
                        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-1668))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_24 [i_9] [i_9])))));
                        arr_48 [i_0 + 3] [i_1] [i_1] [i_1] [i_14] [(unsigned char)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_9] [i_14] [i_1] [i_0 - 1])) ? (arr_42 [i_0] [i_1] [i_1] [i_14] [i_0] [i_0 + 1]) : (arr_42 [i_0 + 1] [i_1] [i_14] [i_14] [i_14] [i_0 + 2])));
                        var_26 = ((/* implicit */unsigned char) ((arr_16 [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 1] [i_14] [i_14]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_46 [i_1] [i_14])))))));
                        arr_49 [i_0 - 1] [i_1] [(short)12] [i_9] [i_14] &= ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_5 [i_0 + 1] [i_9]));
                    }
                }
                for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    arr_52 [i_0] [i_1] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (-7442449423301136665LL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            var_27 |= ((((/* implicit */_Bool) (-(var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_53 [i_0] [i_1] [i_15] [i_16 + 1] [i_16 + 1]) : (((/* implicit */int) (unsigned char)146))))));
                            var_28 = ((/* implicit */signed char) (+(arr_33 [i_16 - 1] [i_16 + 2] [i_16 + 2] [i_16 - 1])));
                            arr_58 [i_0] [11U] [i_15] [i_16 + 2] [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_34 [i_0] [i_0] [i_16 + 2])) + (7442449423301136664LL)));
                            var_29 = ((/* implicit */int) (short)-28140);
                        }
                        var_30 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_16 - 1] [i_16] [i_16 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 3])))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)24380)))))));
                    }
                    var_31 = ((/* implicit */short) (_Bool)1);
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_6))));
                }
                var_33 = ((/* implicit */long long int) min((2093568123U), ((((+(2863271164U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 1] [(unsigned char)12]), (arr_6 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1])))) == (((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 + 2])) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2736715412U)))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */short) var_8);
    var_36 |= ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((min((((/* implicit */long long int) var_5)), (var_9))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2980))) : (1232587372U))))))));
    /* LoopNest 3 */
    for (unsigned int i_18 = 2; i_18 < 16; i_18 += 4) 
    {
        for (unsigned int i_19 = 1; i_19 < 15; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                {
                    arr_69 [i_19 + 2] [i_19] [i_20] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_39 [i_18 - 1] [i_18 - 1] [i_19] [i_19] [i_20] [i_20])), (893513687U)))) != (((unsigned long long int) arr_9 [i_18] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_20] [i_20])))))));
                    var_37 = ((/* implicit */int) min((var_37), (((((893513687U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_19 + 1] [1LL] [(signed char)6] [i_20]))))) ? ((-(((/* implicit */int) arr_67 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])))) : (((/* implicit */int) min((arr_67 [i_19 + 1] [i_20] [4U] [i_20]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) min((((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-8)))) << (((((/* implicit */int) arr_67 [i_18] [i_19] [i_20] [i_20])) - (18801))))), ((~(((/* implicit */int) arr_19 [i_20])))))))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */unsigned short) var_3);
}
