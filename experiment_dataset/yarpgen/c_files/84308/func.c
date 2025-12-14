/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84308
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_19)) % (((/* implicit */int) var_3)))))))), (max((var_6), (((/* implicit */unsigned short) var_17))))));
                arr_4 [i_0] = ((/* implicit */long long int) var_9);
                var_21 ^= ((/* implicit */long long int) ((unsigned char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))), (((/* implicit */unsigned long long int) ((unsigned int) var_16))))));
            }
        } 
    } 
    var_22 = ((signed char) (((!(((/* implicit */_Bool) var_18)))) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_4)))))));
    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (signed char)-19)))));
}
