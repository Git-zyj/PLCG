/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64422
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((short) var_0))), (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1460158305U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 1460158305U);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((signed char) (!(var_4))))), ((~(((/* implicit */int) var_2))))));
        var_14 = ((/* implicit */unsigned int) ((signed char) (~((-(((/* implicit */int) var_0)))))));
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))) ? (max((((/* implicit */unsigned int) var_2)), (2834808991U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (min((var_9), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48229))) : (1460158305U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_5))))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) (unsigned short)8121)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (5601708994812872477LL)))))) ? ((-((-(var_5))))) : (((/* implicit */long long int) var_7))));
}
