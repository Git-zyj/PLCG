/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75501
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (var_7) : (var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_5))) : (max((var_1), (var_10)))))) ? (max((((/* implicit */unsigned int) min(((unsigned char)237), ((unsigned char)237)))), (var_1))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) var_8)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((unsigned char) (unsigned char)22)))) ? (max((((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) var_0))))), (((long long int) var_4)))) : (((/* implicit */long long int) var_2))));
                    var_14 = ((/* implicit */unsigned char) var_3);
                    var_15 = ((/* implicit */unsigned short) var_3);
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) 4269448510U))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) -973877671933534282LL)));
}
