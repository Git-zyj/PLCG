/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73874
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
    for (short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_16)), (arr_3 [(signed char)9] [i_1] [i_0]))), (((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_2]))))))) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_2 + 1] [i_0 - 3] [i_0 - 3])), (arr_0 [i_0 - 2] [i_2 - 1])))))))));
                    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) min((var_13), (var_13))))) / (arr_7 [i_0 + 1] [8ULL] [(signed char)9] [i_2 + 1]))), (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0]))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((unsigned int) var_1));
}
