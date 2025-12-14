/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70194
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
    var_16 = var_4;
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) ((((7666294848119065274ULL) == (((/* implicit */unsigned long long int) 7679257139644455128LL)))) || (((/* implicit */_Bool) arr_1 [i_1]))));
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    var_18 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                    var_19 = ((/* implicit */signed char) arr_2 [i_0] [i_0 + 1] [i_0]);
                    var_20 = ((/* implicit */long long int) ((max((arr_5 [i_0]), (min((var_6), (arr_1 [i_2 + 1]))))) > (((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0] [i_2 - 2])) / (var_12))) != (((/* implicit */int) arr_3 [i_2 - 4] [i_0 + 2])))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0]), (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1] [i_1] [i_0])) / (((/* implicit */int) arr_2 [i_2 - 2] [i_2] [i_0])))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
