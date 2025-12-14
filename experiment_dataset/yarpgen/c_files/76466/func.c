/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76466
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] [i_1] [(short)8] |= ((/* implicit */int) (~(min((6609097060480704356LL), (((long long int) arr_0 [i_0]))))));
                arr_5 [i_0] [i_0 - 1] [i_0] = (((!(((/* implicit */_Bool) arr_1 [i_0 + 2])))) ? (max((((unsigned long long int) arr_2 [i_0] [i_1] [i_1])), (((/* implicit */unsigned long long int) (unsigned short)48145)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0 + 1] [i_0 - 3])))));
                var_19 &= ((/* implicit */long long int) ((unsigned char) var_12));
                arr_6 [i_0 + 1] [(unsigned char)4] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_8);
    var_21 -= ((/* implicit */long long int) (-(-68494827)));
}
