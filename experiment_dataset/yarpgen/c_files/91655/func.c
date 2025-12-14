/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91655
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((5411814130165575832LL) << (((((/* implicit */int) (unsigned char)40)) - (40)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((var_0) / (((/* implicit */long long int) var_6))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((17870523911912748907ULL) >> (((((/* implicit */int) (signed char)-114)) + (126)))));
                arr_5 [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) 5411814130165575832LL);
            }
        } 
    } 
}
