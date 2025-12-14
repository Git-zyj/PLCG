/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78519
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_1 + 1] [i_1] [i_0] = ((/* implicit */short) ((((arr_0 [i_1 - 1]) < (arr_0 [i_1 - 2]))) ? (((arr_3 [i_0] [i_1 - 2]) + (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)252))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) arr_1 [i_0])) < (((/* implicit */long long int) -504152851))))))));
                var_15 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_8)), (((long long int) -8070453358177141071LL))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((/* implicit */int) var_14))));
    var_17 = ((/* implicit */long long int) (unsigned char)249);
}
