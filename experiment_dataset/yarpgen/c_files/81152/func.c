/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81152
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_1 - 1] [i_0])) + (((/* implicit */int) var_14)))) + (((/* implicit */int) min((arr_1 [i_1 - 1]), (((/* implicit */short) arr_2 [i_1 - 2] [i_1])))))));
            arr_7 [(unsigned short)5] = (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) & (8498898714851662125LL)))) ? ((~(((/* implicit */int) var_4)))) : (arr_3 [i_1 - 2] [i_0] [i_0]))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned int) min(((unsigned short)12760), (((/* implicit */unsigned short) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_2] [i_0])) > (((/* implicit */int) (short)-10509))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_16 = var_1;
                            var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((921723810U), (var_0)))), (((((/* implicit */_Bool) max((12711840173917833907ULL), (((/* implicit */unsigned long long int) -1095995001))))) ? (((8835411792364441132ULL) - (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) (unsigned short)15263);
            }
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 2) /* same iter space */
            {
                var_19 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_6 - 2])), (((4368915924776264322LL) | (((/* implicit */long long int) var_9))))))), (min((min((((/* implicit */unsigned long long int) -1243022451)), (5734903899791717718ULL))), (((/* implicit */unsigned long long int) ((short) arr_16 [i_0])))))));
                arr_21 [i_0] [(unsigned short)1] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)10] [i_0])) ? (((/* implicit */long long int) (-(max((((/* implicit */int) (_Bool)0)), (-1104618543)))))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (66060288LL) : (((/* implicit */long long int) arr_5 [i_2]))))));
                var_20 = max((((/* implicit */unsigned short) arr_6 [(short)2] [(signed char)5])), (((unsigned short) (!(((/* implicit */_Bool) 16338670775175856686ULL))))));
            }
            for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4194304)) ? (((/* implicit */int) var_3)) : ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            arr_32 [i_0] [i_0] [3LL] [i_8] = min((arr_11 [8] [i_9]), (var_1));
                            var_22 = ((/* implicit */int) var_7);
                            arr_33 [i_0] [i_2] [(unsigned short)4] [(short)4] [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0])) && (((/* implicit */_Bool) var_3))))), (min((((/* implicit */unsigned char) arr_25 [(unsigned short)7] [i_7 + 1])), (var_14)))))) ? (((unsigned int) arr_11 [i_7 + 1] [i_7 + 1])) : (((/* implicit */unsigned int) 1149744962))));
                            var_23 = ((/* implicit */unsigned char) arr_14 [i_2]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_24 = ((/* implicit */int) 1397598917936068403ULL);
                    arr_36 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_7] [i_2] [0U] [i_10] [i_7 + 1])) / (((/* implicit */int) arr_30 [i_0] [i_2] [i_10] [(short)1] [i_7 + 1]))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */long long int) 543462353U)) : (min((((/* implicit */long long int) 1944002895)), (var_11))))))));
                    var_25 = ((/* implicit */unsigned short) arr_18 [i_7] [8LL] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) 262140U);
                        arr_41 [i_2] [i_7] [i_10] [i_11] = ((/* implicit */int) arr_17 [i_2] [i_2] [i_7] [i_10] [(unsigned char)8] [i_2] [i_0]);
                    }
                }
            }
            for (unsigned int i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
            {
                var_27 ^= ((/* implicit */long long int) (((!(arr_15 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1]))) && ((_Bool)1)));
                var_28 &= ((/* implicit */signed char) 1104618542);
                arr_44 [i_2] [i_2] [i_12 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 14682304138656159817ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12] [i_2]))) : (3764439935053391790ULL))))))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_48 [i_0] = ((/* implicit */unsigned short) ((int) (-(3237631492U))));
                    var_29 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (9649426902752548802ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)65074))) : (((/* implicit */int) arr_39 [i_0] [(short)5] [i_12])))))));
                    arr_49 [i_13] = ((/* implicit */int) var_6);
                }
                arr_50 [i_0] [2] [i_12 - 1] [i_12 - 1] = ((/* implicit */signed char) 12711840173917833884ULL);
            }
        }
    }
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            for (unsigned int i_16 = 2; i_16 < 10; i_16 += 1) 
            {
                for (unsigned short i_17 = 1; i_17 < 11; i_17 += 1) 
                {
                    {
                        arr_60 [i_15] [i_17 - 1] = ((/* implicit */short) (+((-(var_5)))));
                        arr_61 [i_14] [i_14] [4U] [i_16 - 1] [i_16] [i_17 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_13)) - (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65530))))) / (arr_58 [i_16] [i_17 + 1])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 3; i_18 < 8; i_18 += 3) 
                        {
                            var_30 ^= max((((/* implicit */unsigned int) var_14)), ((+(max((626724828U), (((/* implicit */unsigned int) var_8)))))));
                            var_31 ^= ((/* implicit */unsigned long long int) 4847033465144835849LL);
                            arr_65 [i_18] [i_17] [i_16] [(short)5] [i_14] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) (~(var_5)))));
                        }
                        /* vectorizable */
                        for (int i_19 = 1; i_19 < 11; i_19 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_54 [i_17 + 1]))));
                            arr_68 [(short)2] [i_15] [(short)2] [i_15] = ((/* implicit */short) ((long long int) ((unsigned short) (signed char)49)));
                        }
                        var_33 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-7904)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3841)) + (-1293016319)))) : ((-(arr_52 [(unsigned short)8])))))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) var_5))))), (var_11)));
    }
    var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
}
