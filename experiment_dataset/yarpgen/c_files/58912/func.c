/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58912
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) var_8);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (min((((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37))) : (3722620925310137975ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
}
