/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69296
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) arr_5 [i_0] [i_1] [(short)6]);
                arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 18005602416459776LL))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 132419522U)) && (((/* implicit */_Bool) 3007284479U)))))));
                var_19 |= (!(((/* implicit */_Bool) var_14)));
                var_20 = (~(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 + 2]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_7), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))))))));
    var_22 = -18005602416459776LL;
    var_23 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) -2126148874)))));
}
