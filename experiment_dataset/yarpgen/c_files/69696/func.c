/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69696
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)7] = ((/* implicit */unsigned char) 3068337662U);
                var_16 -= ((((/* implicit */_Bool) (-(((2824017613U) - (arr_4 [i_0])))))) ? ((-(2824017613U))) : (min((((/* implicit */unsigned int) ((arr_0 [i_0]) < (arr_5 [i_0] [i_0] [(signed char)10])))), (((unsigned int) arr_1 [i_1 - 2])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
}
