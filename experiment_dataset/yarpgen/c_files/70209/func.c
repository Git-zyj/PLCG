/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70209
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_4 [i_0 + 2])), (var_12)))));
                var_17 = ((/* implicit */short) ((arr_4 [i_0 - 1]) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8))))) ? (((((/* implicit */_Bool) 4095U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))) : (17301014226952183160ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3839865971383125508ULL)))))))) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 + 2]))))), (var_6)))));
                var_18 = ((/* implicit */unsigned int) (!(arr_4 [i_1])));
                arr_6 [i_0] = ((/* implicit */unsigned char) (unsigned short)65531);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), (((var_0) | (var_13)))));
    var_20 = ((/* implicit */unsigned short) 6445531855137155900ULL);
    var_21 = ((/* implicit */unsigned int) (unsigned short)65530);
}
