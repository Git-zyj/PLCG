/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6330
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
    var_19 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
                var_21 = ((/* implicit */unsigned char) ((18446744073709551615ULL) * (min(((+(18446744073709551603ULL))), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) == (arr_1 [i_0] [i_1 + 1]))))))));
                var_22 = ((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_1]);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 1])))) ? (arr_2 [i_0 + 1] [i_1]) : (((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (8U)))));
            }
        } 
    } 
}
