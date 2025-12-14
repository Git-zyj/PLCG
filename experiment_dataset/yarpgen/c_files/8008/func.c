/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8008
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
    var_19 = 13692108924379695454ULL;
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 -= arr_4 [i_0] [i_1];
                    var_22 -= ((/* implicit */short) (+(((/* implicit */int) (short)-15300))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned int) var_9)), (max((4083556238U), (((/* implicit */unsigned int) var_2)))))));
                }
            } 
        } 
    } 
}
