/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87107
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) 5456381747456117907ULL))));
    var_13 ^= ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_6)) + (136))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) arr_2 [(_Bool)0]))), (1849506580U)));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min(((-(((arr_0 [10LL] [6U]) ? (((/* implicit */int) arr_2 [(unsigned short)4])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [(unsigned short)14] [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0 + 2] [(_Bool)1])))))))))))));
    }
}
