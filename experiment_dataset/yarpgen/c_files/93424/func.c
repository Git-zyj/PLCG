/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93424
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((3255728476U) - (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */long long int) arr_6 [i_0] [i_1 + 3] [i_2] [13U])) : (((((/* implicit */_Bool) arr_6 [i_0] [(short)3] [i_0] [i_2])) ? (6464307423934118793LL) : (((/* implicit */long long int) 1480967359U)))))))));
                    var_11 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)32758))) | (arr_8 [i_0])));
                    arr_10 [10LL] [i_1 + 2] = var_8;
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (-(min((((/* implicit */long long int) arr_0 [i_0] [i_1 + 4])), (((long long int) arr_4 [i_0] [i_1 + 2] [i_2])))))))));
                    var_13 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32727))) / (2920589484U))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */long long int) (~(-1607945963)))) : (max((((/* implicit */long long int) var_0)), (6464307423934118777LL))))) / (((/* implicit */long long int) var_9)))))));
}
