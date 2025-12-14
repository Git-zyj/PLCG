/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79782
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
    var_10 = var_6;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) var_3))), ((unsigned char)46))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8588351113726808700ULL) << (((2902866278U) - (2902866237U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0])))))) : (1281217010)));
        var_12 = ((/* implicit */short) ((((arr_2 [i_0]) <= (((/* implicit */int) arr_0 [i_0])))) ? (max((((/* implicit */long long int) arr_2 [i_0])), (var_3))) : (((/* implicit */long long int) arr_2 [i_0]))));
    }
    var_13 = ((/* implicit */short) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) max((1392101017U), (4294967295U)))) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (8444982266851842866LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)511)) >= (((/* implicit */int) (unsigned char)37))))))))));
}
