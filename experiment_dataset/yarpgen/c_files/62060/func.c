/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62060
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2281562127U)) ? ((~(2281562139U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) << (((((/* implicit */int) arr_0 [i_1] [i_1])) + (56)))));
                var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)67)))))) : (min((((/* implicit */unsigned int) -781328657)), (arr_5 [i_0] [i_0]))))) * (((/* implicit */unsigned int) var_9))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) 1774417704);
}
