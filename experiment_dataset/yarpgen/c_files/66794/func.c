/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66794
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
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_0])), (var_0)))), (max((var_5), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))), (((/* implicit */unsigned long long int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))));
        var_14 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) 8449069203103307061LL);
                    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_6 [i_1] [16]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_8 [21ULL] [i_1 - 3] [i_0])) : (((/* implicit */int) (short)192))))))) | (min((((/* implicit */unsigned long long int) (_Bool)0)), (((var_2) >> (((var_13) - (2349377486U)))))))));
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9223372036854775805LL), (((/* implicit */long long int) (signed char)74))))) ? ((+(0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [1])))))), (((unsigned long long int) (short)-192))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [i_0]);
            arr_16 [i_0] [i_3] [i_3] |= ((/* implicit */long long int) ((unsigned char) arr_12 [(unsigned char)0] [i_3]));
        }
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_21 [4ULL] = ((/* implicit */long long int) var_2);
        arr_22 [i_4] [10ULL] = ((/* implicit */unsigned long long int) (short)-22336);
        var_16 |= ((/* implicit */long long int) ((arr_7 [i_4] [i_4] [i_4] [(short)22]) % (arr_7 [i_4] [i_4] [i_4] [(_Bool)1])));
    }
    var_17 = ((/* implicit */unsigned long long int) var_7);
}
