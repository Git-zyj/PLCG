/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61108
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((+((+(var_16))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_5 [i_1])), (min((3614541698U), (3614541698U))))))));
                var_18 = ((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0])));
                var_19 = ((/* implicit */unsigned int) (+(min(((+(var_16))), (((/* implicit */long long int) var_7))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((((!(((/* implicit */_Bool) (unsigned char)21)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_6)) ? (var_10) : (680425609U))))), (var_10))))));
}
