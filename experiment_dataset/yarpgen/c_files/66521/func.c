/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66521
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
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (var_6)))) ? (((((/* implicit */_Bool) (unsigned short)37538)) ? (((/* implicit */unsigned long long int) -1387476725)) : ((~(var_8))))) : (max((((/* implicit */unsigned long long int) var_3)), ((-(var_7)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (arr_0 [i_0])))) + (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
    }
}
