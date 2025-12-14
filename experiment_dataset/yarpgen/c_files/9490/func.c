/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9490
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
    var_12 = ((/* implicit */short) ((((((/* implicit */int) (short)-9374)) ^ (((/* implicit */int) (_Bool)1)))) & (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min(((short)-9395), ((short)-2467)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (((((var_5) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0] [i_1])))))) & (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0] [i_1])), ((short)-2149)))))))));
                arr_6 [i_1] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) max((-2299746926649623361LL), (((/* implicit */long long int) arr_4 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)9])))))))));
                arr_7 [i_0] [(unsigned short)15] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0] [i_1])) * (((/* implicit */int) arr_1 [i_0] [i_1])))), (max((((/* implicit */int) arr_1 [13LL] [i_1])), (527318345)))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)1)))))) / (min((((/* implicit */unsigned int) var_10)), (1073741696U)))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_5)))) ? (((var_5) & (((/* implicit */long long int) -527318323)))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0)))))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
}
