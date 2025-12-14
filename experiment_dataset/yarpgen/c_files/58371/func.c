/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58371
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
    var_16 ^= ((/* implicit */unsigned short) var_15);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_2] |= ((/* implicit */long long int) (+(((unsigned int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) max((max(((short)-5478), (((/* implicit */short) arr_1 [i_0] [i_0])))), (((/* implicit */short) ((signed char) var_12)))))) : (((/* implicit */int) ((unsigned char) arr_8 [i_0])))));
                    var_18 = ((/* implicit */unsigned int) max((min((arr_5 [i_0] [(signed char)12] [i_2]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) arr_4 [i_0])), (var_7)))))));
                }
            } 
        } 
    } 
    var_19 = max((((_Bool) var_3)), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1))))))));
}
