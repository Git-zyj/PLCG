/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98902
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_3))));
                var_17 |= ((/* implicit */unsigned int) (+((-(14077357981919943065ULL)))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) > (((/* implicit */int) var_5))));
                arr_7 [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1447583020U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5456)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_7);
}
