/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81777
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_15))) + (((((/* implicit */int) var_6)) + (var_14)))))) + (max((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), (var_12)))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)183)) - (((/* implicit */int) (unsigned short)31744))))))) ? ((+(arr_3 [i_0] [i_1]))) : (max((var_0), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                var_17 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)216))));
                arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31750)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */int) (!(arr_7 [i_2] [i_0]))))));
                arr_11 [i_0] [i_1] [i_2] = (!((_Bool)1));
            }
        }
        for (int i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            var_18 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3] [i_3])) ? ((-(arr_6 [i_0] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (arr_7 [i_3 - 3] [i_3 + 1]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)33813)))))));
            arr_15 [i_0] [i_3 - 4] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 1]))) & (var_5))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(arr_7 [i_0] [i_4]))))));
            arr_18 [i_4] = ((/* implicit */short) ((unsigned short) max((max((arr_14 [i_0] [i_0] [i_4]), (((/* implicit */long long int) (unsigned short)31714)))), (((/* implicit */long long int) var_15)))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_5) >= (var_3))))))) ? (((/* implicit */unsigned int) ((arr_8 [i_0] [i_0] [i_4]) ^ (((/* implicit */int) arr_12 [i_0] [i_4]))))) : (min((min((((/* implicit */unsigned int) arr_0 [i_4] [i_0])), (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15)))))))));
            arr_19 [i_4] = ((/* implicit */short) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_4] [i_4]))))))));
        }
        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            arr_22 [i_5] [i_5 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_5 + 1])) | (((/* implicit */int) arr_20 [i_5 - 1]))))) || (((((/* implicit */int) arr_20 [i_5 + 3])) != (((/* implicit */int) arr_20 [i_5 + 3]))))));
            arr_23 [i_0] [i_0] = ((/* implicit */long long int) 4097853513U);
            arr_24 [i_0] [i_5 + 2] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_4 [i_5] [i_0])))) && (((((/* implicit */_Bool) var_5)) || ((_Bool)1))))) && (((/* implicit */_Bool) ((int) var_1)))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_27 [i_0] [i_6] [i_6] &= ((/* implicit */unsigned int) ((short) arr_14 [i_6] [i_6] [i_0]));
            arr_28 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_6]))))) || (((/* implicit */_Bool) (-(var_5))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            arr_33 [i_7] = ((/* implicit */short) ((arr_0 [i_7 + 2] [i_0]) ? (((/* implicit */int) (unsigned short)65530)) : (((int) arr_16 [i_7 + 1] [i_7] [i_0]))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_7] [i_9] = ((((/* implicit */int) (short)-30188)) ^ (((/* implicit */int) arr_29 [i_0] [i_0] [i_7 + 1])));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3115305982U)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) (~(arr_36 [i_0] [i_7 + 3])));
            arr_41 [i_7] [i_7] [i_0] = ((/* implicit */short) ((6U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 - 1] [i_7])))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
        {
            arr_46 [i_10] [i_11 + 1] [i_11] = arr_43 [i_11] [i_11 + 1];
            arr_47 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)33810))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_10] [i_11 - 1] [i_11 - 1])))))));
        }
        for (long long int i_12 = 1; i_12 < 8; i_12 += 1) /* same iter space */
        {
            arr_52 [i_10] [i_12 + 1] = ((/* implicit */_Bool) ((int) ((var_1) | (((/* implicit */int) arr_1 [i_10] [i_10])))));
            var_24 = (-(var_5));
            var_25 += ((/* implicit */short) (+(((/* implicit */int) arr_29 [i_12 + 1] [i_12] [i_12]))));
            /* LoopSeq 2 */
            for (int i_13 = 1; i_13 < 10; i_13 += 3) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [i_12 + 1]))));
                arr_56 [i_13] [i_12] [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_1))) ? (-1148305906) : (((((/* implicit */_Bool) arr_1 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) (short)32758)) : (arr_4 [i_12] [i_10])))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4088))));
            }
            for (short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65530)) && (((/* implicit */_Bool) arr_45 [i_12 + 3]))));
                var_29 ^= ((/* implicit */int) ((arr_48 [i_12 - 1] [i_12 - 1] [i_12 + 1]) * (arr_48 [i_12 - 1] [i_12] [i_12 + 1])));
            }
        }
        for (int i_15 = 2; i_15 < 7; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                /* LoopSeq 4 */
                for (short i_17 = 4; i_17 < 7; i_17 += 2) 
                {
                    arr_69 [i_10] [i_15] [i_17] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)240));
                    var_30 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                }
                for (int i_18 = 0; i_18 < 11; i_18 += 4) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_15 + 3] [i_15 - 1])))))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46265))) != (9800660656900846498ULL)));
                }
                for (short i_19 = 1; i_19 < 7; i_19 += 1) 
                {
                    arr_76 [i_10] [i_10] [i_15] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_37 [i_10] [i_15 + 4] [i_19 + 4] [i_19 - 1])) >= (arr_3 [i_19 + 2] [i_19 + 2])));
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_36 [i_16] [i_16]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) / (460768893U)));
                        arr_79 [i_10] [i_15] [i_15 - 1] [i_16] [i_10] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_15 + 4] [i_19 + 1] [i_19 + 1])) ? (((/* implicit */unsigned int) arr_49 [i_15 + 2] [i_15] [i_16])) : (arr_48 [i_20] [i_19 + 3] [i_15 + 4])));
                        var_34 = ((((/* implicit */int) arr_70 [i_15 + 3] [i_15 + 3] [i_16] [i_19 + 2])) < (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 2401989639U))))));
                    }
                    for (short i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
                    {
                        arr_83 [i_10] [i_10] [i_16] [i_19] [i_19 + 2] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2136)) ? ((~(((/* implicit */int) (unsigned short)31710)))) : (((/* implicit */int) arr_7 [i_16] [i_15]))));
                        arr_84 [i_10] [i_10] [i_16] [i_10] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)4095))));
                        var_35 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) (short)32764))));
                        arr_85 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) 1179661313U)))));
                    }
                    for (short i_22 = 0; i_22 < 11; i_22 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65530)))))));
                        arr_89 [i_22] [i_22] [i_16] [i_22] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_57 [i_19] [i_19 + 3] [i_19] [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_57 [i_19] [i_19 + 3] [i_19 + 3] [i_19 + 2])));
                    }
                    var_37 = (!((!(((/* implicit */_Bool) var_4)))));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_90 [i_10] [i_16] [i_15] [i_10] [i_10] = ((/* implicit */unsigned short) ((int) arr_0 [i_15 - 2] [i_19 + 3]));
                }
                for (short i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    arr_94 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_15 + 2] [i_15 - 2] [i_15 + 4]))));
                    var_39 = (((((~(((/* implicit */int) (unsigned short)65530)))) + (2147483647))) >> (((((/* implicit */int) arr_35 [i_10] [i_10])) & (((/* implicit */int) (_Bool)1)))));
                }
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_44 [i_10]))));
                arr_95 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56325))) : ((~(4294967293U)))));
            }
            arr_96 [i_10] = ((/* implicit */_Bool) ((arr_48 [i_15 - 1] [i_10] [i_10]) + (((/* implicit */unsigned int) arr_4 [i_10] [i_15 + 3]))));
        }
        arr_97 [i_10] = ((/* implicit */unsigned char) var_15);
        arr_98 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_26 [i_10] [i_10]))));
    }
}
