/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68043
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_0])))))) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1]))));
                var_16 ^= ((/* implicit */unsigned short) arr_1 [i_1] [11ULL]);
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_4 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
