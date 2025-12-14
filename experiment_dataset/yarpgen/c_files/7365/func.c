/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7365
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
    var_16 = ((/* implicit */_Bool) max((max((var_3), (((/* implicit */int) max((var_2), ((unsigned short)49064)))))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 710007672437374954LL)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [(_Bool)1]))) : (((/* implicit */int) ((unsigned short) arr_0 [i_1]))))));
                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!((_Bool)0)))) & (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
