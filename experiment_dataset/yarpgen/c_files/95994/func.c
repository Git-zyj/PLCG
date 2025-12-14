/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95994
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))))), (((((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 3])) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1]))))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [i_0]))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0] [11ULL]);
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_2] [i_4] [i_4] = ((((/* implicit */int) arr_16 [7U] [i_0] [i_0] [i_0] [i_0])) >= (arr_7 [i_0] [i_2]));
                            var_14 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_5])) >> (((((/* implicit */int) arr_2 [i_2])) - (31)))));
                            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_0] [i_2] [i_3] [i_0] [i_0] [i_2]))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_0]))));
            }
            arr_20 [i_0] [i_0] = ((/* implicit */int) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [5ULL])) || ((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [6U] [(short)18]))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 += ((/* implicit */signed char) arr_24 [i_0] [i_6] [i_7]);
                    arr_26 [(_Bool)1] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) arr_2 [i_0]))))) ? (min((arr_24 [i_0] [i_0] [i_0]), (arr_1 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(signed char)2] [i_0] [i_0])))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((((/* implicit */int) min((arr_5 [i_6] [i_7]), (arr_5 [i_6] [i_0])))) - (97)))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_19 = ((/* implicit */long long int) arr_22 [i_8] [i_8 - 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 1) 
            {
                {
                    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8 - 1] [i_9] [i_8 - 1])) ? (((/* implicit */unsigned int) arr_12 [i_9] [i_9 - 2] [i_9])) : (arr_4 [i_9] [i_9])))) ? (((/* implicit */int) arr_28 [i_10 + 2])) : (max((((/* implicit */int) arr_11 [i_8] [(signed char)5] [i_8] [i_9])), (arr_7 [1U] [i_8 - 1])))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1])))) / (((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_10 + 2])) ? (arr_21 [i_8 - 1] [i_10 + 1]) : (arr_21 [i_8 - 1] [i_10 + 1]))))))));
                    arr_34 [i_8] [i_10 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8])) % (arr_0 [i_8 - 1])));
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_9 - 1] [i_10 + 1])) - (((/* implicit */int) arr_29 [i_9 - 1] [i_10 + 1])))) - (((((/* implicit */int) arr_29 [i_9 - 1] [i_10 + 1])) - (((/* implicit */int) arr_29 [i_9 - 1] [i_10 + 1]))))));
                }
            } 
        } 
        var_23 = ((((/* implicit */_Bool) ((max((arr_1 [i_8]), (arr_24 [8ULL] [i_8] [i_8]))) * (((arr_23 [i_8] [i_8 - 1] [i_8]) & (arr_24 [i_8] [i_8] [i_8])))))) ? (arr_15 [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_8 - 1])) / (arr_27 [i_8 - 1] [i_8 - 1])))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        var_24 += arr_25 [i_8 - 1] [i_11] [i_12];
                        var_25 -= ((((/* implicit */_Bool) (+(arr_23 [i_13] [i_8 - 1] [i_13 + 1])))) ? ((+(arr_10 [i_12] [i_8 - 1] [i_13 + 1]))) : (arr_10 [9U] [i_8 - 1] [i_13 + 1]));
                        arr_42 [i_13] [i_11] [i_11] = max((((/* implicit */unsigned int) arr_22 [i_12] [i_11])), (((((/* implicit */_Bool) arr_10 [i_8 - 1] [i_13 + 1] [i_8 - 1])) ? (arr_15 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_13 + 1] [(_Bool)1]) : (arr_10 [9U] [i_13 + 1] [i_8 - 1]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_8 - 1] [i_8]), (arr_22 [i_8 - 1] [6U])))) ? ((~(arr_22 [i_8 - 1] [i_8 - 1]))) : (arr_7 [i_8 - 1] [i_13])));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_11] [i_14])) ^ (((/* implicit */int) arr_3 [(_Bool)1] [5U] [(_Bool)1]))))))))));
                        var_28 = ((/* implicit */_Bool) (~((((~(arr_12 [i_8] [i_12] [i_14]))) % (((/* implicit */int) arr_5 [i_12] [i_8 - 1]))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_8 [i_8] [(short)16]))));
                }
            } 
        } 
        var_30 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_12 [i_8 - 1] [i_8 - 1] [i_8 - 1])))) ? (((((/* implicit */_Bool) arr_12 [5U] [i_8] [i_8 - 1])) ? (arr_12 [i_8] [i_8] [i_8 - 1]) : (arr_12 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (((((/* implicit */_Bool) arr_12 [i_8] [i_8 - 1] [i_8 - 1])) ? (arr_12 [(signed char)1] [i_8] [i_8 - 1]) : (arr_12 [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 18; i_15 += 2) 
    {
        arr_48 [i_15 - 1] = (!(((/* implicit */_Bool) arr_7 [i_15 + 1] [20])));
        arr_49 [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_15])) / (((/* implicit */int) arr_13 [i_15] [i_15] [i_15] [i_15]))))) & (arr_1 [i_15 - 2])));
        var_31 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_11 [i_15] [i_15] [i_15] [i_15]))))));
    }
    for (short i_16 = 4; i_16 < 11; i_16 += 4) 
    {
        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_16] [i_16 - 2] [i_16 - 2])) || (((/* implicit */_Bool) arr_12 [i_16] [i_16 - 4] [i_16 - 2])))) ? ((+(arr_45 [i_16 - 3] [i_16 - 1]))) : (max((arr_12 [i_16 - 2] [i_16 - 1] [i_16 - 2]), ((+(((/* implicit */int) arr_50 [i_16] [i_16]))))))));
        arr_53 [i_16] |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_16 - 4] [(signed char)16])))))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (short i_17 = 1; i_17 < 19; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            {
                var_34 = ((/* implicit */long long int) (((~(arr_1 [i_17 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_17] [i_17] [i_18])))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        for (unsigned int i_21 = 1; i_21 < 19; i_21 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_18])) ? (arr_60 [i_18] [i_17 - 1] [i_17 - 1] [i_17 - 1]) : (arr_60 [i_18] [i_17 + 2] [i_17 + 2] [i_17 + 1])))) ? (((/* implicit */unsigned long long int) arr_60 [i_18] [i_17 - 1] [i_17 - 1] [i_17 + 2])) : (((((/* implicit */_Bool) arr_12 [i_17 + 2] [i_19 + 1] [i_21 - 1])) ? (arr_64 [i_18]) : (((/* implicit */unsigned long long int) arr_12 [i_17 + 1] [i_19 + 3] [i_21 + 2]))))));
                                var_36 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_17 + 1] [11LL] [i_17 + 2] [i_17 - 1] [i_17 + 2])) ? (((/* implicit */int) arr_11 [i_19 - 1] [i_20] [i_19 - 1] [i_20])) : (((/* implicit */int) arr_11 [i_19 + 2] [9U] [i_19] [i_19]))))), (max((((/* implicit */unsigned int) arr_11 [i_19 + 3] [i_19 + 3] [i_19] [i_19 + 3])), (arr_15 [i_17 + 1] [i_17] [i_17 + 2] [i_17 + 2] [i_17 - 1])))));
                                var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_65 [i_17 + 2] [i_18] [i_18] [i_18])) | (((/* implicit */int) arr_65 [i_17 + 1] [i_18] [i_19 + 2] [i_18])))) <= (((/* implicit */int) min((arr_65 [i_17 - 1] [i_17 - 1] [i_17] [i_18]), (arr_65 [i_17 + 1] [i_18] [(signed char)2] [i_18]))))));
                            }
                        } 
                    } 
                } 
                arr_68 [i_18] [i_17] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_16 [i_17] [16ULL] [16ULL] [i_17 + 2] [i_17]), (arr_61 [i_18] [i_18] [16ULL])))), (min((arr_64 [i_18]), (((/* implicit */unsigned long long int) arr_21 [21U] [i_18])))))))));
            }
        } 
    } 
}
