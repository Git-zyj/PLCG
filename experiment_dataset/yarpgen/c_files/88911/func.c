/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88911
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
    var_11 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_5)) - (59024)))))), (min((var_1), (((/* implicit */unsigned int) var_2)))))));
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) (~(2147483136U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((+(var_8)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)32736)) / (((/* implicit */int) min(((short)-1), ((short)-32737))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) ((((arr_0 [i_0] [(short)1]) * (max((4294967295U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 1])))))) < (((arr_0 [i_0] [i_0 - 1]) / (arr_0 [i_0] [i_0 + 1])))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (var_6)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (short)32736)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (2147483121U))))));
        var_16 = (~(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_5 [i_1]))));
        var_17 = 91021433U;
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [21U] = ((/* implicit */unsigned int) arr_3 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_18 ^= ((/* implicit */short) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-2176)))));
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) var_5);
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32736))));
                        }
                        arr_18 [i_1] [0U] [i_2] [13ULL] [0U] [2U] = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_1 - 2] [i_1]);
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_20 [i_2] [(short)6] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            var_22 = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_1] [i_3] [i_1 - 2] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_1] [i_6] [i_1 + 2] [i_1])) + (24069))) - (9)))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_1] [i_3] [i_1 - 2] [i_1])) + (2147483647))) << (((((((((/* implicit */int) arr_13 [i_1] [i_6] [i_1 + 2] [i_1])) + (24069))) - (9))) - (9677))))));
                        }
                        arr_22 [i_1] [i_1] [4U] [i_3] = ((/* implicit */unsigned int) (((~(arr_9 [i_4] [(unsigned short)6] [i_1]))) < (arr_17 [i_1] [i_3] [i_2] [i_1])));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5559586709855003348ULL)) || (((/* implicit */_Bool) (short)2152))));
                        var_24 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_9 [i_8 - 1] [i_8 + 1] [i_8 + 2]), (arr_9 [i_8 - 1] [i_8] [i_8 + 2])))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10] [i_7]))) + (arr_20 [i_7] [i_8] [i_8] [i_8] [i_9] [i_10] [i_10]))) - (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_1))))))));
                        arr_31 [i_9] [i_8] [i_9] [i_7] [i_9] = ((((((/* implicit */_Bool) (~(var_1)))) ? ((-(arr_11 [i_9]))) : ((-(arr_19 [i_9] [i_10] [i_8]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8 + 1] [i_10])))))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), ((unsigned short)20935)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_12] [i_11] [i_11] [i_12] [i_12])) + (2147483647))) >> (((arr_33 [i_12] [i_12]) - (3301905999U)))));
                    var_27 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)11491)))) != (((/* implicit */int) (!((!(((/* implicit */_Bool) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_28 -= (~(((((/* implicit */_Bool) arr_3 [i_14])) ? (((unsigned int) arr_23 [i_12] [i_12])) : (var_1))));
                                var_29 += ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) (short)-18745)) ? (((/* implicit */int) (unsigned short)1731)) : (((/* implicit */int) arr_1 [i_12] [i_12]))))) != ((~((+(arr_29 [i_7] [i_12] [i_13] [i_14])))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((arr_26 [i_12]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) * (3819091170579912459ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_11])) ? (var_10) : (arr_16 [i_11]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_45 [(short)5] [i_12] [i_7] [i_16])) ? (arr_41 [i_11 - 1] [i_7] [i_11 + 1] [i_7] [i_11]) : (4294967285U)))))), (min((((/* implicit */unsigned long long int) arr_38 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_11] [i_11 - 1])), (arr_39 [i_11] [i_11] [i_11] [i_11])))));
                                var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_12]))));
                                var_33 = ((/* implicit */unsigned int) 18446744073709551605ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (-((-(var_10))))))));
        arr_48 [i_7] = ((/* implicit */unsigned int) 5056765491614268436ULL);
    }
}
