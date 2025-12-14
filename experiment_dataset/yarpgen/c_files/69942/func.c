/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69942
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
    var_15 = ((/* implicit */signed char) var_5);
    var_16 = ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) (unsigned short)27798);
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (min((4520176937981495539ULL), (((/* implicit */unsigned long long int) (unsigned short)47002))))));
    }
}
