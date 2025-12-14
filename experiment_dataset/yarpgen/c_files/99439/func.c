/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99439
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 += ((/* implicit */_Bool) var_2);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1073741792LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515)))))) ? (max((2854336953U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) (unsigned char)63)))))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)192))))) ? ((~(max((((/* implicit */int) var_11)), (-2088403145))))) : (((/* implicit */int) (unsigned char)63))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1] &= ((/* implicit */_Bool) (~(max((min((((/* implicit */int) (unsigned char)71)), (0))), (((/* implicit */int) (short)0))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 2])))), (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_1 - 1]) : (((/* implicit */int) (unsigned char)9)))))))));
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-29069)) : (((/* implicit */int) var_1)))))));
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)213))))) ? (((((/* implicit */_Bool) 1220950863)) ? (((/* implicit */int) (short)29069)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)48)))))) | (min((var_8), (((/* implicit */int) (signed char)-124))))));
}
