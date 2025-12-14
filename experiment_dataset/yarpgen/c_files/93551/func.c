/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93551
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) max((arr_0 [(unsigned short)0] [(unsigned short)5]), (arr_1 [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((var_11) - (5561994408970842527ULL)))))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) * (((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) arr_4 [i_1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)53332)) : (((/* implicit */int) arr_4 [i_1]))))))), (arr_3 [i_1 + 1] [i_1])));
        arr_5 [i_1 + 1] = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_4 [i_1 + 1])))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_3 [(unsigned short)9] [i_1]))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)54649)) ? (((/* implicit */int) (unsigned short)47794)) : (((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)100))))));
    }
    var_16 -= ((/* implicit */unsigned char) max((var_8), (((/* implicit */long long int) var_7))));
}
