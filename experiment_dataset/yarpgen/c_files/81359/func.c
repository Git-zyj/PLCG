/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81359
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
    var_18 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) (unsigned short)22793)), (var_0))))), (((/* implicit */long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) -2032645448);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
            }
        } 
    } 
}
