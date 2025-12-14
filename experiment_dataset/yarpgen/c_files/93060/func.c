/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93060
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
    var_14 |= ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7)));
        var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4190268094663032612LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) var_0))))) ? (var_8) : (var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3571099439170105744LL)) ? (-7237001165356977702LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10975)))))) ? (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_13))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-10976)) : (((/* implicit */int) (_Bool)0)))))))));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (var_12) : (((var_4) ? (((/* implicit */int) var_1)) : (var_12)))))));
        arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_1)))))));
        arr_5 [i_1] = ((/* implicit */int) var_8);
    }
}
