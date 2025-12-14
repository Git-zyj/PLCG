/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77387
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)0)), (609085963157394318LL)));
                    arr_7 [i_0] [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) min((609085963157394318LL), ((~(((609085963157394318LL) << (((((/* implicit */int) var_9)) - (250)))))))));
                }
            } 
        } 
    } 
    var_15 = max((609085963157394318LL), (((-609085963157394318LL) / (-609085963157394332LL))));
    var_16 = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(var_12))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_1)))))))))));
}
