/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79769
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 0U))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0]))) ? (((((/* implicit */long long int) 4294967292U)) / (-9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_14)))))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((min((max((9223372036854775793LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (472627974U)))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_18 = ((/* implicit */unsigned short) 9223372036854775807LL);
        var_19 = ((/* implicit */short) ((unsigned char) 24016450465296247LL));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(arr_0 [i_0] [i_0])));
    }
}
