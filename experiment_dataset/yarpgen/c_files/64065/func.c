/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64065
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
    for (long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), ((~(((((/* implicit */_Bool) 288230375883276288LL)) ? (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                    var_14 ^= ((long long int) (~(((/* implicit */int) ((7834806224846024069LL) != (5016772855534767541LL))))));
                }
            } 
        } 
    } 
    var_15 = ((long long int) ((long long int) var_1));
}
