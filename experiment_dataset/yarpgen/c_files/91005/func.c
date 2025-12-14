/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91005
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
    var_14 ^= ((/* implicit */short) var_6);
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_2] [i_2])), (var_5))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 631156234)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)52074))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(short)3] [i_1] [i_2]))))) : (max((823830748149256362LL), (((/* implicit */long long int) var_2))))))));
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_1))));
                    var_18 = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [7U]))) : ((~(arr_4 [i_0 + 1] [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(8357164565041154884ULL)))) ? (((/* implicit */unsigned int) var_9)) : ((-(0U)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_6 [i_2] [i_1] [i_2]) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(signed char)7] [i_0])) == (((/* implicit */int) (unsigned short)13461))))) : (2147483647))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 + 1] [13])) > (((/* implicit */int) (signed char)96))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
                    }
                }
            } 
        } 
    } 
}
