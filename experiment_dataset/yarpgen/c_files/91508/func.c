/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91508
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
    var_12 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned short)10151), (var_7)))), (((unsigned long long int) var_6))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (((arr_3 [i_0] [4ULL] [(unsigned short)12]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                arr_5 [i_0] = ((/* implicit */unsigned int) var_11);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((_Bool) var_8)));
            }
        } 
    } 
    var_13 |= var_4;
}
