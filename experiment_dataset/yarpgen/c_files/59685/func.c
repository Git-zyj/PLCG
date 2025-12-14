/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59685
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
    var_12 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_4))));
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (0ULL)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (12713077590652642098ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */signed char) arr_0 [17LL] [i_1]);
                    var_16 = 6995269404606352918ULL;
                }
            } 
        } 
    } 
}
