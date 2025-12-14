/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92890
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_3 [i_0]))), ((~(arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])))))) : (max((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (arr_3 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (arr_2 [i_0] [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [11U] [i_0] [(unsigned short)13] = ((/* implicit */unsigned char) var_8);
                                arr_13 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_4 - 1] [i_1 - 1]), (arr_6 [i_4 - 1] [i_1 + 1])))) ? (max((arr_4 [i_1 - 1]), (((/* implicit */long long int) arr_6 [i_4 - 1] [i_1 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_4 + 1] [i_1 - 2])))))));
                                arr_14 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_2] [i_3]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 + 1] [15LL] [i_1 + 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [11LL] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 - 2] [(unsigned short)2] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 1]))))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) (-((+(arr_4 [i_1 + 1])))));
                    var_16 = ((/* implicit */signed char) arr_4 [1LL]);
                    var_17 = ((/* implicit */unsigned short) (+((~(arr_2 [i_0] [i_1 - 2])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [8LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_19 [i_6] [i_5] [i_1] [i_0]));
                        arr_23 [i_0] [(short)5] [(unsigned short)9] [i_6] [i_6] = ((/* implicit */signed char) arr_10 [11] [i_1] [i_1 - 2] [(_Bool)1]);
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) arr_17 [2ULL] [3ULL] [i_0]);
                        arr_27 [i_0] [i_0] [i_1] [i_5] [i_7] = ((/* implicit */unsigned short) min((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_1 - 2])))), (((/* implicit */unsigned long long int) max((arr_19 [i_0] [i_1 + 1] [i_5] [i_7]), (arr_19 [i_0] [i_1] [i_0] [i_7]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_7] [i_7] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((max((var_5), (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 + 1] [i_1 + 1]))))), (min(((~(arr_0 [i_7] [i_1]))), (((/* implicit */unsigned long long int) arr_25 [i_5]))))));
                            arr_32 [i_0] [(unsigned char)15] [i_1 - 2] [(short)15] [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) max((max(((-(arr_18 [(unsigned char)11] [i_1]))), (arr_4 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5] [i_7] [i_8])) ? (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_1 + 1] [i_5] [i_5] [i_0])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_5] [i_5])))))));
                            var_19 &= ((/* implicit */signed char) max((((unsigned long long int) arr_25 [i_1 - 1])), (((unsigned long long int) arr_25 [i_1 + 1]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_26 [i_1] [i_5] [i_7] [i_9])) ? (((/* implicit */int) arr_10 [i_9] [i_7] [i_5] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_9] [(unsigned short)6] [i_0])))), (((/* implicit */int) arr_30 [i_1 + 1] [i_1] [i_1] [1U] [i_1 - 1] [i_1] [i_1]))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_19 [i_1] [i_1] [i_1] [i_0]))));
                            var_21 = ((/* implicit */short) min((arr_18 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) max((((/* implicit */int) arr_26 [i_0] [i_1 - 1] [i_7] [i_9])), ((+(((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [(short)6] [i_9])))))))));
                            var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))))), (arr_4 [i_1 - 2])));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        arr_39 [i_10] [i_1 - 1] [i_0] = arr_21 [i_1] [i_1] [i_1 - 1] [(_Bool)1] [i_1];
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_42 [i_0] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_11])) << (((var_0) + (5010640924174686055LL))))));
                            arr_43 [(unsigned char)4] [i_0] [i_1] [i_1] [i_10] [i_11] &= ((unsigned short) arr_20 [i_10] [i_1 + 1] [i_1 - 1]);
                        }
                        var_23 = ((unsigned char) arr_18 [i_5] [i_5]);
                        var_24 = ((/* implicit */unsigned short) (~(arr_36 [i_10])));
                    }
                    arr_44 [5LL] [i_1] &= ((/* implicit */short) (~(((/* implicit */int) arr_29 [i_0] [i_0]))));
                }
                arr_45 [i_0] [i_1 + 1] = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_29 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((arr_47 [i_12]), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12]))) : (max((min((arr_47 [i_12]), (arr_47 [i_12]))), ((~(arr_47 [i_12])))))));
        var_26 += ((/* implicit */unsigned char) min((((/* implicit */signed char) ((arr_47 [i_12]) < ((~(arr_47 [i_12])))))), (arr_46 [i_12])));
    }
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        arr_52 [i_13] [i_13] &= ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) max((arr_19 [i_13] [(short)6] [i_13] [i_13]), (arr_17 [i_13] [i_13] [i_13])))))));
        var_27 &= ((/* implicit */unsigned short) ((int) min(((-(((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [(unsigned char)15] [i_13] [13])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_51 [i_13] [i_13])), (arr_26 [i_13] [i_13] [i_13] [7LL])))))));
        var_28 = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) arr_16 [(unsigned char)7] [i_13] [i_13] [i_13])))), (((/* implicit */int) var_12))));
    }
}
