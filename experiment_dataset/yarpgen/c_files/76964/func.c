/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76964
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 *= ((/* implicit */short) (unsigned char)0);
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13))) > (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
        var_16 -= ((/* implicit */long long int) ((((var_11) << (((((/* implicit */int) var_1)) - (22978))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((short) min((((/* implicit */unsigned int) var_0)), (var_13)))))));
        var_18 = max((((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))));
    }
    var_19 = ((/* implicit */signed char) var_11);
    var_20 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned long long int) (unsigned char)0))));
    var_21 = ((/* implicit */long long int) var_6);
    var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_9)), (var_7))), (((/* implicit */long long int) var_5))))) && (((/* implicit */_Bool) 1687442985U))));
}
