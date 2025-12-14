/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91370
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_20 = (-(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) var_4)))));
        var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (+(((/* implicit */int) (unsigned short)61283))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2])))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0 - 3]))))));
        var_22 &= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (-2651570052708521172LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28072)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28045)) ? (((/* implicit */int) arr_2 [i_0])) : (-2061014471)))) : (2651570052708521161LL))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((var_4), (var_4)))), (var_1)));
    }
    var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(-2651570052708521156LL)))) ? (((((/* implicit */_Bool) 13870319203650553533ULL)) ? (var_12) : (((/* implicit */long long int) 2093056)))) : (((/* implicit */long long int) var_9))))));
}
