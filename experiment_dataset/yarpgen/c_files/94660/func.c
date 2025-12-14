/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94660
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((-8899824768832143024LL), ((+(0LL))))))));
                    var_13 = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_5 [i_0])), ((+(var_5))))) >= (118863129)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), ((~(((/* implicit */int) var_1))))));
}
