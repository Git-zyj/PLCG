/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55133
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [5U])), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (max((((/* implicit */long long int) var_2)), (arr_1 [i_0]))))))));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(max((((/* implicit */int) (short)28538)), (0)))));
    }
    var_14 = (~((~(((/* implicit */int) (!(var_10)))))));
    var_15 = var_6;
}
