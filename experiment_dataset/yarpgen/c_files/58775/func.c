/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58775
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65533)) || (((/* implicit */_Bool) 342187047U))));
                    var_21 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */int) ((signed char) (unsigned short)65533))), ((-(((/* implicit */int) (_Bool)0)))))));
                    var_22 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) & (8615271765234669288LL))))));
                }
            } 
        } 
    } 
    var_23 = max((((/* implicit */int) (signed char)125)), (var_9));
    var_24 = ((/* implicit */long long int) ((min((((-2316365332250441529LL) & (((/* implicit */long long int) 4112494590U)))), (((/* implicit */long long int) min(((signed char)-104), ((signed char)125)))))) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
