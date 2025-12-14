/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55999
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
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_3 [6U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (~((-(-228782647))))))));
    }
}
