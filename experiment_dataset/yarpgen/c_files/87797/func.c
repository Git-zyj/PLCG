/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87797
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
    var_10 = ((/* implicit */signed char) max((min((((/* implicit */long long int) min((var_1), (((/* implicit */int) var_7))))), (max((3814450710743474627LL), (3814450710743474626LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (((((/* implicit */_Bool) (short)-2387)) ? (1628031487U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) var_3);
                var_11 ^= ((/* implicit */int) (+((~((~(3814450710743474627LL)))))));
                arr_7 [i_0 + 1] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((arr_2 [(signed char)11] [i_0 - 2]), (((/* implicit */long long int) var_7))))), (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10886628632116987938ULL)))));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned char) var_3);
}
