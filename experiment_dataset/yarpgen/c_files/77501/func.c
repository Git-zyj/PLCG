/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77501
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
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) max((var_1), (((/* implicit */unsigned short) var_4)))))) ? ((-(((/* implicit */int) var_9)))) : ((~(arr_1 [5] [i_0 + 1])))));
        var_12 |= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_0)))))))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_10)))))) ? ((-(((/* implicit */int) var_0)))) : ((~(((int) var_1)))))))));
    var_15 ^= ((/* implicit */short) (+((+(((((/* implicit */_Bool) 1065151889408LL)) ? (((/* implicit */long long int) -1310750059)) : (var_2)))))));
}
