/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61715
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((var_5) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_8)))))))))));
        var_21 = ((/* implicit */signed char) var_1);
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_0 [i_0] [i_0])) != (var_3))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7)))))))))));
        var_23 = ((/* implicit */unsigned short) arr_1 [(short)1] [i_0]);
    }
    var_24 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 1772258071U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) var_8)))))))));
}
