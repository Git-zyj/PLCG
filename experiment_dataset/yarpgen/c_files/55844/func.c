/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55844
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
    var_20 = max((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned long long int) var_19)), (var_11))) : (((/* implicit */unsigned long long int) (~(var_19)))))), (((/* implicit */unsigned long long int) var_7)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0 + 2])))) : (((((/* implicit */int) arr_0 [i_0 + 3])) + (((/* implicit */int) arr_0 [i_0 - 1]))))));
        arr_3 [i_0 + 1] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) == (((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)11])) ? (14394906298898263586ULL) : (3181554193284023994ULL)))))));
        var_22 = (((!(((/* implicit */_Bool) ((short) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) : (70367670435840ULL))))));
    }
}
