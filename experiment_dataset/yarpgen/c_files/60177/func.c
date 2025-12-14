/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60177
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) arr_0 [i_0])), ((-2147483647 - 1)))) : (((/* implicit */int) min(((short)-2247), (((/* implicit */short) arr_1 [i_0]))))))) ^ (((((/* implicit */_Bool) -2147483625)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_14)) : (var_10))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767)))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) (short)-4096)));
    }
}
