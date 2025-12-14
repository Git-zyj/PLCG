/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58533
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_15)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (536870848U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [7U] [i_0]), (arr_1 [12U] [12U]))))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (1818307069U)))) >> (((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) - (28)))))));
        arr_2 [i_0] = (+(524160U));
    }
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (536870848U)))) ? (min((var_9), (((/* implicit */unsigned int) (unsigned char)68)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), ((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((unsigned int) (unsigned char)167)) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)24), ((unsigned char)33))))))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) (unsigned char)39)) ? (1492147666U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_16))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)75), (var_0))))) : (((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_4)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (unsigned char)24)))))))));
}
