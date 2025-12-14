/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61745
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned int) ((int) var_12))) : (((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(var_8)))))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0 + 2]), (arr_5 [i_0])))) ? (min((arr_4 [i_0 + 2]), (arr_5 [i_0]))) : (arr_4 [i_0])));
                }
            } 
        } 
    } 
}
