/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77000
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) (short)12291);
        arr_2 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)8])) ? (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? ((+(-6856395106368201443LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)12291))))) : (((/* implicit */long long int) ((3844691787U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))))))));
        var_15 = (short)-12268;
        var_16 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (450275511U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-12276))))) : (((arr_1 [i_0]) / (((/* implicit */long long int) -1507374499)))))), (((long long int) (!(((/* implicit */_Bool) var_0)))))));
        var_17 = ((/* implicit */unsigned short) (-(max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)9555))))));
    }
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) var_2))), ((+(((/* implicit */int) (_Bool)1))))));
}
