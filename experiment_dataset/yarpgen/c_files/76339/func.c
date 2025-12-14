/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76339
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
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [(_Bool)1] [i_0 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((short) (unsigned short)1604)), (((/* implicit */short) ((unsigned char) var_5))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_1 [i_0 + 3]) - (arr_1 [i_0 + 2])))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2131587949)) ? (arr_1 [i_0 + 1]) : (var_5)))) ? (((/* implicit */long long int) 2002572465)) : ((-(-9223372036854775807LL)))))));
    }
    var_16 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) - (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))));
    var_17 = ((/* implicit */unsigned char) var_8);
}
