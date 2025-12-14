/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85831
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        var_20 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32738))) > (var_16)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)32767))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) * (276643465U)))));
    }
    var_21 = ((/* implicit */unsigned char) var_17);
    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((signed char) var_8))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) var_1))))), ((~(((((/* implicit */_Bool) (short)32735)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))));
}
