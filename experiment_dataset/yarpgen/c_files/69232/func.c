/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69232
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */int) arr_2 [i_0])) >> ((((((_Bool)1) ? (((/* implicit */long long int) -357300054)) : (-6652677462494483708LL))) + (357300058LL)))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))) | (548134797289836645LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3239297338U)))))) : (36028797018963936LL));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6] [i_1])) ? (3239297334U) : (((/* implicit */unsigned int) arr_1 [(unsigned short)4] [i_1]))))) && (((((/* implicit */_Bool) 3239297333U)) && (((/* implicit */_Bool) arr_1 [18LL] [18LL])))))))));
            }
        } 
    } 
}
