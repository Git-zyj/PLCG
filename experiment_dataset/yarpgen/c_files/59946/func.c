/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59946
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
    var_18 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_15)), ((((-(var_0))) >> (((var_17) + (463871586)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 = (short)12265;
                    var_20 &= ((/* implicit */_Bool) arr_0 [i_1]);
                    var_21 = ((unsigned short) var_13);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (short)-22725)), (((int) (short)-6))));
                }
            } 
        } 
    } 
}
