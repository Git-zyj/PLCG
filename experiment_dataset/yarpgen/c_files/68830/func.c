/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68830
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
    var_20 = ((/* implicit */long long int) (~(var_0)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_3 [i_0]) ^ (var_11)))) ? (((/* implicit */unsigned long long int) (~(217888054U)))) : (min((((/* implicit */unsigned long long int) max(((short)27419), (((/* implicit */short) var_15))))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_1] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(arr_1 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
            }
        } 
    } 
    var_21 &= ((unsigned short) ((signed char) var_15));
    var_22 &= ((/* implicit */unsigned long long int) var_16);
}
