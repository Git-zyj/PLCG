/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87453
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
    var_18 &= max((18014396361998336LL), (((/* implicit */long long int) var_0)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
        arr_3 [i_0] |= ((/* implicit */signed char) -18014396361998346LL);
    }
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-26032)));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18014396361998345LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)24023))))) : (var_8)));
}
