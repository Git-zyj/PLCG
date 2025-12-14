/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96087
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
    var_11 *= ((/* implicit */unsigned int) ((-4249469483434146952LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) min((arr_5 [i_0 + 1] [i_1] [i_2]), (((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) -1152692407)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_2])) && (((/* implicit */_Bool) var_3)))))))));
                    var_13 = ((_Bool) ((max((((/* implicit */long long int) var_4)), (arr_4 [i_0 + 1] [i_0 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                    var_14 = ((/* implicit */_Bool) arr_4 [i_2 + 3] [i_1]);
                }
            } 
        } 
    } 
}
