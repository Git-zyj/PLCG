/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75013
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
    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (var_12)))), (((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) min((((int) arr_1 [i_1])), (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0]))));
                    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_1] [i_0])) : (arr_2 [i_0])));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) ((_Bool) var_4));
}
