/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72616
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
    var_20 = ((/* implicit */short) var_14);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(776556857494825235LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20747))) : (var_19)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((long long int) 8690934202138438117LL));
                    arr_10 [i_0] = ((/* implicit */long long int) max((((/* implicit */short) var_9)), (var_18)));
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_9)))));
                    arr_12 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) arr_5 [i_2] [(short)11] [i_0]);
                }
            } 
        } 
    } 
}
