/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8897
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(unsigned char)20] [i_0] [i_0] [i_3 + 1] [i_4])) ? (arr_14 [i_2] [i_2] [(short)18] [i_3 + 1] [i_4]) : (arr_14 [i_0] [i_1] [i_1] [i_3 - 1] [i_4])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [17U] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_4 + 1] [i_4])) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1])) ? (arr_12 [i_0] [i_1] [(unsigned short)7] [i_3 + 1] [i_4] [18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26120))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(short)22] [i_2] [i_3])))));
                            arr_16 [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3 + 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_0])) ? (arr_10 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [9U])))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 24; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_0] [11ULL] [i_0] [i_0] [i_0] = arr_3 [i_0];
                            var_15 = ((/* implicit */short) arr_18 [i_6 - 3] [i_6 + 1] [i_6 - 2]);
                            var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) ((arr_23 [9] [i_1] [i_5] [i_6 - 2] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [4U] [11U] [i_5]))) : (arr_14 [i_7] [i_1] [i_5] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [(signed char)19])) ? (5280828888425152665LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19339))))) : (arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [23])))));
                            arr_27 [i_0] [i_0] [i_5] [(unsigned short)12] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */int) arr_6 [i_6] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_21 [i_6] [(short)1] [i_6 - 3] [i_6 - 1] [i_5] [i_1]))));
                        }
                    } 
                } 
                arr_28 [(unsigned char)20] [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5])) ? (arr_17 [i_0] [i_0] [i_5]) : (((/* implicit */long long int) arr_10 [i_0]))));
            }
            var_17 = ((/* implicit */unsigned long long int) arr_18 [(unsigned char)12] [(short)15] [6U]);
        }
        for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [1] [(unsigned short)5] [i_0] [i_8] [i_0] [i_0])) ? (arr_10 [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_8])))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) arr_24 [i_0] [(signed char)23])) : (arr_2 [i_0] [i_8])))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [22]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_8] [(unsigned char)11])))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0])) ? (((/* implicit */unsigned int) arr_24 [i_0] [i_0])) : (arr_10 [i_0])));
        }
        for (int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [12] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9]))) : (arr_25 [i_0] [(signed char)13] [i_9] [i_0] [i_0] [i_0])));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_9]))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_40 [i_0] [i_0] [1U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0] [i_9] [(short)1])) ? (((/* implicit */int) arr_21 [i_0] [(short)11] [i_0] [(unsigned short)15] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (arr_20 [i_0] [(unsigned char)7] [i_0] [7U] [i_0]) : (((/* implicit */int) arr_5 [i_10] [i_11]))))));
                        arr_41 [(short)17] [(short)17] [i_10] [i_11] = ((((/* implicit */_Bool) arr_29 [i_10] [i_9])) ? (((/* implicit */int) arr_13 [i_10] [i_9])) : (((/* implicit */int) arr_13 [i_9] [i_10])));
                        arr_42 [i_0] [i_9] [i_10] [3U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)32745))) : (5280828888425152665LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0])) ? (arr_22 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [0LL] [24]))))))));
                    }
                } 
            } 
        }
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [(unsigned short)4] [(unsigned short)4] [i_0] [(unsigned short)10]))))) ? (arr_33 [i_0] [(short)6] [4]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_23 = ((/* implicit */short) var_3);
}
