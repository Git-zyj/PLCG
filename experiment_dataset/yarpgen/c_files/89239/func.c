/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89239
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
    var_12 = ((/* implicit */_Bool) var_11);
    var_13 = ((/* implicit */unsigned short) ((((_Bool) 4373711255496360116LL)) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 4943368728885465757ULL)) || (((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) max(((_Bool)1), (((var_7) == (((/* implicit */int) var_11)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 1] [i_0]))) - (max((var_1), (((/* implicit */unsigned long long int) 2824649558U)))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
}
