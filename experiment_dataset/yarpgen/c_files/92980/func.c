/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92980
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
    var_12 = ((/* implicit */unsigned int) min((-8755450345299497149LL), (var_8)));
    var_13 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) -7880995862249260549LL);
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) 4286578688U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1857135634004439096LL)) ? (((/* implicit */long long int) 3224592659U)) : (3139273260231132404LL)));
    }
}
