/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7648
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
    var_20 = ((/* implicit */int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((861649791208668159ULL), (((/* implicit */unsigned long long int) arr_5 [12] [12])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 178714938U)) == (arr_3 [i_1] [(unsigned char)15]))))) : ((-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                    var_21 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(unsigned char)13]))))), (178714924U))) - (((((/* implicit */_Bool) var_15)) ? (var_18) : (arr_2 [i_2 + 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
