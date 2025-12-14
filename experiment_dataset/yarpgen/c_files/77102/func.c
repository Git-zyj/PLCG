/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77102
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((arr_0 [i_0] [i_0]), (var_11)))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)32487))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (var_2)))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (8074804237145050704ULL)))))));
        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? (((unsigned long long int) (short)12)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_2 [i_0] [13] = ((/* implicit */unsigned char) (-(max((max((((/* implicit */unsigned long long int) -3172612671000410308LL)), (8074804237145050707ULL))), (((297404281849164960ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27013)))))))));
        var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) (unsigned short)38522))))))), (arr_0 [i_0] [i_0])));
    }
}
