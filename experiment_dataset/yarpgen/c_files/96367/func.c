/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96367
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
    var_20 = ((unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = var_0;
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(arr_5 [i_1 + 2] [i_0]))))));
                arr_8 [i_0] [i_0] = (+(var_2));
                var_21 = ((/* implicit */unsigned long long int) ((unsigned int) 2254572274U));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_9);
            }
        } 
    } 
    var_22 = var_17;
    var_23 |= ((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned long long int) min(((~(4294967295U))), (var_12))))));
}
