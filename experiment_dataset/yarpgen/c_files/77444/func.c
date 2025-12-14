/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77444
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
    var_14 = ((/* implicit */unsigned short) 2062859533554598186LL);
    var_15 = ((/* implicit */unsigned short) ((-2055593939011582029LL) / (-6197681288675408911LL)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) / (arr_2 [i_0 + 1] [i_0 + 1])))));
        var_16 = ((/* implicit */unsigned short) min((((991837242316237210LL) + (6197681288675408911LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (var_3)))) ? (((((/* implicit */int) arr_0 [i_0 + 1])) << (((2198889037824LL) - (2198889037813LL))))) : (((/* implicit */int) var_6)))))));
        var_17 ^= arr_0 [i_0 - 2];
        arr_4 [(unsigned short)9] = arr_1 [i_0];
    }
}
