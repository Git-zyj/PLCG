/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87710
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
    var_11 = ((/* implicit */unsigned long long int) (short)-30751);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1]))))), (arr_0 [i_0] [i_0]))))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_5 [(short)3] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) : (-5431934675828714670LL))))), (((((/* implicit */_Bool) (-(3070303904U)))) ? (((((/* implicit */long long int) var_10)) / (-5431934675828714694LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))))));
            }
        } 
    } 
}
