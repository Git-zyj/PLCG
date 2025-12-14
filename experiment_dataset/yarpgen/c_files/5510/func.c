/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5510
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
    var_20 -= ((/* implicit */unsigned int) var_11);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_18)) : (((174494384427325833ULL) ^ (((/* implicit */unsigned long long int) -2132643241))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [4U] [4U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_2]))), ((~(var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [(short)15] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_2]))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11))))))));
                    var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) >= ((~(arr_0 [i_1 + 1]))))))));
                }
            } 
        } 
    } 
}
