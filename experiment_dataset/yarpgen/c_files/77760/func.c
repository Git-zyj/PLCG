/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77760
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_9))))));
                var_19 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_3])));
                            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) -1186847502));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) var_11);
    var_22 -= ((/* implicit */unsigned int) var_4);
}
