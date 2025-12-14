/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8395
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-((~(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_11))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        var_13 = (~(((/* implicit */int) arr_2 [i_3 + 1] [i_2 + 2] [i_1 - 4])));
                        arr_10 [i_2] [i_3] [i_3 - 1] [i_3 + 2] = ((/* implicit */unsigned long long int) 0U);
                        var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)2146))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((8126464) % (((/* implicit */int) ((((/* implicit */_Bool) 8126464)) && (((/* implicit */_Bool) var_3)))))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) 12895410976064312784ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_4))));
                        arr_13 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_2] [i_0] [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [(short)9] [(short)9] [i_0])))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 2] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)247)))) : (((/* implicit */int) ((arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) < (((/* implicit */int) var_1))))));
                        var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_4 - 4])) < ((+(18446744073709551615ULL)))));
                    }
                    arr_14 [i_0] [i_0] [i_2] = max((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) arr_12 [3LL] [i_1 - 3] [3LL] [i_1 - 3])) : (1ULL))), (((/* implicit */unsigned long long int) min((arr_6 [i_2] [i_0] [i_0] [i_2]), (arr_6 [i_2] [i_1 - 4] [i_2 + 1] [i_2])))));
                }
            } 
        } 
    } 
}
