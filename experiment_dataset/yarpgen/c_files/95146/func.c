/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95146
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)65524)) : (2000863590)))) < (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((-2708887633539580925LL), (((/* implicit */long long int) arr_7 [i_0] [i_1]))));
                arr_9 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) min((((((arr_3 [i_0 - 1] [i_0]) + (2147483647))) >> (((/* implicit */int) arr_7 [i_0] [i_0])))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_0 - 1]))))))) : (((/* implicit */unsigned long long int) min((((((((arr_3 [i_0 - 1] [i_0]) - (2147483647))) + (2147483647))) >> (((/* implicit */int) arr_7 [i_0] [i_0])))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_0 - 1])))))));
                arr_10 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) 2730084266335971879LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0 + 3])));
            }
        } 
    } 
}
