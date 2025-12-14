/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9154
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
    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 *= var_1;
                    arr_7 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))), (min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_0)) ? (16189376167190227036ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_16);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(var_9))))))));
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
}
