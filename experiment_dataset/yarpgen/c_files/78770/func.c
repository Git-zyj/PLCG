/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78770
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) var_15);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(var_9)));
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
    var_21 = ((/* implicit */_Bool) min((max((max((var_13), (((/* implicit */unsigned long long int) -4818730)))), (var_7))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_16)))) > (((/* implicit */int) var_6)))))));
}
