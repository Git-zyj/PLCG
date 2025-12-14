/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71115
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)7523)) & (((/* implicit */int) (unsigned short)15360)))))) << ((((+(((/* implicit */int) (unsigned short)15346)))) - (15339)))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [(unsigned short)7])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)50182)))), ((+(((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)52840))))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)23405)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned short)65533)))))))));
        arr_2 [i_0] = max(((unsigned short)58861), (arr_0 [i_0]));
    }
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
}
