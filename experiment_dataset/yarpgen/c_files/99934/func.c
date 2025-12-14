/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99934
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)127);
                var_12 = min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -843255630)))) : (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) var_11)));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-127)), (var_11)))) ? (((/* implicit */unsigned long long int) var_5)) : (6014943945680603082ULL)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) 63)))) & (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
}
