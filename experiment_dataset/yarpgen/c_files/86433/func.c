/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86433
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) 2147483647))) * ((-(((/* implicit */int) (unsigned char)190)))))) < (var_1)));
        arr_4 [(unsigned char)8] [i_0] = (+(((/* implicit */int) var_7)));
        arr_5 [6] = (!(((/* implicit */_Bool) (unsigned char)108)));
    }
    var_18 = ((/* implicit */signed char) var_1);
}
