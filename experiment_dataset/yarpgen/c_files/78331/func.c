/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78331
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
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_4 [1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0 - 1] [(signed char)8]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0 - 2] [i_0 - 2])))))));
        var_16 = (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)60452)))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_9 [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 2]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3]))) : (arr_5 [i_0 - 1] [i_0 + 3])))))) ? (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) : (arr_3 [i_1] [i_0]))), (max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 - 1] [4ULL])), (arr_5 [i_1] [i_0]))))) : ((~((-(arr_6 [i_0])))))));
            arr_10 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [(unsigned short)3] [(unsigned short)3])) ? (arr_3 [i_0] [(_Bool)1]) : (arr_3 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_7 [i_0 + 3]))))) : (arr_3 [i_0 - 2] [i_0 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_0 + 3]), (arr_7 [i_0 - 2])))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_0])) ? (arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 2]) : (arr_8 [i_0 - 2] [i_0 - 2] [i_2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)21987)))) ? (((/* implicit */unsigned long long int) (~(arr_12 [i_2])))) : (arr_13 [i_0 + 1] [i_3 - 3])));
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_3 - 2] [i_0 - 1]))));
                arr_15 [i_0] [i_2] [i_3 + 2] = ((/* implicit */int) (~(arr_8 [i_0] [i_3 - 3] [i_3])));
                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_2] [i_3])) ? (arr_12 [i_0]) : (((/* implicit */int) arr_7 [i_3]))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_3 - 2])) ? ((~(arr_2 [i_0] [i_2]))) : (arr_5 [i_0 - 1] [1U])));
            }
            var_22 = (+(((((/* implicit */_Bool) max((arr_11 [i_0 - 1] [i_2]), (((/* implicit */unsigned short) arr_7 [i_0]))))) ? (arr_3 [i_0 + 3] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_0 [10ULL]))))))));
        }
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_0 + 2])), (arr_11 [i_0 + 3] [i_0]))))))) ? (((((/* implicit */_Bool) (-(arr_8 [i_0 + 3] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_12 [2]), (((/* implicit */int) arr_7 [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0 + 3]) : (arr_6 [i_0 + 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 3] [i_0 - 3]))))))));
    }
    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_4] [5])) ? (arr_16 [i_4 - 1]) : (((/* implicit */unsigned int) min((arr_17 [i_4]), (arr_17 [i_4 - 1]))))))) ? (((/* implicit */unsigned int) arr_17 [i_4 + 1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_18 [i_4 + 1] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_18 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_18 [i_4] [i_4 - 1])) ? (((/* implicit */unsigned int) arr_17 [i_4])) : (arr_16 [i_4])))))));
        var_24 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (arr_17 [i_4 + 2]) : (arr_17 [i_4 - 1]))), (((((/* implicit */_Bool) arr_17 [i_4 + 1])) ? (arr_17 [i_4 + 1]) : (arr_17 [i_4 + 2])))));
    }
    for (int i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        var_25 &= ((/* implicit */unsigned char) arr_12 [i_5]);
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            arr_33 [i_9] [i_8] [i_5] [i_6] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_20 [i_6] [i_5 - 1])) : (arr_17 [i_5 - 1])));
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) (~(arr_16 [i_9])));
                        }
                        arr_35 [i_5] [i_5] [2LL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_6])) ? (arr_16 [i_5 + 3]) : (arr_21 [i_5])))) ? ((+(arr_32 [i_6] [i_6]))) : (((/* implicit */int) arr_0 [i_7]))))) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */unsigned long long int) arr_22 [i_5 + 3])) : (((((/* implicit */_Bool) arr_5 [i_6] [3ULL])) ? (arr_3 [i_5] [i_7]) : (arr_6 [3U]))))) : (((((/* implicit */_Bool) min((arr_5 [i_8] [8]), (((/* implicit */unsigned long long int) arr_7 [i_6]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_7])), (arr_12 [i_6])))) : (min((((/* implicit */unsigned long long int) (unsigned char)13)), (6712720343996481619ULL)))))));
                    }
                } 
            } 
        } 
    }
}
