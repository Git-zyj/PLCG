/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78997
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((min((((234881024) + (((/* implicit */int) (short)63)))), (((var_5) - (((/* implicit */int) var_9)))))), (((/* implicit */int) var_10)))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */_Bool) min((min((var_4), (max((((/* implicit */unsigned int) (signed char)113)), (1545764210U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51788)))))));
}
