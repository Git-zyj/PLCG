/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77826
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)18858))))))), (max((arr_0 [11U] [i_0]), (((/* implicit */unsigned int) (unsigned short)18842))))));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18858)) & (1133297016)));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || (((((/* implicit */_Bool) -5879584919111725815LL)) || (((/* implicit */_Bool) (unsigned char)225)))))))) : (var_13)));
}
