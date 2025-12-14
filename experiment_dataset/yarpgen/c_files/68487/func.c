/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68487
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1]))))), (max((min((((/* implicit */unsigned long long int) 1693555678)), (var_3))), (((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_1])))))));
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_0 - 1])) ^ (((/* implicit */int) arr_0 [i_1]))))) || (((/* implicit */_Bool) min((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned char) (_Bool)0))))))))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) | (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)66))) : ((-9223372036854775807LL - 1LL))))))) ? (1693555678) : (((/* implicit */int) max((arr_2 [i_0 + 1] [i_0]), (var_6))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_8))));
                var_19 = ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) var_13)), (5433510474514724830ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_0 + 1]), (arr_3 [i_0] [i_0 - 1]))))));
            }
        } 
    } 
    var_20 = max((min((((/* implicit */unsigned char) var_6)), (var_7))), (((/* implicit */unsigned char) var_4)));
    var_21 = ((/* implicit */long long int) (!(((_Bool) min((var_3), (((/* implicit */unsigned long long int) var_0)))))));
    var_22 = ((/* implicit */unsigned char) var_2);
}
