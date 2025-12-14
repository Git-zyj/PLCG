/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63109
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
    var_15 &= ((/* implicit */int) var_2);
    var_16 = var_1;
    var_17 = ((/* implicit */long long int) max((((/* implicit */short) var_4)), (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_1 [i_0]);
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) (unsigned char)31))), (((short) 3311456917U))));
                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1]))))) && (((((/* implicit */_Bool) arr_5 [1ULL])) && (((/* implicit */_Bool) var_2)))))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_6 [i_1 - 2] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [7U])) || (((/* implicit */_Bool) arr_3 [i_0])))))) : (-1LL)))), (min((((/* implicit */unsigned long long int) min((arr_5 [i_0]), ((unsigned char)161)))), (var_10)))));
            }
        } 
    } 
}
