/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56389
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_3 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)5929))))))))) ? (((/* implicit */int) ((unsigned char) (signed char)0))) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 2] [i_2])) > (var_3))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)110))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_13);
    var_21 = ((/* implicit */unsigned char) var_12);
}
