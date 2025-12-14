/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89777
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_6))));
    var_20 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((unsigned short)64923), ((unsigned short)0)))) : (((/* implicit */int) ((unsigned char) var_1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [13ULL] [i_0] &= ((/* implicit */unsigned int) min((((signed char) var_5)), (((signed char) var_4))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_17))));
                }
            } 
        } 
    } 
}
