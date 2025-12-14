/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90751
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
    var_13 = ((/* implicit */unsigned long long int) 7257751475297515828LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((_Bool) 1361416936);
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_1]))) : (((arr_3 [i_1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0]))))));
                arr_6 [i_0] = ((/* implicit */long long int) max((min((arr_1 [i_0] [i_0]), (arr_0 [i_1]))), (((/* implicit */signed char) ((_Bool) arr_1 [i_0] [i_0])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
}
