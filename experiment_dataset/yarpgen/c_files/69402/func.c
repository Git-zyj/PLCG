/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69402
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
    var_20 ^= ((/* implicit */unsigned short) ((short) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (var_19))) : (var_11))));
    var_21 = ((/* implicit */short) (~((~(((/* implicit */int) var_14))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) var_15)), ((~(var_16)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = max(((-(((/* implicit */int) arr_1 [11LL] [11LL])))), (((/* implicit */int) ((unsigned char) (signed char)25))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_14))));
        var_24 = ((/* implicit */unsigned char) var_11);
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) var_0)))))));
    }
}
