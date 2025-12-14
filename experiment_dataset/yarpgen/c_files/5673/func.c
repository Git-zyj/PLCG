/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5673
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)24)))) != ((+(((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0])), (var_9)))))));
                    arr_10 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) max((((/* implicit */long long int) var_10)), (var_0)));
}
