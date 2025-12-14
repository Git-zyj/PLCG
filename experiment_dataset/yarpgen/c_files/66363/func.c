/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66363
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned char) 7348502724946542336LL);
    }
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((var_2) - (4081652242859834961ULL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49018))) & (-7348502724946542337LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16283)))))) ? (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -5328707159556694912LL)) : (17003339371988767315ULL))), (min((1443404701720784290ULL), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))));
}
