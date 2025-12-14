/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87215
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
    var_14 = ((((unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)254))))) / (var_10));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (arr_1 [i_0] [(unsigned char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_0 [i_0])))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)11)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) & (arr_1 [8U] [i_0])))) ? (30720U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_15 = ((signed char) arr_0 [i_0]);
    }
    var_16 -= ((/* implicit */long long int) var_6);
}
