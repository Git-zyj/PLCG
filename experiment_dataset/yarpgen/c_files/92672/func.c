/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92672
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
    var_18 = min((((long long int) 18446744073709551614ULL)), (var_10));
    var_19 = ((/* implicit */unsigned long long int) min((var_9), ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((+(18446744073709551603ULL))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_20 = (+(var_0));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) (((+((~(18446744073709551614ULL))))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (2ULL)))) ? ((+(18446744073709551613ULL))) : (((((/* implicit */_Bool) 5971613685471101644LL)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) var_4))))))));
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (max((4960835869982317769LL), (var_15)))))) & (arr_7 [i_1])));
        var_23 = (+((+(((/* implicit */int) arr_4 [i_1 + 1])))));
        var_24 = (-(max((min((var_16), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_10)))));
    }
}
