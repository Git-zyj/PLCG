/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/626
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
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_11))))))), ((~(min((var_14), (((/* implicit */long long int) var_11))))))));
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_15)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */long long int) (short)9356);
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 524287)), (((11460515018303515689ULL) & (((/* implicit */unsigned long long int) -3594677498144337842LL))))));
    }
    var_19 ^= ((/* implicit */short) var_5);
    var_20 = ((/* implicit */long long int) max(((+(((11059147407473318687ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (min((((((/* implicit */_Bool) var_3)) ? (var_16) : (var_16))), (((/* implicit */unsigned long long int) ((5405483975809834201LL) - (((/* implicit */long long int) var_8)))))))));
}
