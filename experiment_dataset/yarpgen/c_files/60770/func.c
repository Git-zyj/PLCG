/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60770
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((unsigned int) (+(var_1))))));
        var_14 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((min((-4889522049677639257LL), (((/* implicit */long long int) var_10)))) < (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-85))))))))));
    }
    var_15 = ((/* implicit */unsigned int) var_10);
    var_16 = max((((/* implicit */long long int) 4146655979U)), (((4889522049677639256LL) >> (((-1846247608) + (1846247639))))));
}
