/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90188
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1119997080U)) ? (max((((/* implicit */long long int) (unsigned char)211)), (-6164692930349553630LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_0 [i_1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65535)))))));
                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7)) >= (((/* implicit */int) var_4))));
}
