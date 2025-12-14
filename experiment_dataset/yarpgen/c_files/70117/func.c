/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70117
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
    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((2676390505416162403LL) > (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ^ (((((/* implicit */_Bool) -3080508194688081359LL)) ? (((/* implicit */int) (unsigned short)34565)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */_Bool) -4494571031930620384LL);
        var_14 = ((/* implicit */long long int) min(((unsigned short)54936), (((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1]))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) arr_3 [14LL])) < (((/* implicit */int) var_11))))), (arr_3 [0]))))));
        var_16 = ((/* implicit */unsigned short) ((_Bool) -1024183776));
        var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(16737456570864079159ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    }
    var_18 = ((/* implicit */unsigned short) var_5);
}
