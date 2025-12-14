/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94550
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-122), ((signed char)103))))) % (var_3))) >= (1426813829U)));
        arr_3 [i_0] &= ((/* implicit */signed char) min((min((min((16435872798518031006ULL), (((/* implicit */unsigned long long int) (signed char)-64)))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (signed char)48))))))));
    }
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (signed char)103))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_0))));
}
