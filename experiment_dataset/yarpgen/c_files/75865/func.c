/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75865
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-514042594) : (((/* implicit */int) arr_3 [i_0]))))) == (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -724034082932993296LL)))))) : ((~(-724034082932993288LL)))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((min((((724034082932993297LL) | (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))), (((long long int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((-724034082932993288LL) < (-724034082932993278LL)));
    var_21 = ((/* implicit */signed char) ((724034082932993296LL) >= (-724034082932993291LL)));
    var_22 = ((/* implicit */int) (((+(min((var_4), (((/* implicit */long long int) (unsigned short)64668)))))) < (-724034082932993291LL)));
}
