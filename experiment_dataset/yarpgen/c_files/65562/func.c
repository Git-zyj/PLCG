/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65562
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
    var_20 = ((/* implicit */unsigned int) ((var_19) | (min((((/* implicit */long long int) min(((signed char)67), ((signed char)-67)))), (((((/* implicit */long long int) var_16)) ^ (var_8)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (arr_4 [i_0])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))), ((~(arr_2 [i_2] [i_2]))))) : (((((/* implicit */_Bool) (~(var_5)))) ? (((arr_5 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) arr_0 [i_0]))))));
                    arr_9 [1LL] [i_1] [1U] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-67))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(var_18)));
}
