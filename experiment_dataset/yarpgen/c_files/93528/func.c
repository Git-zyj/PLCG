/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93528
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
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    arr_8 [i_0] [i_1 + 2] = ((/* implicit */unsigned char) (-(arr_2 [i_1 + 2] [i_1 - 1])));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (-(arr_5 [i_0] [i_1 - 1]));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_4] &= ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [i_3 + 1] [i_2]) & (((/* implicit */int) var_2))));
                                var_13 = ((arr_3 [i_0]) % (arr_3 [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */long long int) arr_13 [17ULL] [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_19 [i_0] [(signed char)12] [i_0] = (~(arr_12 [i_0] [i_0] [i_5] [i_5] [i_5]));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                var_14 *= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_6 [i_0] [(signed char)16])) || (((/* implicit */_Bool) var_6))))));
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_15 = ((/* implicit */int) arr_21 [i_0] [i_0]);
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_21 [i_0] [i_5]))));
                    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_6] [i_7 + 1] [i_7] [i_7 + 3] [i_7])) : (((/* implicit */int) arr_13 [i_5] [i_7 + 1] [i_7 - 1] [i_7 + 3] [i_7]))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) arr_12 [i_9 + 1] [i_0] [i_9] [i_9 - 2] [i_9 + 1]);
                        var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_9 + 1] [(unsigned char)14] [i_9 + 1] [i_9] [i_9]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_10])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_8])) || (((/* implicit */_Bool) arr_33 [i_10] [(unsigned char)18] [i_6] [i_8] [i_0]))))) : (((/* implicit */int) arr_11 [i_0]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_5] [4ULL])) ? (arr_5 [i_0] [i_10]) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (arr_12 [i_0] [i_0] [i_0] [i_8] [i_10]))))));
                    }
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        arr_37 [i_0] [i_0] [(unsigned short)14] [i_6] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11] [10U])) >> (((((/* implicit */int) arr_27 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1])) - (66)))));
                        var_22 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                        arr_38 [i_0] [i_5] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_11 + 1] [i_11] [i_0]);
                    }
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_5] [i_6] [i_6] [i_8] [i_0] = ((unsigned char) arr_10 [i_5] [i_6] [i_8] [i_0]);
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */long long int) arr_27 [(signed char)4] [i_0] [i_6] [i_8] [i_12]);
                        var_23 = ((/* implicit */unsigned char) arr_24 [i_0] [i_6] [i_8] [i_6]);
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_0] [i_8] [i_6] [i_5] [i_0])) + (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6]))) : (arr_28 [i_0] [i_0] [i_6] [i_8])));
                    arr_43 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) arr_13 [i_6] [i_8] [i_0] [i_8] [i_0])))));
                }
                var_26 = ((/* implicit */unsigned int) ((unsigned char) arr_18 [i_6] [i_6] [i_6]));
            }
        }
        var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_0])) <= (((/* implicit */int) arr_29 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 4) 
    {
        arr_47 [i_13 + 1] [i_13] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_25 [i_13 + 3])) - (((/* implicit */int) arr_25 [i_13 + 2])))), (((/* implicit */int) max((arr_25 [i_13 - 1]), (arr_25 [i_13 + 2]))))));
        var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) ((arr_4 [(unsigned char)14]) % (arr_4 [12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [18LL] [(unsigned char)12] [8ULL] [i_13 + 3] [(signed char)8])) ? (var_0) : (arr_34 [i_13] [8ULL] [i_13] [i_13 + 2] [i_13 - 1])))) : (arr_28 [i_13] [6ULL] [i_13] [i_13]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_31 [i_13] [i_13] [i_13] [i_13] [i_13])))))))));
    }
    var_29 = ((/* implicit */signed char) var_2);
}
