/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82484
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (!(((arr_3 [i_0 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                arr_4 [i_0 - 1] [i_0 - 1] = (-(((/* implicit */int) var_4)));
                var_17 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0 - 4])) * (((/* implicit */int) arr_1 [i_0 - 3])))) ^ (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 - 4]))))));
                arr_5 [i_0] = ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (var_11) : (arr_0 [i_1])));
            }
        } 
    } 
    var_18 = var_13;
}
