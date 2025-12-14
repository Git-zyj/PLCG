/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84271
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [4ULL] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [i_4] [i_1] [i_2 + 2] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_2 - 1] [i_3] [i_4] [i_0])) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_4] [i_2 + 2] [i_3] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_0 - 2] [5ULL] [i_2 + 1] [i_2] [i_2] [5ULL]))));
                            var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4] [i_4])) || (((/* implicit */_Bool) var_2))));
                            arr_16 [i_4] [i_1] [i_2] [i_1] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 - 2] [i_0 - 1] [i_1 + 1])) & (((/* implicit */int) arr_4 [i_2 - 2] [i_0 + 1] [i_1 + 1]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [(unsigned char)7] [i_1 - 1] [i_2 + 2] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_2]);
                            arr_20 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3])) ? (arr_7 [(unsigned char)3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [5LL] [i_2 - 1] [i_1] [i_1 + 1] [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                            var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2] [(short)6] [i_2 + 1] [(unsigned char)1] [i_2 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_6 [i_5] [i_3] [i_2 + 2])))))));
                            var_13 = ((/* implicit */short) arr_5 [i_1] [i_1] [i_1 + 1]);
                        }
                        arr_21 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_1] [i_0]))));
                    }
                    arr_22 [i_1] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(unsigned char)0] [i_0] [i_0] [i_1] [i_2 + 2] [i_2] [i_1])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_1])))))) ? (arr_13 [i_1 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_0] [i_0])) : (((/* implicit */int) arr_6 [1U] [i_1] [i_0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_2]))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((6689001378075123528LL), (((/* implicit */long long int) (short)(-32767 - 1)))));
}
