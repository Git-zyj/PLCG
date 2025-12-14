/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96784
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [(short)17] [(signed char)7])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (5714224869762703673ULL) : (var_16))) : (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 1780850160)))))) | (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1))))) : (arr_0 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (unsigned short)18);
                    arr_13 [(unsigned short)6] [i_3] |= ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_3))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (short i_6 = 4; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned int i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_23 [i_7] = ((/* implicit */short) arr_19 [i_1]);
                            arr_24 [i_1] [i_4] [i_1] &= ((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (arr_12 [i_1] [(signed char)9] [i_6 + 1] [(signed char)9])))))))) : (((arr_20 [i_7] [i_6 - 2] [i_1] [i_1] [i_1]) >> (((((arr_17 [i_6] [(unsigned short)4]) << (((arr_11 [i_4] [i_4]) - (786366394U))))) - (17293822569102704592ULL)))))));
                            var_22 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_22 [i_7] [i_4] [i_5] [i_6] [i_4] [i_1]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_8])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_28 [i_8] [i_8]))))) ? (((((/* implicit */unsigned long long int) -1408122637)) / (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [i_8]))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned short)16] [i_8] [(unsigned short)16])))));
        arr_30 [i_8] |= (~(((/* implicit */int) arr_6 [i_8])));
    }
    for (int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        arr_33 [i_9] |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((unsigned short) var_3)))))));
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            arr_36 [i_9] [i_9] = ((/* implicit */short) max((arr_32 [18]), (((unsigned int) arr_35 [i_9]))));
            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_35 [i_10])) << (((((/* implicit */int) arr_35 [2U])) - (90)))))))) || (((/* implicit */_Bool) arr_34 [i_9]))));
            var_24 &= ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_2))) ^ (((/* implicit */int) arr_34 [i_9])))) - (arr_31 [(signed char)18])));
            arr_37 [i_9] [i_10 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_10 + 1]))))) ? (((((/* implicit */_Bool) (~(9U)))) ? (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9]))) : (arr_32 [i_9]))) : (min((var_11), (((/* implicit */unsigned int) arr_31 [i_10])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54086)))));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_25 ^= ((/* implicit */signed char) arr_31 [i_12]);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_9] [i_9] [i_12] [i_12] [i_13] = ((/* implicit */_Bool) var_7);
                        arr_48 [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [18ULL] [i_11]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16318)) - (((/* implicit */int) var_12))))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_26 |= ((/* implicit */short) arr_39 [i_13] [i_12]);
                    }
                    arr_49 [i_9] [i_12] [i_12] = ((/* implicit */signed char) arr_34 [i_9]);
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_55 [i_12] [i_11] [(short)11] [i_11] [i_11] [i_11] = ((/* implicit */int) var_16);
                            arr_56 [i_9] [i_11] [i_12] [i_15] = (i_12 % 2 == zero) ? (((((/* implicit */_Bool) arr_45 [i_14] [i_12] [i_11] [i_9])) ? (((((var_7) + (var_16))) >> (((arr_46 [i_12] [i_12] [i_14] [i_15]) + (584373086))))) : (min((var_18), (var_18))))) : (((((/* implicit */_Bool) arr_45 [i_14] [i_12] [i_11] [i_9])) ? (((((var_7) + (var_16))) >> (((((arr_46 [i_12] [i_12] [i_14] [i_15]) + (584373086))) - (76711748))))) : (min((var_18), (var_18)))));
                            var_27 |= max((min((((((/* implicit */_Bool) arr_35 [i_15])) ? (((/* implicit */unsigned int) var_3)) : (arr_32 [i_9]))), (((/* implicit */unsigned int) arr_52 [i_11] [i_11] [i_11] [i_11])))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_54 [(short)20] [i_15] [i_15] [i_12] [i_12] [i_11] [16])))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_32 [i_9]))));
                            var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_40 [9U] [i_9] [i_9])) ? (((((/* implicit */int) arr_39 [4U] [4U])) ^ (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) ((arr_32 [i_9]) << (((arr_50 [i_15] [i_12]) - (33962873U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((+(((/* implicit */int) var_17))))))));
                        }
                        arr_57 [i_9] [i_9] [i_11] [i_11] [i_14] [i_14] &= ((/* implicit */unsigned short) ((((max((3280998473U), (((/* implicit */unsigned int) var_0)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_32 [i_11]) != (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(arr_39 [i_9] [i_11]))))))) : ((~(((((/* implicit */_Bool) var_5)) ? (137436856320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14])))))))));
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned long long int) (!((((-(((/* implicit */int) var_12)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            {
                arr_64 [i_16] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_40 [i_16] [i_16] [i_16])))) ? ((+(arr_52 [i_17] [i_17] [i_17] [i_17]))) : (((/* implicit */int) arr_16 [i_17] [i_17]))));
                arr_65 [i_17] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((var_14) <= (((/* implicit */unsigned long long int) arr_14 [i_17] [i_16]))))) > (((/* implicit */int) arr_10 [8] [i_17] [i_17])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_50 [i_17] [18ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_17)) ? (arr_14 [i_16] [i_17]) : (((/* implicit */int) var_0)))) & ((~(((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_17);
}
