/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6897
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
    var_18 -= ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) (short)19575))))))));
        var_20 = var_2;
        var_21 = ((((/* implicit */int) ((unsigned char) (signed char)-126))) - (((/* implicit */int) var_11)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (16422819300446524669ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19709)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((-8926516452515914465LL), (((/* implicit */long long int) var_11)))))));
    }
}
