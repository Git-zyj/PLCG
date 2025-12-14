/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89205
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
    var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 16895838252376514102ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (var_12))), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? (min((((long long int) (unsigned short)4817)), (((/* implicit */long long int) ((unsigned char) arr_3 [i_0 + 1]))))) : (((/* implicit */long long int) max((min((-315083636), (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [22])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_12)) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (min((arr_4 [i_0 + 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
            }
        } 
    } 
}
