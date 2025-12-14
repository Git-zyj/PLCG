/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7552
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73))))), ((+(((/* implicit */int) (signed char)-93))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) ^ (((/* implicit */int) (signed char)72))))) ? (((/* implicit */int) (signed char)-73)) : ((~(((/* implicit */int) (signed char)69)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (signed char)73)) : (550709038)))))))));
                arr_5 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((var_9), ((signed char)-56)))))))));
                arr_6 [i_0] = ((/* implicit */int) max(((-((-(4796250U))))), (((/* implicit */unsigned int) max((max((-550709038), (-14277542))), ((+(((/* implicit */int) (signed char)40)))))))));
                var_19 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 5757868))))) >> (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) 3848290697216LL);
}
