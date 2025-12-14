/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95033
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) arr_1 [i_0]))))) + (((2999684207563523172ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (short)12937)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (15447059866146028445ULL))));
        arr_3 [i_0] = arr_0 [i_0] [3U];
    }
    var_17 = ((/* implicit */short) max((2694616906U), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1)))))))));
}
