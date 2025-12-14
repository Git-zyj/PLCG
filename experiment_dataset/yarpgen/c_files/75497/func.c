/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75497
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
    var_10 = ((/* implicit */unsigned int) ((int) ((int) ((unsigned int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */long long int) arr_6 [i_2] [i_2]);
                    arr_9 [i_0] [i_2] [i_2] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_1 [i_1]), ((short)-28003)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_2] [i_2])) + (((/* implicit */int) var_3))))), (max((arr_3 [i_2]), (((/* implicit */unsigned long long int) var_0))))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                    var_12 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_9))), (((var_0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                    var_13 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
}
