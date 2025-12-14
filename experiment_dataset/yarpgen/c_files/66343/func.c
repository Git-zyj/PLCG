/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66343
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = min((min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (_Bool)1))))), (((long long int) (unsigned short)32075)))), (((/* implicit */long long int) (-((-(4294967295U)))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (524256)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) -524245)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 524244);
    }
    var_13 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -524248)) ? (var_8) : (((/* implicit */int) (_Bool)1))))), ((+(var_9))))) | (((/* implicit */unsigned long long int) var_1))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_5))));
    var_15 = ((/* implicit */long long int) max((min((var_7), (((/* implicit */unsigned int) min((524268), (-524257)))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) 3489002344U))))));
}
