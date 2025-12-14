/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55057
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)225))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (var_11)))))) : (((((/* implicit */_Bool) min(((short)-2048), (((/* implicit */short) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(var_0)))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (short)483)))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? ((~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_1 [(unsigned char)12] [i_0]))))) : ((~((~(var_8)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) min((min((var_12), (((/* implicit */unsigned int) (unsigned char)152)))), (((362301753U) - (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-12258)))))))));
        var_16 = ((/* implicit */short) min(((!((!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))), ((!(((/* implicit */_Bool) (signed char)61))))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)34488)), (arr_3 [i_2]))) * (min((18U), (4294967295U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned char)202)))))) : (((((/* implicit */_Bool) 6245424227568102755LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (1287964832087729167LL)))));
        var_18 = ((/* implicit */unsigned int) ((_Bool) ((int) var_11)));
    }
}
