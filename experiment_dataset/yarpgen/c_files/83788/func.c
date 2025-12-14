/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83788
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? ((+(var_8))) : (var_2)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [(signed char)10] = ((/* implicit */signed char) ((short) arr_1 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29228))) >= (var_0))))))), (((((/* implicit */unsigned long long int) 536870904)) % (arr_0 [i_1] [i_1])))));
        var_18 -= ((/* implicit */long long int) arr_4 [7LL] [(unsigned char)9]);
    }
}
