/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90223
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (var_4)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) != (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))));
                    arr_8 [7LL] [7LL] [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    } 
}
