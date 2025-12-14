/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9766
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((651008603) + ((-(((/* implicit */int) (_Bool)0))))))) / ((-((+(1014177507U)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
            }
        } 
    } 
}
