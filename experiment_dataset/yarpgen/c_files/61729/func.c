/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61729
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) arr_4 [i_0]);
                var_20 *= ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (((unsigned int) arr_3 [i_0 + 1] [i_0 - 1] [i_1 + 2])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 17; i_2 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) arr_8 [i_2 - 3]))), ((-(((long long int) (short)22409))))));
        var_22 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2]))), (max((arr_6 [(_Bool)1]), (arr_6 [i_2])))))));
    }
    var_23 = ((/* implicit */short) (~(max((((var_2) ? (((/* implicit */int) (short)-22416)) : (var_16))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
}
