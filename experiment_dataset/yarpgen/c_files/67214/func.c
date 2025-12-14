/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67214
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (signed char)-26);
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) (+(1145967335)));
    }
    var_17 = ((/* implicit */unsigned long long int) var_10);
}
