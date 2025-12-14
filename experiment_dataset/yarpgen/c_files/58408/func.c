/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58408
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) >> (((var_8) - (4071502587U)))));
    var_15 = ((/* implicit */short) var_11);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16945))) | (362391395U)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3932575917U)) ? ((+(14986017246582667315ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_7))))) ? (min((-390526520), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))) : (390526521)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_1)))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)81)), (arr_6 [i_0] [i_2])))));
                    var_18 ^= ((/* implicit */_Bool) (-(max(((-(arr_8 [i_0] [i_0] [i_1] [i_2]))), (((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0] [i_1])), (var_7))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_7)) : (3932575916U)));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)23346)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
                        var_21 ^= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1] [i_0])) ? (var_1) : (((/* implicit */unsigned int) arr_11 [i_0]))));
                        var_22 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) >> (((((((((/* implicit */_Bool) 3460726827126884302ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_6)))) - (-2147483633))) + (46)))));
                    }
                }
            } 
        } 
        var_23 -= arr_6 [i_0] [i_0];
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_4] [i_5] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_4] [i_5] [i_6]) <= (arr_8 [i_0] [i_0] [i_0] [i_0]))))) : (min((3460726827126884302ULL), (((/* implicit */unsigned long long int) (unsigned char)81))))));
                        var_25 = ((/* implicit */int) var_2);
                        arr_21 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) (-(3932575917U)));
                        arr_22 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */long long int) (-(var_1)))) - (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_5))))), (((/* implicit */long long int) var_9))));
                        arr_23 [i_0] [i_5] [i_4] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 3460726827126884317ULL)) ? (((/* implicit */int) min((var_12), (((/* implicit */short) (unsigned char)81))))) : (((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
    }
}
