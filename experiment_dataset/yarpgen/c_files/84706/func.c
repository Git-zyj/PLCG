/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84706
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
    var_12 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)21036)), (12625747964069716638ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (1548148902U)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_2 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 2] [(unsigned short)10]))));
                    var_13 = ((((/* implicit */_Bool) 3883143143U)) ? (2746818403U) : (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))));
                }
            } 
        } 
    } 
}
