/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59537
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 *= ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) 633897273)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (-1572615245710662297LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)208)))))) & (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_17)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))))));
                    arr_8 [i_1] &= ((/* implicit */unsigned short) ((unsigned long long int) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((max((min((var_9), (((/* implicit */unsigned long long int) var_19)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_13)), (var_3)))))), (((/* implicit */unsigned long long int) var_18))));
}
