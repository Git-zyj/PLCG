/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82037
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
    var_13 *= ((/* implicit */signed char) ((unsigned int) var_10));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 = min((((/* implicit */int) var_2)), ((~(((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_2 + 2] [i_0])))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */int) arr_8 [i_0] [i_2 + 3] [i_0]))))) ? (((15) | (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_2]))))));
                    var_16 = ((/* implicit */signed char) min((((long long int) arr_2 [i_0])), (((/* implicit */long long int) var_4))));
                }
            } 
        } 
    } 
}
