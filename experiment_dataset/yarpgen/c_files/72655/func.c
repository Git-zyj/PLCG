/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72655
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
    var_10 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((((arr_5 [i_0] [i_0] [i_0]) >> (((((/* implicit */int) var_5)) - (16403))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) & (((/* implicit */int) (unsigned char)115))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_5 [8LL] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)88)))))))));
                var_12 = ((/* implicit */unsigned short) ((int) var_8));
            }
        } 
    } 
    var_13 -= ((/* implicit */signed char) (unsigned char)115);
}
