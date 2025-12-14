/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99844
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
    var_20 |= (signed char)7;
    var_21 |= ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (max(((~(((/* implicit */int) (signed char)-12)))), ((~(((/* implicit */int) var_5))))))));
    var_22 = ((/* implicit */short) ((var_16) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))) == (((/* implicit */int) min(((short)-21079), ((short)14129))))))))));
    var_23 *= max((((/* implicit */unsigned int) var_8)), (max((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15))), (((/* implicit */unsigned int) var_19)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_24 *= ((/* implicit */unsigned char) (short)0);
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_13))));
    }
}
