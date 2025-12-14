/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76693
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) arr_2 [i_0]);
                var_11 ^= ((/* implicit */short) ((var_8) << (((((min((var_2), (((/* implicit */long long int) var_4)))) + (24561LL))) - (18LL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)));
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_3)))))));
    var_14 = ((/* implicit */signed char) var_2);
    var_15 = ((/* implicit */short) var_9);
}
