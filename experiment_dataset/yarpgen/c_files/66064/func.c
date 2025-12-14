/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66064
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)0] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1 + 3] = ((/* implicit */_Bool) min(((signed char)15), ((signed char)-15)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                arr_13 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (signed char)-7)) / (((/* implicit */int) (signed char)-10)))))) ^ (((/* implicit */int) max(((signed char)-30), ((signed char)15))))));
                var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)29), ((signed char)7))))) ^ (((unsigned int) (+(((/* implicit */int) (signed char)30)))))));
            }
        } 
    } 
    var_17 = ((unsigned int) max((((/* implicit */unsigned int) (signed char)29)), (var_2)));
    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (signed char)-16)), (var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-10)))))))) >= (min((((long long int) var_0)), (((/* implicit */long long int) ((signed char) var_8)))))));
}
