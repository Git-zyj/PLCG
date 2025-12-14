/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61385
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0 + 1]) && (((/* implicit */_Bool) arr_1 [i_0 + 3])))))) * (arr_1 [i_0 + 2])));
                arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((min((var_8), (((/* implicit */unsigned int) var_15)))) + (max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (short)-30222);
    var_19 = ((/* implicit */_Bool) (-(var_9)));
    var_20 = ((/* implicit */unsigned char) min((var_20), (var_10)));
    var_21 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_15)), (var_14)))))));
}
