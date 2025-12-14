/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72744
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                    var_11 = ((/* implicit */short) arr_3 [i_0] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        arr_8 [i_3] = ((/* implicit */unsigned char) arr_6 [i_3] [i_3 - 2]);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_15 [i_3]) : (arr_12 [i_3 - 2] [i_4] [i_5] [i_5])));
                        arr_16 [i_3] [i_5] = ((((/* implicit */_Bool) ((short) arr_12 [i_3 + 2] [i_4] [i_5] [i_4]))) ? (arr_12 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))));
                        var_13 &= ((/* implicit */long long int) (~(arr_6 [i_5] [i_6 - 1])));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_19 [i_3 + 2] [i_3] [i_3 - 2] [i_3 + 2] [i_8 - 2] [i_8 + 1]);
                            arr_24 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                            var_15 = ((/* implicit */long long int) ((arr_12 [i_3 + 2] [i_8 - 1] [i_7] [i_3 + 2]) < (arr_12 [i_3] [i_8 - 2] [(unsigned short)7] [(signed char)11])));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_15 [i_3 + 2]) : (arr_15 [i_3 + 1])));
                            arr_25 [i_3] [i_4] [i_7] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((short) arr_6 [i_3] [i_4]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_29 [i_3] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3 + 2] [i_3 + 1] [i_3] [(unsigned char)10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    {
                        arr_35 [i_3] [i_3] = var_0;
                        /* LoopSeq 2 */
                        for (long long int i_13 = 2; i_13 < 11; i_13 += 1) 
                        {
                            arr_39 [i_13] [i_3] [i_11] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) 3169964822U)) && (((/* implicit */_Bool) arr_38 [i_3] [9LL] [i_13 - 1] [i_12] [2ULL] [i_11]))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_22 [(short)6] [i_13] [10] [i_13] [(short)6] [i_13] [i_13]))));
                            arr_40 [i_3] [i_10] [i_11] [i_10] [i_13 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3]))));
                            var_18 |= ((/* implicit */int) (((~(arr_36 [i_13] [i_12] [2U] [i_10] [i_3]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [0LL])))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_3] [i_3]))) >= (arr_6 [i_3] [i_13 - 2])));
                        }
                        for (short i_14 = 2; i_14 < 10; i_14 += 2) 
                        {
                            arr_43 [i_3] [4] [i_14] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_12] [i_3 + 1] [i_3 + 1] [i_3] [i_14 - 2] [(short)10]))));
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_12])) ? (arr_11 [i_14]) : (((/* implicit */unsigned long long int) ((long long int) var_8))))))));
                            var_21 *= ((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */long long int) arr_38 [(unsigned char)4] [i_14] [2ULL] [i_12 + 1] [2ULL] [i_3]))));
                            arr_44 [i_3] [i_3] [i_11] [i_12] [i_14 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_42 [i_14 - 1] [i_14 + 2] [i_14 + 2] [i_14 + 2] [10LL]))));
                        }
                        var_22 = (+(((/* implicit */int) arr_27 [i_3])));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_3] [i_3 - 2] [i_12 + 1] [(short)11] [i_3] [(unsigned char)7])) ? (((/* implicit */int) arr_37 [i_3] [i_3 + 1] [i_12 + 1] [(short)5] [3ULL] [1ULL])) : (((/* implicit */int) var_6))));
                        arr_45 [i_3] [i_10] [i_3] [i_3] [i_12 + 1] [(short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(signed char)3] [i_10] [(signed char)3] [5ULL] [i_10] [i_10])) ? ((-(arr_12 [i_12 - 1] [i_11] [i_3] [i_3]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_26 [(unsigned short)6] [i_3] [i_11])) : (arr_42 [(short)2] [8] [i_3] [8] [i_3])))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_15 = 2; i_15 < 8; i_15 += 4) 
    {
        arr_48 [i_15] = ((/* implicit */long long int) ((3169964814U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31895)))));
        arr_49 [i_15] [i_15 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_15] [i_15] [i_15] [i_15] [9ULL] [2LL])) ? (((/* implicit */int) arr_27 [i_15])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) arr_32 [4] [i_15 - 2] [i_15] [i_15 + 1])) : (arr_2 [i_15 - 2] [i_15 - 1])));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_15] [i_15 - 2])) ? (arr_22 [i_15] [i_15 + 2] [i_15] [i_15 + 1] [i_15 + 2] [i_15 + 3] [(unsigned short)6]) : (arr_6 [i_15] [i_15 - 1])));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((int) var_3)))));
        arr_50 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_26 [8ULL] [i_15] [i_15 + 2]) : (arr_26 [i_15 + 2] [i_15] [i_15])));
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) arr_54 [i_16] [i_16]);
                        var_27 = ((/* implicit */unsigned long long int) (+(arr_54 [i_16] [i_16])));
                        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_16] [(unsigned short)2] [i_18])))))) - (arr_61 [i_16] [i_17] [i_18] [i_19]));
                    }
                } 
            } 
        } 
        arr_64 [i_16] = ((signed char) arr_57 [i_16] [i_16]);
    }
}
