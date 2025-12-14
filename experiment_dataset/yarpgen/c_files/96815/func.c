/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96815
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
    var_10 = ((/* implicit */short) ((_Bool) var_2));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1651953813) : (-1651953797)))), (0LL)));
                    var_12 = ((/* implicit */unsigned long long int) (~((-(1651953805)))));
                }
            } 
        } 
    } 
    var_13 = min((((unsigned short) ((((/* implicit */_Bool) 1651953825)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))));
    var_14 = ((/* implicit */signed char) var_9);
}
