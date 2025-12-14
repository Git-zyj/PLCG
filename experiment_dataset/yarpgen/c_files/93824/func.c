/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93824
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_8))), (((/* implicit */unsigned long long int) var_14)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) 2288695666U)), (6001198955067986911LL)));
                var_21 = ((/* implicit */int) var_2);
                arr_6 [i_0 - 1] [i_0] = max((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)21868))))))), (((/* implicit */unsigned long long int) var_1)));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
