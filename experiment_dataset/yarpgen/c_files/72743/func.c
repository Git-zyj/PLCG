/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72743
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) max((var_3), (((/* implicit */long long int) var_13)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32762)) <= (((((/* implicit */_Bool) (unsigned char)255)) ? (-652526625) : (((/* implicit */int) var_8))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 4])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((-(arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (-(arr_5 [i_1] [i_1 + 3])));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)34659))))), (min((min((arr_5 [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))))))));
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */signed char) max((max(((~(-5029904268030448801LL))), (((-1367869044414929383LL) % (((/* implicit */long long int) 4294967291U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)248)))))));
    }
}
