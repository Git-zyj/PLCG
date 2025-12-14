/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81806
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((var_1) / (((/* implicit */long long int) ((int) var_3))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((unsigned long long int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned long long int) -1350196171276400046LL);
        var_17 = ((/* implicit */signed char) ((long long int) (~(var_0))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1073725440LL) << (((((((/* implicit */_Bool) 1881901935U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) - (864562515U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-84))))))) : (((((/* implicit */_Bool) var_14)) ? (var_8) : (var_7)))));
    }
}
