/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72929
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
    var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) : (676301943U))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */unsigned int) max((8167238654432443437ULL), (62013445738258ULL)));
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_16) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28463))) : (var_3)))))) ? ((-((-(((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (288230376151711743ULL)))) ? ((+(((/* implicit */int) (unsigned char)84)))) : (((int) -1))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2048)) ? (2147483633) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)128)))))))));
}
