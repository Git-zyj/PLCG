/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83134
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) || (var_5)));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_0])))))) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned short)29), (((/* implicit */unsigned short) max((arr_0 [(unsigned char)10]), (arr_0 [i_0]))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((arr_0 [i_0 + 2]) || (arr_0 [i_0 + 2])))))))));
        var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 - 1])), (arr_1 [i_0 + 2]))))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((-(((/* implicit */int) var_7))))))) ? ((~(((((/* implicit */_Bool) (short)32761)) ? (2890476983596210828LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */unsigned char) ((unsigned short) var_8));
}
