/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58615
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_6 [i_0] = (~(var_6));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)5] [2U] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */int) arr_2 [i_2 - 2])) : (((/* implicit */int) arr_2 [i_2 + 1]))))));
                    var_17 = arr_2 [i_0];
                    arr_7 [7] [i_0] = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (signed char)-32);
}
