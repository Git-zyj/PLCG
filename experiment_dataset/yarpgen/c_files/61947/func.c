/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61947
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [8U] [i_0] = (+(536870911U));
                    arr_8 [i_0] [i_1] [i_0] = min((360890434U), (2198274457U));
                }
            } 
        } 
    } 
    var_18 ^= var_17;
    var_19 = ((/* implicit */unsigned int) max((var_19), (((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) + (var_8))) ^ (var_13)))));
    var_20 = (+(var_13));
}
