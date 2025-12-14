/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58086
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
    var_20 = ((/* implicit */short) ((signed char) (~(((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)32767)))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (short)-24099)) || (((/* implicit */_Bool) 576460202547609600LL)))))));
    var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_19))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_23 ^= ((/* implicit */short) ((((/* implicit */int) (short)32761)) + (((/* implicit */int) (short)32767))));
        arr_4 [i_0] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (short)12618))))) ? (((/* implicit */int) max((max(((short)32756), ((short)32767))), (((/* implicit */short) ((signed char) (unsigned short)65532)))))) : (((/* implicit */int) ((((/* implicit */_Bool) -7682556429048548300LL)) && (((/* implicit */_Bool) (unsigned short)1)))))));
    }
}
