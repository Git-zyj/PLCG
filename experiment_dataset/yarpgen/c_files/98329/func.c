/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98329
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
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 |= ((/* implicit */unsigned short) min((-1LL), (((((((/* implicit */_Bool) 19LL)) ? (0LL) : (-19LL))) | (-19LL)))));
                var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                arr_7 [i_0] [i_1] [i_0 - 1] = ((/* implicit */int) ((-1690783982502526708LL) > (((/* implicit */long long int) 0U))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((((+(var_7))) + (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (+(var_9))))));
}
