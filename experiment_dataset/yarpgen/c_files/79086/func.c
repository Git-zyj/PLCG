/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79086
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
    var_14 = min((((/* implicit */long long int) -1002515204)), ((~(((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_0))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((/* implicit */int) arr_4 [i_0])), (min((arr_0 [(signed char)10] [i_1 + 3]), (arr_0 [(unsigned char)2] [i_1 - 4]))))))));
                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)8898)), (15273214274704612861ULL)));
                arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_1] [i_1]);
                var_17 *= ((/* implicit */unsigned long long int) max(((~((~(((/* implicit */int) (short)-22604)))))), (-1002515186)));
            }
        } 
    } 
}
