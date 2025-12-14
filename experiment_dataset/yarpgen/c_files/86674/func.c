/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86674
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_7))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                arr_7 [i_0] = ((/* implicit */short) max((((/* implicit */int) (signed char)22)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) >= (6817107665056088287ULL)))) : ((-(var_1))))));
}
