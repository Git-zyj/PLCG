/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94289
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
    var_16 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(129875431U)))))))));
    var_17 ^= var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */long long int) 18428729675200069632ULL);
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((20ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((18446744073709551610ULL) | (((/* implicit */unsigned long long int) 2931715033U)))) : (((/* implicit */unsigned long long int) var_5))))) ? ((((_Bool)1) ? (((int) (_Bool)1)) : (var_14))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))) ? ((+(var_2))) : (((/* implicit */int) ((_Bool) var_15)))))));
}
