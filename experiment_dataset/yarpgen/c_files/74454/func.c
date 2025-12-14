/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74454
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) var_6))))))));
    var_17 &= ((/* implicit */unsigned int) max(((((~(13216530207895801381ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (-2045564057)))))), (((/* implicit */unsigned long long int) ((var_7) >> ((((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) - (41089))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)31)))), (arr_0 [21ULL])))) ? ((~((~(((/* implicit */int) var_2)))))) : (max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((arr_0 [i_0]) + (2147483647))) << (((((arr_0 [i_0]) + (359932945))) - (22))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (16383) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((int) arr_0 [i_0]))));
    }
}
