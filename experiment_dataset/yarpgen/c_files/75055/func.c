/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75055
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
    var_18 = ((/* implicit */int) var_17);
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((min((((/* implicit */int) (short)-1)), (583120401))) < (((((((/* implicit */int) (signed char)-59)) + (2147483647))) >> (((((/* implicit */int) var_14)) - (51773)))))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (signed char)103)) * (((/* implicit */int) (_Bool)1))))))));
    var_20 = var_13;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_21 *= ((/* implicit */signed char) (short)-32640);
        var_22 = min((((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) var_13)));
    }
}
