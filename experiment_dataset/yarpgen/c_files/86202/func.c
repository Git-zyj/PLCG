/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86202
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
    var_15 |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15045))));
    var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50491)) ? (((/* implicit */int) (unsigned short)50483)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max(((unsigned short)51034), (var_11)))) : (((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15044)) && (((/* implicit */_Bool) arr_0 [i_0]))));
        var_17 = ((/* implicit */_Bool) var_3);
    }
    var_18 &= ((/* implicit */unsigned char) (unsigned short)15055);
}
