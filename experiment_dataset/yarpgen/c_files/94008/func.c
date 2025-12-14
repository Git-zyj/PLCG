/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94008
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) * (((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) var_9)) : (var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (-(var_3)));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) min(((signed char)-117), (((/* implicit */signed char) (_Bool)0))));
                var_13 = ((/* implicit */_Bool) (-(min((max((arr_6 [i_0] [i_0]), (((/* implicit */int) (unsigned char)255)))), (532410924)))));
            }
        } 
    } 
}
