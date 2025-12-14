/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66294
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)2048)), (min((((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)0])), (18446744073709551615ULL)))));
        arr_3 [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) min(((~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-19218)))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)764)))) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65024))) : (1156815531U)));
    }
    var_15 |= min((((((((/* implicit */long long int) 1953342482)) | (8426682302657505636LL))) & (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) (unsigned short)65010)));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            {
                var_16 = 18446744073709551615ULL;
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (short)24576))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0LL)) ? (1350549154) : (-1953342482))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))) ? (((131070U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)(-127 - 1))))) ^ (((((arr_11 [i_5] [i_4] [i_3]) + (2147483647))) >> (((((/* implicit */int) (short)24576)) - (24549)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_9 [i_5]))));
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((1ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37777)))))), ((unsigned short)37771)))), (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483647) < (2064384)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
