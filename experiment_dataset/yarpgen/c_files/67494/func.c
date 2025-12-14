/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67494
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 &= ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((unsigned short) -726766657))), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) (unsigned char)222))));
                arr_4 [4U] [10ULL] [i_0] = ((/* implicit */long long int) arr_0 [(unsigned char)13] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) (-((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5)))))));
}
