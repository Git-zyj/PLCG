/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72601
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), (((unsigned char) arr_0 [i_0])))));
        arr_3 [i_0] = ((signed char) (+(((int) 7LL))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_13 = (_Bool)1;
        arr_8 [(unsigned char)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [9])))))));
    }
    var_14 *= ((/* implicit */_Bool) var_10);
    var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_7)));
}
