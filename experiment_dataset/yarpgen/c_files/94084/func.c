/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94084
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned short)62656))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 ^= min((arr_1 [i_1 - 1]), (((arr_1 [i_1 + 1]) << (((arr_1 [i_1 - 1]) - (1700141514))))));
                var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_4)))));
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)4418))));
            }
        } 
    } 
    var_20 |= ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */int) var_7);
    var_22 += ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_3))));
}
