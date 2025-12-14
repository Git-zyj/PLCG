/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88839
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) arr_2 [i_0])), (min((904517752U), (0U)))))));
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])), (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((max((var_4), ((+(var_5))))), (((/* implicit */unsigned int) min((var_17), (var_14))))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)39393)), ((-(max((((/* implicit */long long int) 0U)), (1134907106097364992LL)))))));
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 0U)), (4095LL)));
}
