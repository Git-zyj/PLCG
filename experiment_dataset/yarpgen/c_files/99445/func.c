/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99445
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
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(var_12))), (((/* implicit */int) arr_0 [i_0]))))) ? (max((((/* implicit */int) (_Bool)1)), ((~(arr_5 [i_0] [i_0]))))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned long long int) (unsigned char)0)) : (((unsigned long long int) var_0))))));
}
