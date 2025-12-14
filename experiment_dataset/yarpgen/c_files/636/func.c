/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/636
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [6U] = ((((/* implicit */int) ((unsigned char) var_9))) << ((((-(var_0))) + (1616236637))));
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (var_17)))) : (((unsigned long long int) var_5))))));
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((263014596U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_12)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))))) ? (((int) var_3)) : (((/* implicit */int) var_16))));
        var_24 = ((/* implicit */short) (((((-(((/* implicit */int) var_1)))) < (((/* implicit */int) ((short) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (var_17))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19)))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) var_14)) : ((~(var_7))))))));
    }
}
