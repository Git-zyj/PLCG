/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81835
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
    var_18 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) (!(((/* implicit */_Bool) var_5))))));
    var_19 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-11)), ((unsigned short)51788)))) : (((/* implicit */int) (signed char)88)));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_1 [i_0 - 1]) == (arr_1 [i_0 - 1])))), ((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967267U)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (short)-18998))));
            }
        } 
    } 
}
