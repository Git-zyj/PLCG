/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62687
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                arr_4 [i_1] &= ((/* implicit */signed char) ((unsigned int) ((long long int) ((short) var_6))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */_Bool) var_10)) || (var_7)))))), (var_13)));
    var_20 -= ((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))))) || (((/* implicit */_Bool) var_13)));
}
