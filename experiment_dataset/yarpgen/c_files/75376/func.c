/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75376
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        var_19 = ((/* implicit */unsigned int) ((signed char) var_9));
        var_20 = ((/* implicit */long long int) ((arr_1 [i_0 - 1]) % (((/* implicit */int) var_6))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) -289735625)) ? (((/* implicit */int) (short)27404)) : (-1696791327))))) % (((/* implicit */int) (unsigned short)58830)))))));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_12))))))))));
}
