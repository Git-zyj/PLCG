/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82130
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) 1397349600U))), (((unsigned short) min((7583909966559255852LL), (((/* implicit */long long int) var_3)))))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 - 2] [i_0 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [(unsigned short)9] [i_0 + 1]))))))));
    }
    var_12 += ((/* implicit */unsigned int) var_9);
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)28)) ? (var_2) : (((/* implicit */int) var_4)))))))));
}
