/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93607
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), ((~(min((var_6), (max((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */int) (_Bool)1))))))))));
                arr_5 [8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (max((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */int) (_Bool)1)))) : (min((65011712), (((/* implicit */int) arr_0 [i_1]))))))) ? (var_14) : ((~(((/* implicit */int) arr_1 [i_1])))));
                var_21 = ((/* implicit */_Bool) (((-(((((/* implicit */int) var_1)) * (((/* implicit */int) var_12)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                var_22 = ((max(((!(((/* implicit */_Bool) var_13)))), ((!((_Bool)0))))) && (((_Bool) ((int) (_Bool)1))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
}
