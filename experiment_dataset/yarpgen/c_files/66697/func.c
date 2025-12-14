/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66697
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
    var_17 = ((/* implicit */signed char) 9221399517074083497LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-9221399517074083516LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24104)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 712052230)) ? (var_14) : (var_16))))));
    }
    var_20 = var_13;
}
