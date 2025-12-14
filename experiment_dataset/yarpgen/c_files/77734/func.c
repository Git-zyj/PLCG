/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77734
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (short)14991))) >> (((arr_4 [(short)9] [(short)9]) + (263461112))))))));
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))), (((unsigned long long int) arr_1 [(unsigned char)10]))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) min((var_0), (var_19)))) : ((~(((/* implicit */int) var_7))))));
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7)))))))))));
    var_25 |= var_16;
}
