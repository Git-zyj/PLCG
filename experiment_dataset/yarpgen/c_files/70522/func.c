/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70522
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
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) (_Bool)0))))) : (var_13))), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        var_19 = ((/* implicit */signed char) (-(arr_0 [i_0] [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) (((_Bool)0) ? (min((((((/* implicit */_Bool) (unsigned char)70)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) != (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_1])), (691083936U))))))))));
        var_21 = ((/* implicit */short) var_16);
    }
    var_22 = ((/* implicit */short) -7890967);
}
