/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85991
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [(unsigned short)7] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                var_12 = ((/* implicit */_Bool) (-(min((894754463U), (894754478U)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) > (max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))), (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))))))));
}
