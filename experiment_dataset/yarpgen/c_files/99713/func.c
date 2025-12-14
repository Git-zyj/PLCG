/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99713
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
    var_19 = ((/* implicit */long long int) var_3);
    var_20 ^= ((/* implicit */signed char) 13531096415178692731ULL);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            var_21 = ((((/* implicit */int) ((((/* implicit */_Bool) -509010530705022667LL)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) != (((/* implicit */int) (unsigned char)251)));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)249)) - (((/* implicit */int) (unsigned char)225)))))));
        }
        var_23 = ((/* implicit */unsigned int) min((var_23), ((~(min((((/* implicit */unsigned int) min(((unsigned char)255), (((/* implicit */unsigned char) var_15))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) & (var_17)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((max((var_7), (var_13))) + (((unsigned int) var_14))));
    }
}
