/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66381
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) / (var_1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) 1117734041U);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) ^ (((/* implicit */int) arr_0 [i_0] [i_1])))), (arr_3 [i_0] [i_0])));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
    } 
}
