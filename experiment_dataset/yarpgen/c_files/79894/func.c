/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79894
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_2 [1])) : (((/* implicit */int) var_8))));
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 1]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0] [i_0 - 1] [i_0 - 1])))));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && (((/* implicit */_Bool) arr_8 [i_2] [i_2]))));
            }
            var_22 = arr_9 [i_0 - 1] [i_1];
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) - (arr_7 [i_0 - 1])));
        }
        for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    arr_18 [i_3 + 1] [i_3 + 1] [i_3 + 1] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(unsigned short)6] [i_3] [i_4])) ? (((/* implicit */int) arr_15 [i_3] [7ULL] [i_3])) : (((/* implicit */int) arr_15 [i_0] [i_3 - 1] [i_0]))));
                    var_24 = ((/* implicit */unsigned int) -2735154036218233320LL);
                }
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(arr_2 [i_3 - 1])));
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [i_4] [i_0 + 1] [i_0]))));
                arr_20 [i_4] [(unsigned short)0] [(short)14] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
            for (long long int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
            {
                arr_25 [i_0 - 1] [i_3 + 1] [i_6] = arr_12 [i_0] [i_3 + 1];
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3]))));
                var_27 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 + 1]))));
                arr_26 [i_6] [(unsigned char)12] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_0 - 1] [i_3 + 1] [i_0 - 1])) && (((/* implicit */_Bool) var_13))));
                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 2])) + (((/* implicit */int) arr_15 [i_3 - 2] [i_3] [i_3 - 2]))));
            }
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((arr_2 [i_3]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_3] [i_0])))))));
        }
        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(arr_7 [(unsigned char)12]))))));
            var_31 -= ((/* implicit */int) arr_0 [i_7] [i_0 - 1]);
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_7] [i_7 + 1]))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((arr_32 [i_0 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned short)8] [i_0 + 1] [i_0 - 1] [i_0]))))))));
                arr_36 [i_0] [i_8] [i_9] = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
                var_34 = ((/* implicit */_Bool) ((arr_9 [i_0 - 1] [i_9]) ^ (arr_9 [i_0 - 1] [0ULL])));
                arr_37 [i_0 - 1] [7] [i_0 - 1] [i_0 + 1] = ((((arr_17 [i_0]) + (((/* implicit */unsigned long long int) var_16)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                var_35 &= ((/* implicit */short) (unsigned char)23);
            }
            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((arr_33 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned long long int) var_16)) : (arr_14 [i_0 + 1] [i_0]))))));
        }
    }
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) || (var_11)));
}
