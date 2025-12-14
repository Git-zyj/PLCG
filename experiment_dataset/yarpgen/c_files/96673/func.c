/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96673
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */_Bool) max(((signed char)-1), (((/* implicit */signed char) (_Bool)0))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) ? (var_11) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) arr_5 [i_0] [i_0])))))))) ^ (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_2)))) ^ (((/* implicit */int) var_3)))));
    var_16 = ((/* implicit */short) (((+(((/* implicit */int) var_2)))) * (((/* implicit */int) var_10))));
}
