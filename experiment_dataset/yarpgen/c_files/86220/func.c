/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86220
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
    var_13 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_1))));
                    var_15 = var_4;
                    arr_9 [(short)8] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [9ULL] [i_1] [i_0])) ? (((((/* implicit */_Bool) ((arr_5 [i_1] [(signed char)3]) / (var_12)))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_2])))))) : (((/* implicit */int) var_3))));
                    var_16 = var_9;
                }
            } 
        } 
    } 
}
