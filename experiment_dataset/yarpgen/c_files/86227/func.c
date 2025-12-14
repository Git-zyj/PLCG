/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86227
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) var_4);
                arr_5 [i_0] = min((((((462355362647540685ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((462355362647540707ULL) * (17984388711062010899ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (max((var_1), (var_2))));
                arr_6 [i_0] [18ULL] [i_1] = ((/* implicit */long long int) 17984388711062010916ULL);
                arr_7 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))))) : ((+((+(((/* implicit */int) var_5))))))));
}
