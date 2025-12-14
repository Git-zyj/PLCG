/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60641
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_0);
                var_13 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0 + 1])), (((unsigned short) (signed char)127))))) ? ((-((~(arr_0 [i_1]))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) min((var_7), (((/* implicit */short) var_9))))), (var_11))))));
                var_14 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_5))))));
                arr_5 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((min((max((var_4), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)47))))))), (((/* implicit */long long int) (unsigned short)53263)))))));
}
