/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65392
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_17 = min((max((arr_0 [i_0] [i_1 - 1]), (arr_0 [i_0] [i_1 + 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)223))))));
                arr_6 [9U] [i_0] = ((/* implicit */unsigned short) ((11946957529082904054ULL) & (11946957529082904054ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
    var_19 = ((/* implicit */unsigned long long int) var_13);
}
