/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61097
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) 3236446087639893055LL);
                    arr_9 [i_0] [12U] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [11])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [12LL] [i_1]))) % (arr_2 [i_0] [(_Bool)1]))) : (((/* implicit */long long int) arr_3 [i_0] [(unsigned short)7] [(unsigned char)12]))))) <= ((-(var_4)))));
                    arr_10 [i_0] = ((/* implicit */int) arr_5 [1LL] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (max((var_7), (((/* implicit */unsigned long long int) var_3))))));
    var_15 |= ((/* implicit */unsigned char) var_5);
}
