/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57820
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
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] = arr_2 [i_0] [i_0] [i_1];
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (-1854226347)))), (arr_0 [i_1])));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_0] [9] [i_0]), (min((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1])), (arr_2 [i_0] [i_1] [9LL])))) : ((~((((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_0] [7LL])) : (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_12)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1771751624U)))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))))))));
}
