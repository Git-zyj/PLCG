/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8634
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
    var_10 = ((/* implicit */unsigned char) ((_Bool) var_7));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1 - 1] = ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (arr_3 [i_1] [i_0 + 2]))) <= (((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 2])) ? (1880785505199795614LL) : (arr_3 [i_1] [i_0 + 2]))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((long long int) ((_Bool) ((((/* implicit */_Bool) 2199023255551ULL)) ? (((/* implicit */int) (short)-19861)) : (((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_4);
}
