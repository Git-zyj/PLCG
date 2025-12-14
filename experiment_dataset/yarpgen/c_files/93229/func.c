/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93229
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (~((-(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((var_14) / (((/* implicit */unsigned int) arr_1 [i_0]))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */int) (unsigned short)4088);
            }
        } 
    } 
}
