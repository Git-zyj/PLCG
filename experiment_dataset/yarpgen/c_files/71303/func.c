/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71303
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
    var_20 = ((/* implicit */unsigned char) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((int) arr_0 [i_1 - 2])))))));
                var_22 += ((/* implicit */signed char) arr_5 [(signed char)4] [5ULL]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */int) var_5)) : (max((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_12))))))));
}
