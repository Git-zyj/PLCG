/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83655
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) max((-7454270078827571501LL), (((/* implicit */long long int) (signed char)-52)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_5)), (var_1))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_3);
                arr_7 [i_0] [i_1] = ((/* implicit */int) var_4);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) var_6)) / (((var_4) + (((/* implicit */long long int) var_6)))))) | (var_4)));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7454270078827571519LL))));
}
