/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96508
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
    var_19 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_16);
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_17))));
                arr_6 [i_0] = ((/* implicit */signed char) ((2305561534236983296LL) * (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_1] [i_0] [i_1 - 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_17))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -9189886425660311908LL)) : (var_0))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((/* implicit */int) var_5)))))));
}
