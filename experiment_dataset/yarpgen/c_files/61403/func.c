/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61403
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(2560323562U))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((1467495716U) + (0U)));
        var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (((((/* implicit */_Bool) max((536739840U), (((/* implicit */unsigned int) var_10))))) ? (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [4U]))))) : (((((/* implicit */_Bool) arr_1 [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48310))) : (3537857805U))))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [0U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)0]))) : (4294967295U))))));
    }
    var_14 ^= ((((/* implicit */_Bool) var_7)) ? (((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (max(((+(var_9))), (var_1))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)36038))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) * (((/* implicit */int) (unsigned char)149))))) || ((!(((/* implicit */_Bool) var_11))))))))));
}
