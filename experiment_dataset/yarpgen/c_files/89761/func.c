/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89761
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
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */long long int) ((_Bool) (((-(arr_3 [i_0 + 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))));
                var_14 = ((/* implicit */unsigned short) (~((~(min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_2 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((_Bool) ((int) (!(((/* implicit */_Bool) var_9)))));
}
