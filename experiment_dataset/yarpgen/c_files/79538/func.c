/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79538
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_2) : (2378256170U))) + (((unsigned int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21057)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3906626718U)))) : (((((/* implicit */_Bool) (unsigned short)43110)) ? (((/* implicit */unsigned long long int) 4294967283U)) : (arr_2 [i_0])))));
            var_12 = ((/* implicit */long long int) arr_5 [i_1] [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_13 *= ((/* implicit */short) ((arr_0 [i_0 - 2]) ^ (((/* implicit */unsigned long long int) 4LL))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_3] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)3] [i_3]))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 2])) < (((/* implicit */int) var_5))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [7U]);
                var_16 = ((/* implicit */long long int) min((var_16), (((long long int) arr_9 [i_0 + 1] [i_0 + 1] [i_0]))));
            }
        }
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)22426)) ? (((/* implicit */int) ((unsigned char) (short)-6450))) : ((-(((/* implicit */int) (_Bool)1))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) | ((~(arr_2 [i_0])))));
        }
        var_18 = ((/* implicit */short) ((8027002208393798759LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24117)))));
        arr_18 [19] = ((/* implicit */unsigned char) (+(arr_4 [i_0] [i_0 - 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 21; i_6 += 4) 
    {
        arr_22 [i_6] &= (~(arr_3 [i_6 + 1]));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_6 - 2] [i_6 - 2]))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_6 - 2] [i_6 + 1] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_6 - 2]))) : (arr_3 [2ULL])));
            arr_26 [2U] [i_7] [i_7] |= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43115)))));
            var_20 = ((/* implicit */long long int) ((unsigned short) var_7));
            arr_27 [i_6 - 1] [i_6 - 1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6 - 2] [i_6 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_6 - 1] [i_6 + 1]))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
        {
            var_21 = (+(var_7));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_6))));
            var_23 ^= ((/* implicit */_Bool) arr_28 [i_6] [i_8]);
            arr_31 [i_8] [(unsigned char)3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_5 [i_8] [i_6])))) || ((!(((/* implicit */_Bool) var_0))))));
            var_24 = arr_4 [i_8] [i_8] [i_8 + 1];
        }
        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((arr_12 [i_6 - 1] [i_6] [i_6 - 1]) / (((/* implicit */int) arr_28 [i_6] [i_9]))))) : (((arr_4 [i_9] [i_9] [i_6]) / (((/* implicit */unsigned int) arr_5 [i_9] [(unsigned short)17]))))));
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 21; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_10] [i_9]))) ? ((+(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) (unsigned short)43109))))));
                        var_27 &= ((long long int) var_2);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((int) (unsigned short)38306)))));
                    }
                } 
            } 
        }
    }
    for (long long int i_12 = 1; i_12 < 6; i_12 += 4) 
    {
        var_29 += ((/* implicit */short) arr_1 [i_12 + 3] [i_12]);
        arr_43 [6U] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_16 [i_12 + 1] [3ULL] [i_12 + 2]) : (arr_16 [i_12 + 4] [i_12] [i_12 + 2]))) + (((long long int) var_3))));
    }
    var_30 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
    var_31 = ((/* implicit */unsigned short) var_1);
}
