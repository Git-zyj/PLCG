/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84752
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
    var_16 += ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */unsigned long long int) min((max((max((-1362009236), (((/* implicit */int) (_Bool)0)))), (var_6))), (((/* implicit */int) var_1))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max(((short)(-32767 - 1)), (((/* implicit */short) var_2)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */short) (-(var_10)));
                    var_19 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -135915175)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
}
