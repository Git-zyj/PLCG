/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61025
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
    var_20 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */int) arr_3 [i_1 - 1]);
                    var_22 = ((arr_9 [i_0] [i_1] [(unsigned short)16] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1]))))));
                    var_23 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) arr_2 [i_0] [18LL])), ((~(((/* implicit */int) arr_7 [i_2] [i_2] [(short)19] [1ULL])))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_2 [19] [i_1]))))))) ? (((/* implicit */int) arr_8 [i_0])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)65535))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (((-(((/* implicit */int) var_18)))) + (var_1))))));
}
