/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90979
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
    var_17 &= ((/* implicit */unsigned short) 1575391589);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((((/* implicit */long long int) max((((unsigned int) 5302534852446888840LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))))) > (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))));
                var_19 *= ((/* implicit */short) arr_2 [i_0] [i_1]);
                var_20 -= ((/* implicit */unsigned int) arr_4 [i_0]);
            }
        } 
    } 
    var_21 += ((/* implicit */signed char) var_15);
}
