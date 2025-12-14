/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5923
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned short) var_3)))), (var_12))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 4])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) arr_5 [i_1 - 4] [i_1 + 1])))))));
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1 - 2]))));
                }
                var_17 = ((/* implicit */unsigned short) 16663852688279461705ULL);
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_6))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_9);
}
