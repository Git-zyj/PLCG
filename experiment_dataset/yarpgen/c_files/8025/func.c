/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8025
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) ((signed char) var_11)))))) ? (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))) : (min((300199415), (((/* implicit */int) (short)8172))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) arr_1 [i_0 + 2] [i_0]);
        var_20 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) var_5)))) & (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)36)), ((short)-3962)))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) (unsigned short)41108))))));
    }
}
