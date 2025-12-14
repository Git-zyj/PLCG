/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96503
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-5699)), (393216U)))), (var_11))) << (((((/* implicit */int) var_14)) - (140))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) var_1);
                    arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */short) max(((unsigned char)245), (((/* implicit */unsigned char) ((((/* implicit */int) (short)5719)) != (((/* implicit */int) (unsigned char)31)))))));
                }
            } 
        } 
    } 
}
