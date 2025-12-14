/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84737
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
    var_12 = (~(var_5));
    var_13 = max((1045359692777719375ULL), (0ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (var_4))), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1907658588503194514ULL)) ? (5876224798097980365ULL) : (16539085485206357097ULL))) == (0ULL))))));
        arr_2 [i_0] [i_0] = ((unsigned long long int) (((+(5ULL))) - (18446744073709551602ULL)));
        var_15 = ((/* implicit */unsigned long long int) ((max((max((var_2), (arr_0 [i_0] [i_0]))), (9ULL))) != (min(((~(arr_1 [i_0]))), (arr_0 [i_0] [i_0])))));
    }
}
