/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66542
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
    var_18 = ((/* implicit */signed char) var_17);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2] [i_2]);
                    arr_7 [i_0] [i_0] [i_0] = 15451000240635596663ULL;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -3758010190667117938LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_7)))) ? (max((((/* implicit */unsigned long long int) var_5)), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_1))));
    var_20 = ((((/* implicit */_Bool) ((unsigned short) min((var_11), (var_11))))) ? (min((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) 16383U)), (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
}
