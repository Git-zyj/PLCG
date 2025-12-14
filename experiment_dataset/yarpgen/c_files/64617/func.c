/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64617
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (signed char)110);
                    var_13 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_4 [i_3]))))));
        var_16 = ((/* implicit */long long int) ((_Bool) (short)-4096));
        var_17 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3])), (max((((/* implicit */unsigned long long int) 32640LL)), (0ULL))))));
    }
}
