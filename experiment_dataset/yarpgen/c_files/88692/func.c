/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88692
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
    var_16 = ((/* implicit */long long int) var_6);
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (67108863LL))) >> (((/* implicit */int) var_6))));
        arr_4 [i_0] [(short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) var_13))))));
        var_18 -= ((/* implicit */unsigned char) ((67108863LL) <= (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)7)))))));
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_8 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)22))) - ((+(var_5)))));
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (short)18))))) : (((/* implicit */int) arr_6 [i_1]))))) ^ (((((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == ((-9223372036854775807LL - 1LL)))))) : (-67108863LL)))));
    }
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= ((+(max((((/* implicit */long long int) var_2)), (var_1)))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) min(((short)7), (((/* implicit */short) var_8))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))) : (max((var_3), (((/* implicit */unsigned int) var_6)))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_6)))))))));
}
