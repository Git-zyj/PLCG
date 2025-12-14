/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56543
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_1] [i_0])), (((unsigned char) arr_2 [i_0] [i_0] [i_0])))));
                var_18 = ((/* implicit */_Bool) min((min((max((var_5), (var_9))), (((/* implicit */long long int) ((var_4) - (((/* implicit */int) var_13))))))), (((/* implicit */long long int) arr_1 [21LL]))));
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_16))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */int) max(((signed char)-59), (var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_9)));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_1))));
}
