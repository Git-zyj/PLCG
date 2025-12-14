/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64235
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
    var_13 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_1] [i_0]));
                var_14 = ((/* implicit */int) max((((min((10197909732760910583ULL), (((/* implicit */unsigned long long int) 2089240525)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))))), (1088213185222783607ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 = ((/* implicit */unsigned int) var_8);
}
