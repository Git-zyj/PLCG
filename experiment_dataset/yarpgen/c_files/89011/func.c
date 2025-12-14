/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89011
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [6U] [6U] = (-((+(arr_1 [i_0]))));
                arr_5 [i_1] [4U] = ((/* implicit */unsigned int) ((((var_12) - (arr_3 [i_1]))) >= (((((/* implicit */_Bool) var_10)) ? (arr_2 [5U] [4U] [i_1]) : (var_17)))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (2572532588U)));
            }
        } 
    } 
    var_19 = min((min((var_14), (var_14))), (var_0));
    var_20 &= var_7;
}
