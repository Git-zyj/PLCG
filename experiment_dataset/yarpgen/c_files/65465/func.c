/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65465
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
    var_10 = var_8;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                    var_11 = ((/* implicit */int) ((_Bool) (signed char)66));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) : (2853172614931899070LL))), (var_1))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */long long int) 4251665028U)) : (-5316149481742498511LL)))));
}
