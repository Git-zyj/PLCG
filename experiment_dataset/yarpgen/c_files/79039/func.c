/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79039
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_2]))) - (4092661936U))), (((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 1] [i_2 + 1])) ? (4092661955U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8736)))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0 - 1] [i_0 + 2])) || (((/* implicit */_Bool) arr_4 [i_2] [i_0 - 1] [i_0 + 1]))))) & (((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))));
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (202305356U)))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
}
