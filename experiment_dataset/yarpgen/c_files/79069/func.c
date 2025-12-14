/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79069
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
    var_15 = ((/* implicit */unsigned int) min((max((var_5), (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_8))));
    var_16 |= ((/* implicit */unsigned short) max((((short) (!(((/* implicit */_Bool) (short)12149))))), (((/* implicit */short) var_0))));
    var_17 = ((/* implicit */unsigned char) ((short) ((unsigned short) (signed char)30)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [2LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) 368264086U));
                    var_18 = ((/* implicit */unsigned short) 3926703210U);
                }
            } 
        } 
    } 
}
