/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9637
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
    var_11 = ((/* implicit */unsigned int) min((((((((/* implicit */int) (signed char)1)) > (((/* implicit */int) var_4)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (max((((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) var_6)), (var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0]);
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) var_4);
                    arr_10 [i_0] [i_2] [i_0] [i_0] = max((arr_1 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_7);
}
