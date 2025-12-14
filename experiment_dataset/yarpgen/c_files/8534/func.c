/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8534
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
    var_10 = ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_7)))))) ? ((~(9ULL))) : (max(((+(var_3))), (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((unsigned long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (18446744073709551606ULL))), ((~(18446744073709551615ULL))))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) ^ (var_5))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27499)))))))) ? (((((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))) + (((/* implicit */int) ((_Bool) 3812284729841431735ULL))))) : ((-(((/* implicit */int) (short)27490))))));
            }
        } 
    } 
}
