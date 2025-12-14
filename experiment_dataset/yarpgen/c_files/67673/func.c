/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67673
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
    var_10 = 10511115157668781803ULL;
    var_11 = ((/* implicit */unsigned long long int) (((~(var_0))) <= (max((min((var_4), (0ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = 0ULL;
                var_13 -= ((unsigned long long int) ((var_8) | (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (10092315315838541027ULL) : (var_9)))));
            }
        } 
    } 
}
