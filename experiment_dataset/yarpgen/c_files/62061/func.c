/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62061
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)54647);
    var_18 = var_14;
    var_19 = var_12;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)142))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) | (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : (4294967271U))))));
        arr_5 [8ULL] = ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [(short)3]))))) : (16U));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1638609260U)) ^ (((unsigned long long int) (unsigned char)102))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [(unsigned char)1]))) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_1 [i_0 + 3]))));
    }
}
