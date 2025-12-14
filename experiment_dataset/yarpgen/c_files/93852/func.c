/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93852
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
    var_16 += ((/* implicit */unsigned short) var_15);
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0 + 2] [i_0 + 2]), (((/* implicit */short) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_1]))) : (var_3))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (signed char)-75);
                var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (var_5)))))) ? (((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) (short)-13042)))) / (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) min((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_1])))))));
            }
        } 
    } 
}
