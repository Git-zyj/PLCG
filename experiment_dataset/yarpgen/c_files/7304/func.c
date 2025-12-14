/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7304
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((var_14) * (min((max((var_2), (var_16))), (max((var_2), (var_19))))));
        arr_2 [i_0] = (+(max((5697311224446122291ULL), (11286694193022059030ULL))));
        var_21 += (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
    }
    var_22 = max((var_6), (max(((~(4611686018427387904ULL))), (var_16))));
    var_23 = ((((/* implicit */_Bool) var_9)) ? ((-(var_0))) : (((unsigned long long int) max((14716532783796343610ULL), (2532238592276002704ULL)))));
}
