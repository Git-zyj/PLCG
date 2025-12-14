/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65980
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (var_14) : (5423679114156017098LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((3922626626U), (((/* implicit */unsigned int) var_0))));
                    var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) ((5423679114156017089LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [(unsigned char)1]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_13))));
}
