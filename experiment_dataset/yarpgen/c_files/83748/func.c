/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83748
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
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((_Bool) (~((~(arr_5 [i_0]))))));
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
}
