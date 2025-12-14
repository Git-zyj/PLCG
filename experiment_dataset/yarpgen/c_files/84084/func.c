/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84084
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
    var_17 = ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) > (-1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) + (21ULL)))));
        var_18 = ((/* implicit */long long int) var_5);
        var_19 = ((/* implicit */int) var_13);
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */int) ((signed char) 1023))), (((-1041) % (((/* implicit */int) (short)-1)))))))));
}
