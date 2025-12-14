/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83739
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (33554431) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) (signed char)102)) - (97)))));
                    arr_7 [i_0] [7U] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0 + 3] [i_0 - 2] [i_0 + 3]))))), (var_4)));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (((((/* implicit */_Bool) (signed char)102)) ? (var_7) : (((unsigned long long int) (signed char)-103)))))))));
    var_18 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)22171)) : (((/* implicit */int) (unsigned short)42713))))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_14))));
}
