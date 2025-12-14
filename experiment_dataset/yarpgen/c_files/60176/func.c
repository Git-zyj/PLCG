/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60176
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(var_3))))));
    var_13 = ((/* implicit */unsigned int) var_2);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (4061546791353762462LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-55))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */long long int) (~(18446744073709551615ULL)));
                    var_16 = ((/* implicit */unsigned long long int) var_2);
                    var_17 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */int) ((((/* implicit */_Bool) 4192256U)) && (((/* implicit */_Bool) -992532682)))))));
                }
            } 
        } 
    } 
}
