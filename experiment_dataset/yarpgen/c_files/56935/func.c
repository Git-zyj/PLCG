/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56935
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
    var_11 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [(signed char)11] [i_1] [i_2])), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_0 [i_0 + 1])))));
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_2] [(unsigned short)4]))))));
                }
            } 
        } 
    } 
}
