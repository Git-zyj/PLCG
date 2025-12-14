/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92711
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4095ULL))));
                arr_7 [i_0] [(short)0] [i_1] = ((/* implicit */signed char) (~(min((((/* implicit */int) ((_Bool) var_5))), ((~(((/* implicit */int) arr_5 [i_1]))))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned long long int) (signed char)127)))));
                var_15 = ((/* implicit */int) (unsigned short)65535);
            }
        } 
    } 
    var_16 = (+((~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_6))))))));
    var_17 += ((/* implicit */unsigned long long int) -1);
    var_18 = ((/* implicit */unsigned long long int) (!(var_12)));
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
}
