/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59588
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
    var_15 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_4 [i_0] [i_1] [(_Bool)0])))) + (2147483647))) >> (((((arr_4 [i_0] [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_0] [i_1]))) + (7919867647759159269LL)))));
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((var_0), (arr_5 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
