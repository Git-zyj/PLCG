/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6175
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
    var_17 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)63635))))) ? (((/* implicit */int) (short)29472)) : (((/* implicit */int) (_Bool)1))))) != (max((((((/* implicit */long long int) var_12)) & (var_15))), (((/* implicit */long long int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_18 = ((/* implicit */short) (((((-(((/* implicit */int) var_7)))) < (((/* implicit */int) var_16)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */long long int) (unsigned char)246);
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_1 + 2] = ((/* implicit */unsigned long long int) var_7);
                var_21 ^= ((/* implicit */unsigned int) var_16);
            }
        } 
    } 
}
