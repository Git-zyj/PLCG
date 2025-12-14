/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64255
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((min((arr_2 [i_1]), (((/* implicit */unsigned int) (signed char)-1)))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)9)))))));
                var_15 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
    var_17 = ((var_3) ? (((/* implicit */int) var_7)) : (var_5));
    var_18 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)145)), (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((var_4), (((/* implicit */unsigned long long int) (signed char)-1)))))), (((/* implicit */unsigned long long int) var_13))));
    var_19 = ((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (short)-32755)))));
}
