/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89126
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(var_11))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_13))))))))) ? (((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-128)) + (2147483647))) >> (((((/* implicit */int) (short)150)) - (136)))))) / (min((((/* implicit */unsigned int) var_1)), (3358118823U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)169)))));
    var_20 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) >= ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_11))))))));
    var_21 = ((/* implicit */unsigned char) var_7);
    var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_9)), (var_2))), (((/* implicit */unsigned long long int) var_1))))) ? ((~(((/* implicit */int) ((short) var_5))))) : (((/* implicit */int) ((signed char) (_Bool)0)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_2)));
        var_24 &= ((/* implicit */unsigned long long int) var_16);
    }
}
