/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6420
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((1013114851) > (((/* implicit */int) max(((unsigned short)3057), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) -4082407539838119240LL))))))))));
        arr_3 [i_0] [i_0] |= min((((((/* implicit */int) (unsigned short)62471)) >> (((((/* implicit */int) (short)-8102)) + (8128))))), (max((((/* implicit */int) (unsigned short)3057)), ((+(((/* implicit */int) (_Bool)1)))))));
    }
    var_18 = ((/* implicit */long long int) (+((-((+(((/* implicit */int) (_Bool)1))))))));
}
