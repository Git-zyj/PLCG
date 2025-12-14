/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8718
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_14))));
    var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)))) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_1)) : (var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1))))) : (((/* implicit */int) var_9))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))));
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(var_6)))))) : (((((/* implicit */unsigned long long int) var_3)) | (((((/* implicit */_Bool) 1052095984)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22527))) : (4591932506000835014ULL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_4))));
}
