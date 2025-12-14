/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68749
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_1 [i_0] [(unsigned char)19]))))) ? (((int) var_14)) : (((int) var_17))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (unsigned char)0))), ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) (-(((unsigned int) arr_0 [i_0])))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (8704255448820340414LL) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) (-(var_13)))) : (max((((/* implicit */long long int) var_7)), (-1962851435603107859LL)))))) ? (((/* implicit */int) min((var_17), (((/* implicit */signed char) var_16))))) : ((-(((/* implicit */int) var_14))))));
}
