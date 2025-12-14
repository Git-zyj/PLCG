/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78336
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
    var_13 &= ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned char) -1891398379);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2353170044U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967279U)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1891398379))))))) : (-1891398386)));
                    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1941797252U)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_6)));
                }
            } 
        } 
    } 
}
