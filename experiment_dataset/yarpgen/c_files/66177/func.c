/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66177
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)188)) & (((/* implicit */int) ((((/* implicit */long long int) (+(7864320U)))) >= ((~(arr_4 [(signed char)15] [(signed char)15]))))))));
                var_21 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1]))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)103))))), (arr_0 [i_0 + 1] [i_0 + 3]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((long long int) ((((332502961U) > (4287102978U))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) 4287102975U)))))));
}
