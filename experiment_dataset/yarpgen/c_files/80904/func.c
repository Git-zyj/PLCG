/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80904
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) (!(arr_0 [i_0 - 1] [i_0 - 1])));
        arr_2 [(unsigned short)21] = ((/* implicit */int) (((!(arr_0 [i_0 + 1] [3]))) ? (max((((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 - 1])), (min((4294967278U), (((/* implicit */unsigned int) (unsigned short)4496)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4496)))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (signed char)68))));
    }
    var_16 = ((/* implicit */unsigned char) (unsigned short)30558);
}
