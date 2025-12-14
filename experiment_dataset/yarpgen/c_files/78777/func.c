/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78777
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_15 = ((/* implicit */unsigned int) (signed char)0);
    }
    var_16 = ((/* implicit */unsigned int) min((max((min((var_14), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((var_11), (var_11)))))), (max((min((var_14), (((/* implicit */long long int) (short)5369)))), (max((var_10), (((/* implicit */long long int) var_12))))))));
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((min(((short)-5370), ((short)26137))), (min((((/* implicit */short) var_8)), (var_2)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), ((short)26137)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_14))))))));
}
