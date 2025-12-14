/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83856
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) arr_9 [i_2 - 2])) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1])))) : (((/* implicit */int) var_5))));
                                var_13 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_1 [i_3 + 1])))), ((+(((/* implicit */int) arr_1 [i_3 - 1]))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3 + 1] [i_1] [i_3 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) max((((/* implicit */short) var_10)), (arr_5 [(_Bool)1] [(_Bool)1] [i_1] [i_2 - 1]))))));
                                arr_14 [i_1] [16U] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 + 1] [i_1] [i_2 + 1])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (unsigned char)30)))) : (((/* implicit */int) (signed char)-8))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14825)) ? (8388544ULL) : (18446744073701163100ULL)))) ? (arr_8 [i_2] [2] [i_2 - 1] [(unsigned short)4] [i_2 + 1]) : (((/* implicit */int) arr_17 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6]))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_8))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 3; i_7 < 23; i_7 += 2) 
                        {
                            var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_3 [i_0])));
                            var_18 += ((/* implicit */unsigned int) (-(var_4)));
                        }
                        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 3811016184U))) ? (((/* implicit */unsigned long long int) max((-2567788539680631673LL), (((/* implicit */long long int) var_12))))) : (max((3458764513820540928ULL), (((/* implicit */unsigned long long int) (short)3072))))));
                            var_20 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_0] [i_2 - 1]))))));
                            var_21 += ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (short)14825))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1620104188)) ? (18446744073701163100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))))) : ((+(var_1)))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((-(max((((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_8] [i_1] [i_8 - 2] [i_8 - 2] [i_8] [(short)8] [i_8]))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 2]))) : (arr_15 [i_2 + 1] [i_2 - 2])))) ? (((((/* implicit */_Bool) 35993612646875136ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2] [i_2 - 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (2666149926U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))))))));
                            var_25 = ((/* implicit */long long int) (~(((unsigned long long int) var_8))));
                        }
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_3);
                    }
                }
            } 
        } 
    } 
    var_26 -= var_8;
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11521)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9007199237963776ULL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6))))) : (max((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_2))))), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        for (short i_11 = 0; i_11 < 23; i_11 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_10])) ? (arr_3 [i_10]) : (arr_3 [i_10])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_10]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (~(var_4))))));
                /* LoopNest 3 */
                for (int i_12 = 3; i_12 < 22; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        for (int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            {
                                arr_42 [i_14] [i_14] [i_14] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-424448110)))) ? (((((/* implicit */_Bool) 7972514806108346388ULL)) ? (((/* implicit */unsigned long long int) 4294967290U)) : (8587821255225176528ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3458764513820540928ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (8388546ULL)))) ? (((((/* implicit */_Bool) arr_31 [i_12 - 2])) ? (arr_31 [i_12 - 1]) : (arr_31 [i_12 - 1]))) : (((/* implicit */unsigned int) ((int) (unsigned short)64115)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
                {
                    arr_46 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_10])) ? ((+(((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10] [(signed char)8])) ? (var_6) : (((/* implicit */int) var_9)))))) : (var_6)));
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            {
                                arr_52 [i_10] = ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) (_Bool)1)), (2760053018U))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-29980))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (arr_47 [i_15] [i_15]))))) : (max((var_11), (((/* implicit */int) arr_11 [i_15] [i_15] [(unsigned char)17] [i_15 + 1])))));
                                arr_53 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (arr_37 [4ULL] [i_10] [(unsigned char)0]))) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15] [i_15 + 1])))))) : (((((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (var_6)))) : (((unsigned int) var_8))))));
                                arr_54 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15 + 1])) ? (((/* implicit */int) arr_32 [i_15 - 1])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((short) arr_19 [i_10] [22ULL] [22ULL] [22ULL] [4]))) ? ((+(var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_17] [i_17] [i_10] [i_17]))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_38 [i_10] [i_10] [(unsigned char)13] [0ULL] [(unsigned char)13])) : (var_11)))));
                                arr_55 [2ULL] [2ULL] [i_15] [i_15] [2ULL] [i_15] = ((/* implicit */unsigned char) var_0);
                                arr_56 [i_10] [i_10] [i_10] [i_10] [9ULL] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2609565119U)) ? (2962726764722568838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14840)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                        {
                            {
                                var_30 |= ((/* implicit */short) ((((/* implicit */_Bool) min(((-(9858922818484375088ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-29975)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_2))))), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_45 [i_15 + 2] [i_15 - 1] [i_15 + 2])) ? (((/* implicit */int) arr_45 [i_15 - 1] [i_15 - 1] [i_15 + 1])) : (((/* implicit */int) arr_45 [i_15 - 1] [i_15 + 2] [i_15 + 1])))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
                                arr_62 [i_10] [i_10] [7LL] [i_10] [i_10] [7LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10] [3] [(short)0] [i_10] [(_Bool)1])) ? (arr_41 [i_10] [(unsigned short)12] [i_19] [12LL] [i_10] [i_19] [i_10]) : (((/* implicit */long long int) arr_8 [(short)11] [i_11] [i_11] [(short)11] [i_11])))))))) : (((((/* implicit */_Bool) (short)29979)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (unsigned short)33982))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 1; i_20 < 21; i_20 += 3) 
                    {
                        for (unsigned int i_21 = 1; i_21 < 19; i_21 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [7ULL] [i_20] [7ULL] [7ULL])) ? (var_0) : (((/* implicit */unsigned long long int) arr_41 [15] [i_11] [i_20] [i_11] [i_11] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1))) : (((/* implicit */unsigned long long int) ((int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_28 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_43 [i_10] [3LL] [i_10]))))) : (((long long int) var_8))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((arr_47 [i_20] [i_20]), (var_3)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_15] [i_20]))) : (var_0)))))));
                                var_33 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15] [i_15] [11U] [i_15] [i_20])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_58 [i_21 + 2] [i_21] [i_21 + 2] [i_21 + 1] [i_21 + 3])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) var_8))))))));
                                arr_68 [i_21] [i_21] [i_21] [i_21] [i_20] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_15 - 1] [i_15 + 1] [i_15 - 1])) ? (((/* implicit */int) var_7)) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_66 [i_20] [i_20] [i_20])) : (((/* implicit */int) var_2)))), (var_4)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
