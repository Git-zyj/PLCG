/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92287
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
    var_20 = -120957814;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2]))) : (-3113639649190208272LL)))) ? ((-(var_17))) : (min((((/* implicit */int) arr_8 [i_2])), (0)))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) < (((((/* implicit */unsigned int) var_7)) | (((((/* implicit */_Bool) 649859846)) ? (0U) : (((/* implicit */unsigned int) -120957798))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)));
}
