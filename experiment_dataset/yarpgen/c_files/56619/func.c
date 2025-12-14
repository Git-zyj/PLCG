/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56619
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) arr_6 [i_0]);
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (var_9) : (var_9)))) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
}
