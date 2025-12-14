/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73606
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11229264853801312769ULL)) ? (((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])) : (var_10)))) >= (5347124356656420369ULL)));
                    arr_7 [i_2] = ((/* implicit */int) ((unsigned char) var_5));
                    arr_8 [i_2] [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (776124099588263827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (max((776124099588263827ULL), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_5)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_5);
}
