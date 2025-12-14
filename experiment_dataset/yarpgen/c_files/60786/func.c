/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60786
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
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((-220589074), (((/* implicit */int) (_Bool)0))))) ^ (var_6)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_16 -= ((/* implicit */signed char) 9222809086901354496LL);
        arr_2 [i_0] [i_0] = (~(((/* implicit */int) arr_0 [i_0])));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62368)) % (((/* implicit */int) (_Bool)1))));
}
