/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91318
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
    var_15 *= ((/* implicit */_Bool) var_4);
    var_16 = ((/* implicit */_Bool) (((-(max((((/* implicit */unsigned long long int) var_5)), (var_3))))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)11586)), ((+(var_2))))))));
    var_17 = ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) (short)-11586)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11602))) : (var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_0);
                var_19 = ((/* implicit */unsigned long long int) var_6);
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_4)))));
            }
        } 
    } 
}
