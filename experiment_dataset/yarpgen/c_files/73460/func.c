/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73460
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((unsigned long long int) (~(((/* implicit */int) (short)32767)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_11 = (!(((/* implicit */_Bool) (short)32762)));
        arr_3 [i_0] = ((((/* implicit */_Bool) (+(4294967277U)))) ? (16U) : ((-(4294967273U))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))) > (15U)));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 22U)) && (((/* implicit */_Bool) (short)-32767))));
    }
}
