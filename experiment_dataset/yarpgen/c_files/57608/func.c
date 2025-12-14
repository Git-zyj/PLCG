/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57608
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_8))));
        var_18 += ((/* implicit */unsigned short) max((-9223372036854775807LL), (((/* implicit */long long int) -1929194087))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)1792)))))));
        arr_4 [8LL] [(_Bool)1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])))) ? (((((/* implicit */int) (unsigned char)41)) >> (((3700643100U) - (3700643085U))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1764)), ((unsigned short)18632))))));
        arr_5 [i_0 + 1] [i_0 - 1] = ((/* implicit */int) var_3);
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_8)) + (25538)))))))))))));
    var_21 = ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)24735)) / (((/* implicit */int) (unsigned char)217)))) : ((+(var_7)))))));
}
