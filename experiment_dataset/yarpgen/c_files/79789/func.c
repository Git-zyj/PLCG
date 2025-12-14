/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79789
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
    var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */long long int) var_13)) / (var_8))) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))) <= (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_6)))))))));
    var_15 = ((/* implicit */_Bool) max((var_15), (var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
        var_17 += ((/* implicit */short) max((10809287941358390695ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? ((-9223372036854775807LL - 1LL)) : (var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
    }
    var_18 += ((/* implicit */short) ((((/* implicit */int) var_3)) + (var_13)));
    var_19 -= ((/* implicit */unsigned char) min(((((-(var_0))) == (((/* implicit */long long int) (-(var_4)))))), ((!(var_5)))));
}
