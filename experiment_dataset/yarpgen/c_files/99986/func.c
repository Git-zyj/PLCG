/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99986
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
    var_15 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_5)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (((((/* implicit */long long int) (-(((/* implicit */int) var_1))))) + (min((arr_1 [i_0] [i_2]), (4842489210482587766LL)))))));
                    var_17 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
