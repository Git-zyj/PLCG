/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75782
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
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (var_3)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))))));
    var_16 = ((/* implicit */int) ((536870912) < (((/* implicit */int) (unsigned char)56))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((((1644671478U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 0)))))), (((/* implicit */unsigned int) var_9))));
        var_18 = arr_1 [i_0 - 1];
        var_19 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)226)) * (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
    }
    var_20 = ((/* implicit */short) var_8);
}
