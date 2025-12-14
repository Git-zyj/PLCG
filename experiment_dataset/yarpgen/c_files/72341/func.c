/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72341
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((signed char) (-(arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_13))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))))));
        var_18 *= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */int) min((3590011781850451738ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    var_20 = ((/* implicit */short) var_9);
    var_21 = ((/* implicit */_Bool) (+(3590011781850451738ULL)));
    var_22 = ((/* implicit */int) var_7);
}
