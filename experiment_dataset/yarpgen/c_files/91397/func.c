/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91397
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) (-(var_16))))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_14);
}
