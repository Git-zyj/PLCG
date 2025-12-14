/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72463
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
    var_18 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) & (((((/* implicit */_Bool) -2952568573628789254LL)) ? (1947700691638272791LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_1), (var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (var_10))))) : (max((2952568573628789253LL), (((/* implicit */long long int) (unsigned short)54668))))));
                arr_5 [23] [23] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) + (14680064U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_14);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_14)));
    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 14680064U)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-18933)) : (((/* implicit */int) (signed char)126)))) : ((-(534642696)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_10) / (var_5)))))))));
}
