/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76417
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((7324249874070048771ULL), (((/* implicit */unsigned long long int) 524437527U))))) ? (((/* implicit */unsigned long long int) 7500154363528825582LL)) : (11122494199639502845ULL))) / (11122494199639502844ULL)));
    var_18 = ((/* implicit */_Bool) (~(((2536979410U) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (4095U))) - (4078U)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (11122494199639502859ULL))));
        var_19 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 11122494199639502859ULL)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((7324249874070048771ULL), (((/* implicit */unsigned long long int) 1757987885U))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))) % (4294963188U)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294963197U)) : (12813683336505168061ULL))))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) (!(arr_0 [i_0])));
    }
}
