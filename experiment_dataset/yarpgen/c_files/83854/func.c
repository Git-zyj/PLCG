/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83854
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (3661918048U) : (633049247U))), (((/* implicit */unsigned int) var_3))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (633049248U))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_13))))) | (((((/* implicit */_Bool) 3661918064U)) ? (633049247U) : (3661918048U)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17950)) ? (-6726974364340518765LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28821)))));
                var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [(short)8])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_0)) + (18544)))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_4 [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 14155888809071426478ULL))));
    var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) / (((/* implicit */int) (short)-15)))), (((/* implicit */int) (((!(((/* implicit */_Bool) (short)-1)))) && (((/* implicit */_Bool) var_16)))))));
}
