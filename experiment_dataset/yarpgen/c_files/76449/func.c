/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76449
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
    var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (_Bool)0))))) & (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (short)28770))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0 - 1] [i_1] = ((/* implicit */int) max((min((min((33292288U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))), (((/* implicit */unsigned int) ((short) var_8))))), (((unsigned int) (unsigned char)193))));
                arr_8 [i_1] [i_1] = min((((((/* implicit */long long int) ((/* implicit */int) min(((short)-28758), (((/* implicit */short) arr_5 [i_0] [(_Bool)1] [i_1])))))) / (min((arr_1 [i_1]), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_1])))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_1])))))))));
            }
        } 
    } 
}
