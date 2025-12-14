/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66324
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
    var_16 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((unsigned int) var_13)) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) >= (((/* implicit */int) (unsigned short)41491)))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)21))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)41489)) : (((/* implicit */int) (short)8285)))) : (((/* implicit */int) (short)-27140))))) ? ((~(((((((/* implicit */int) (signed char)-40)) + (2147483647))) << (((((/* implicit */int) var_6)) - (9))))))) : (((((/* implicit */int) arr_1 [i_0 - 1])) & (var_12)))));
        var_18 ^= ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_0 [4ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1173)))))))));
        var_19 = ((/* implicit */int) var_7);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27140)) && (((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1)))))))));
    }
}
