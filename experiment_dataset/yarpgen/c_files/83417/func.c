/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83417
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_15 = (~((+(((((/* implicit */unsigned long long int) var_8)) * (arr_8 [i_3] [i_0] [i_0] [i_0]))))));
                            arr_9 [i_0] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)15784)) ^ ((-2147483647 - 1)))))) ? (((/* implicit */int) (signed char)3)) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 2] [i_2 - 2])))) | (((((/* implicit */_Bool) 617840793U)) ? (495676966) : (((/* implicit */int) (unsigned short)65408))))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) ((short) ((int) (unsigned short)34297)))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) (-(var_8)));
                                arr_12 [i_4] [i_3] [(short)7] [i_2] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((short) ((unsigned char) 10125838574132212723ULL)));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 2; i_5 < 9; i_5 += 1) 
                            {
                                var_18 = 1595570551;
                                var_19 = var_11;
                                arr_15 [i_5] [i_3] [i_2] [i_1] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_5 - 1]))));
                            }
                            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33000)) ^ (((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2 - 1] [i_3 + 1] [i_6] [i_3 + 3]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3)))))));
                                arr_19 [i_0] [i_1 + 3] [i_2 - 2] [i_3] [i_6] |= ((/* implicit */long long int) ((min((arr_11 [i_6] [(short)7] [i_3 - 1] [i_2 + 1]), (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_0] [(_Bool)1] [i_1 + 1] [i_3 + 3] [i_6]))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_21 -= ((/* implicit */_Bool) 13939679524646494105ULL);
                                var_22 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 4; i_11 < 14; i_11 += 4) 
        {
            arr_32 [i_10] [i_11] = ((_Bool) (+(-2409888355143763144LL)));
            /* LoopNest 2 */
            for (short i_12 = 3; i_12 < 14; i_12 += 1) 
            {
                for (unsigned char i_13 = 4; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_23 -= ((/* implicit */unsigned int) var_13);
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_11 - 2] [13] [i_12 + 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_11 - 2] [i_12] [i_12 - 1] [i_12] [i_13 + 3]))) - (15762598695796736ULL)))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) max((((long long int) ((-1302469268) ^ (((/* implicit */int) arr_37 [15U] [15U] [i_12 - 1] [i_12] [i_13 - 3] [i_12]))))), (((/* implicit */long long int) ((min((var_3), (((/* implicit */int) arr_35 [i_11 + 2] [i_12 - 2] [i_13])))) + (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 15; i_14 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) (unsigned short)16026);
            var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((((/* implicit */int) (unsigned short)60103)) / (arr_34 [i_10] [i_10] [i_10]))) : (((/* implicit */int) arr_40 [i_10] [i_14] [i_10] [i_14 - 1] [i_14 - 1]))));
        }
        var_28 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-((+(((/* implicit */int) var_10))))))), (((((min((var_5), (((/* implicit */long long int) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10])))) + (9223372036854775807LL))) << (((((arr_41 [10U] [10U]) + (3772690954126311437LL))) - (28LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    {
                        arr_53 [i_10] [7ULL] [i_15] [12] [i_16] [7ULL] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) * (((/* implicit */int) (!((_Bool)1))))));
                        var_29 *= ((/* implicit */_Bool) (+(arr_43 [i_16 - 1] [i_15 - 2])));
                    }
                } 
            } 
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned long long int) (short)31457)))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_20 = 2; i_20 < 14; i_20 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1032192U)) ? (12745602980573987623ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13474389294616239126ULL)) ? (arr_59 [i_20] [i_19] [i_18] [i_15] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (short)-18867))))))));
                            arr_60 [i_15 + 2] [(short)0] [1U] = ((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)204))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */int) arr_40 [0ULL] [i_15] [0ULL] [i_19] [1ULL])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) ((_Bool) var_14)))));
                            var_33 -= 3185456756U;
                            arr_61 [i_10] [i_15 + 4] [i_18] [i_19] [i_20 - 2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_44 [i_10] [i_15 + 2] [i_20]))));
                        }
                        for (int i_21 = 1; i_21 < 14; i_21 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned int) arr_28 [i_15 + 4] [i_21 + 1]);
                            arr_65 [i_10] [i_10] [(short)15] [i_10] [i_10] &= ((/* implicit */unsigned char) (unsigned short)0);
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5))))))))));
                        }
                        var_36 += ((/* implicit */unsigned int) (~(var_3)));
                        arr_66 [i_10] = ((/* implicit */unsigned short) (short)12);
                        var_37 |= ((/* implicit */short) ((2337600630568466485LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U))))))));
                        var_38 -= ((/* implicit */long long int) ((signed char) (-(1ULL))));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (13965846101063686620ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10] [i_10] [(unsigned char)2] [i_10]))))) < (((/* implicit */unsigned long long int) arr_34 [i_10] [i_15 - 2] [i_15 - 3])))))));
            var_40 = ((/* implicit */long long int) ((arr_54 [i_15 + 1] [i_15] [i_15 + 3] [i_15 + 3]) / (((/* implicit */int) arr_64 [i_10] [i_10] [i_15 + 2] [i_15 - 3] [i_15 + 2] [i_15 - 3] [i_15 + 1]))));
        }
        var_41 = ((var_8) ^ (((/* implicit */long long int) (+(-2050255516)))));
        var_42 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(var_0)))))) / (min((((/* implicit */unsigned long long int) ((arr_55 [i_10] [i_10] [i_10]) > (var_3)))), ((+(7174537587866324093ULL)))))));
    }
    var_43 += ((/* implicit */unsigned int) var_1);
}
