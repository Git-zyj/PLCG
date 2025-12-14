/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73715
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) var_2))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 7863604225864915081ULL)))))))));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (185))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5)))))))));
    }
    var_12 = ((/* implicit */signed char) max((min((((/* implicit */int) var_1)), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_7)) / (var_3))) : ((+(var_3)))))));
}
