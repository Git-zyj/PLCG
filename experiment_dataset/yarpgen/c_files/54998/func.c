/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54998
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52623)) && (((/* implicit */_Bool) (short)-1036))))), (var_10)));
        var_14 = ((/* implicit */short) min(((unsigned short)347), (((/* implicit */unsigned short) (short)18953))));
    }
    var_15 = ((/* implicit */short) ((var_4) + (var_0)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18946)) ? (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) (short)18935))))) : (var_4)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-13129))))));
}
