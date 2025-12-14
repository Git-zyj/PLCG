/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72407
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((2113989550U), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) max((2113989541U), (((/* implicit */unsigned int) var_3))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
        arr_3 [i_0] = (-(2305843009213693951ULL));
        var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]));
    }
    var_21 = ((((/* implicit */_Bool) (unsigned short)21793)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16240930137243346636ULL));
}
