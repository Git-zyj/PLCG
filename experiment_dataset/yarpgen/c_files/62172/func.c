/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62172
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (short)24929)) : (((/* implicit */int) var_1))));
    }
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)8566)), (max((((/* implicit */int) (short)24926)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-21644))))))));
    var_14 = ((/* implicit */_Bool) ((unsigned int) (-(var_8))));
    var_15 = ((/* implicit */unsigned int) (unsigned short)52553);
}
