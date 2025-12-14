/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76256
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
    var_20 = ((/* implicit */unsigned long long int) var_6);
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (signed char)53)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */_Bool) 2147483631)) && (((/* implicit */_Bool) arr_3 [i_0]))))))), (((/* implicit */int) ((unsigned short) (+(arr_0 [i_0])))))));
                var_23 = ((/* implicit */_Bool) arr_2 [i_0 - 4]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_1);
}
