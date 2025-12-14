/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73106
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) max(((-(max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [3]))))), (((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (signed char)-126))))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((min((11265646940850149132ULL), (((/* implicit */unsigned long long int) (unsigned short)6504)))) | (((/* implicit */unsigned long long int) ((((arr_0 [i_0] [(short)16]) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [16U] = ((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_1]);
                    var_19 = arr_5 [i_0] [9] [i_0] [i_0];
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) arr_3 [i_2] [i_1]);
                        arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = (+(((/* implicit */int) arr_3 [i_1] [i_1])));
                        arr_13 [i_0] [(unsigned short)15] [(short)15] [(signed char)6] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_6 [(unsigned short)3] [i_0] [i_2] [i_3]) : (arr_6 [i_0] [i_0] [i_2] [i_3])))))) | (((((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_3] [i_3] [i_2] [i_0] [16U] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))) | (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) arr_14 [i_4] [i_4]);
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) (short)-15951)))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((arr_17 [i_4 + 1] [i_4]), (((/* implicit */unsigned int) arr_4 [i_4]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_4]))) : (min((arr_5 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4] [i_4 - 3] [6ULL])) | (arr_6 [i_4] [(short)2] [i_4] [6ULL]))))))));
        var_24 = ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4])) | (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])));
    }
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((max((((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_14))), (((/* implicit */long long int) var_4)))) | (((/* implicit */long long int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) var_16)))) | (var_7)))))))));
    var_26 = ((/* implicit */unsigned long long int) var_14);
}
