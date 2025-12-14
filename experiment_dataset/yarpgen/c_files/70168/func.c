/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70168
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
    var_16 &= ((/* implicit */unsigned int) ((((((758299327) != (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) var_14)))) ? ((((_Bool)1) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (short)-10021)))) : (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)32))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 16537448674626630466ULL))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (short)-27542))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (unsigned char)16))))))));
        var_21 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)14223))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) ((short) arr_1 [i_1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)104)))))))));
        var_23 += ((((/* implicit */int) var_2)) > (((/* implicit */int) var_13)));
    }
    for (signed char i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) & (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [(unsigned short)2])) : (((/* implicit */int) (_Bool)1))))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_10))));
        var_25 |= ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned char)239)))) + (2147483647))) << (((((((_Bool) 49626781U)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)23)), (var_15)))) : (((/* implicit */int) (short)-4933)))) - (23)))));
    }
}
