/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96617
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
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) arr_2 [(short)5]))));
        var_13 = max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) >= (((var_4) | (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))), ((+(((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [1LL] [4ULL]);
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)12288))));
        var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_1 + 4]), (((((/* implicit */_Bool) (short)4789)) ? (574398690) : (((/* implicit */int) (short)5319))))))) : (arr_5 [i_1]));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */short) (+(((15266713732918107123ULL) * (15266713732918107123ULL)))));
        var_16 = ((/* implicit */unsigned char) (((~(var_0))) | (((/* implicit */int) var_6))));
    }
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
}
