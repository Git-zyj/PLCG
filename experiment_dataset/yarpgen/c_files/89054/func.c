/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89054
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
    var_10 = ((/* implicit */int) max((var_10), (((((/* implicit */int) var_5)) / (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)7)) % (((/* implicit */int) (unsigned char)181))))) ? (((((/* implicit */int) (unsigned char)79)) / (2026528025))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                arr_7 [i_0] = ((/* implicit */long long int) var_5);
                var_11 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_0] [i_1]));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2))));
}
