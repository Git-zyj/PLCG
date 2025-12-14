/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72205
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) < (min((((/* implicit */unsigned long long int) (+(-9223372036854775790LL)))), (max((13230090574435552816ULL), (((/* implicit */unsigned long long int) 3708823479U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) arr_0 [i_0 + 2] [i_0 + 3]));
        var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2]))) >= (arr_2 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            {
                arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_2) >= (((/* implicit */long long int) 4284720546U))))), ((-(((/* implicit */int) var_1))))))) ? (max((((/* implicit */unsigned long long int) ((long long int) 7337575539852699627LL))), (min((((/* implicit */unsigned long long int) var_15)), (arr_7 [i_1 - 1] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) var_1)), (-7337575539852699622LL))))))));
                arr_10 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) var_13);
                arr_11 [i_2] [i_2 - 1] [i_2] = (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 1])));
            }
        } 
    } 
}
