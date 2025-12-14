/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63707
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (short)-26434));
                var_10 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)16276)) ^ (((/* implicit */int) (short)-26433))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) 1116892707587883008ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (0ULL)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (short)26445)))));
}
