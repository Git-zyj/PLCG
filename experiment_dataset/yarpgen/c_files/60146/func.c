/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60146
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31812))) >= (var_5))))) & (var_2)))));
                arr_5 [i_1] [i_1] [i_0] |= ((/* implicit */int) (short)31825);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (max((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) var_2))))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) | (min((4018922951U), (((/* implicit */unsigned int) (short)-31816))))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (((signed char) (unsigned short)3130))))) : (((/* implicit */int) (short)31812))));
}
