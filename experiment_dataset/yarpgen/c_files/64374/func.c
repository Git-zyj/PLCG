/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64374
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((0), ((((~(((/* implicit */int) arr_4 [i_1] [i_0] [i_0 + 4])))) & (((/* implicit */int) (unsigned char)14))))));
                arr_6 [i_0] [i_1] [10U] = arr_2 [i_0] [i_1] [i_0];
                var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_1 [i_0 - 1] [i_1]), (arr_1 [i_0 + 2] [i_1])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 + 4] [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */short) (unsigned char)14);
    var_21 = ((/* implicit */long long int) min((((int) (!(((/* implicit */_Bool) var_16))))), (((/* implicit */int) (unsigned char)97))));
}
