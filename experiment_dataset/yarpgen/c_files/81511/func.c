/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81511
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))), (((arr_0 [i_0 + 1] [i_0 - 1]) ? (var_4) : (var_1)))));
                var_17 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1]))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) -423247093)), (1588524263U)))))) || (((/* implicit */_Bool) (+(2351987704U))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (3795066956U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (2147483621))))) : (993254464U))) : (min((max((((/* implicit */unsigned int) 2147483632)), (3310725212U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (2147483621))))))));
    var_20 = ((/* implicit */int) ((unsigned int) ((2147483621) >> (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))))));
}
