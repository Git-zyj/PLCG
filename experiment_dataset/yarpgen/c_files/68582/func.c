/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68582
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
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_2 - 1] [i_3] = ((/* implicit */_Bool) var_14);
                            arr_13 [i_0 + 2] [5U] [i_0 + 2] [i_2] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) == (((arr_10 [i_0 + 1] [i_0] [i_0] [i_1 - 1]) + (((/* implicit */unsigned long long int) var_7))))));
                        }
                    } 
                } 
                var_16 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) var_11))))) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_0])) : (((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) / (3392238441U))), (((/* implicit */unsigned int) var_12)))));
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_12))))) : (((16570480151192218011ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_13))));
}
