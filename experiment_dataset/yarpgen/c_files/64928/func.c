/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64928
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) var_8);
                arr_5 [i_0] [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28092)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
                arr_6 [i_1] = ((/* implicit */signed char) (-(arr_2 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_10))));
}
