/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58023
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
    var_15 = ((/* implicit */long long int) var_2);
    var_16 -= ((/* implicit */short) max((var_9), ((signed char)127)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) (signed char)-101))))), (((max((((/* implicit */unsigned int) (_Bool)0)), (4096U))) | (1959610153U)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-73)))) : (min((((/* implicit */int) (short)12)), (1220569114)))))) ? (var_0) : (((/* implicit */long long int) ((arr_2 [i_1] [i_0 - 4]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (min((2147483647), (((/* implicit */int) (short)12)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_0);
    var_20 = (!(var_13));
}
