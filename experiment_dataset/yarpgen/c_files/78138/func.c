/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78138
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) max((max((arr_3 [i_0 + 1] [2U]), (max((arr_2 [i_0]), (arr_2 [i_0 + 1]))))), (max((max((arr_3 [i_0 + 1] [(short)7]), (arr_3 [i_0 + 1] [i_1]))), (((/* implicit */unsigned short) arr_0 [(unsigned short)13]))))));
                var_11 = ((/* implicit */short) max(((unsigned short)65527), (((/* implicit */unsigned short) (short)-8992))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_6 [i_2]))));
        var_13 = ((/* implicit */int) arr_6 [11U]);
    }
    var_14 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_9))))), (var_1))), (((/* implicit */unsigned int) var_5))));
}
