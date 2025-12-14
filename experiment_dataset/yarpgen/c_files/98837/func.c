/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98837
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
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */_Bool) (~(var_2)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (unsigned short)2664))));
                var_14 = max((min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (3151478696U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))) - (3699371263U))))), (((((/* implicit */_Bool) max((arr_7 [i_2] [i_1] [i_0 - 4]), (arr_7 [i_0] [i_1] [i_0])))) ? (min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1])), (var_1))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (0U) : (4294967295U))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((351160451U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110))))))));
                var_16 += ((/* implicit */unsigned short) (+((~(1501462763U)))));
                arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_1])) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_1]) : (arr_5 [i_0] [i_0 - 4] [i_1])));
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 - 3]))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
            {
                arr_16 [i_4] [i_1] [i_4] = ((/* implicit */signed char) 3699371263U);
                var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) -1754616301264738731LL)) ? (var_1) : (2793504533U)))));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0 - 3] [i_1]))));
            }
            arr_17 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3151478696U)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3])) + (((/* implicit */int) var_10)))))));
        }
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 + 1])) / (((/* implicit */int) arr_14 [i_0 - 1]))))) / (((((/* implicit */_Bool) 0U)) ? (arr_18 [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_0 - 1] [i_0 - 1])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */long long int) ((unsigned short) arr_21 [i_0 - 1] [i_0 + 2] [i_0 - 1]));
                var_22 = ((((/* implicit */_Bool) -1754616301264738731LL)) ? (arr_4 [i_6]) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])));
            }
            var_23 ^= ((/* implicit */_Bool) ((1501462763U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 2])))));
        }
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_24 -= arr_21 [i_7] [i_7] [i_7 - 1];
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62871)) ^ (((int) ((var_0) >> (((((/* implicit */int) (unsigned short)62872)) - (62861))))))));
        arr_26 [i_7 - 1] = ((/* implicit */unsigned short) var_8);
    }
}
