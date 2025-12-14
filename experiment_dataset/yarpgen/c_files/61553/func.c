/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61553
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
    var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5847))) : (-8334309693099886675LL)));
    var_19 = ((/* implicit */int) min((((/* implicit */long long int) var_16)), (var_10)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)12] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (22467)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-5847)) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
}
