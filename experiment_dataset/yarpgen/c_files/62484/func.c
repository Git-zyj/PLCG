/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62484
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
    var_17 = ((/* implicit */long long int) var_5);
    var_18 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((max((((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))), (((arr_0 [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) : (-76381087))) : (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
                var_20 -= ((/* implicit */short) (-(max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) (short)15275))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) 31U);
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((7208715088669326618LL) >> (((var_1) + (730576914))))))));
}
