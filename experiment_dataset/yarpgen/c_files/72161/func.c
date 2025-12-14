/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72161
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned short)48472), ((unsigned short)42744))))));
                    var_20 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_8 [(unsigned short)15] [i_1 - 2] [i_1 - 1])) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [(unsigned char)13] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1 - 1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
}
