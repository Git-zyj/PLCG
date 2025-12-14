/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72504
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
    var_11 = ((/* implicit */short) ((_Bool) 1943222015U));
    var_12 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-14095))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) var_6)))) ? (((((((/* implicit */_Bool) (short)-14108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14113))) : (8144430728635385835ULL))) | (((((/* implicit */_Bool) 2179460528837167112LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14082))) : (var_1))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32767)))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)384)))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14134)) ? ((~(((/* implicit */int) (unsigned short)32767)))) : ((~(((/* implicit */int) (unsigned short)32768))))));
            }
        } 
    } 
}
