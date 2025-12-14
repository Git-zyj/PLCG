/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98226
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
    var_13 = (!((_Bool)1));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (340975652) : (max((var_8), (((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_2]))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)13] [i_1] [i_1] [i_1])) ? ((+(((/* implicit */int) var_6)))) : ((+(arr_7 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
